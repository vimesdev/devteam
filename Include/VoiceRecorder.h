#ifndef VOICERECORDER_H
#define VOICERECORDER_H

#include "GuiView.h"

#pragma once
#include <MMSystem.h>
#define MAX_BUFFERS	3
// CVoiceRecorder dialog
class CVoiceRecorder : public CGuiView
{
// Construction
public:
	int			m_nDevice;
	CGuiButton	m_wndRecord;
	CGuiLabel	m_wndStatus;
	CWnd*		m_pWndFocus;

	CVoiceRecorder(CWnd* pParent = NULL);	// standard constructor

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	
// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual void OnCreateComponents();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRec();
	afx_msg void OnBnClickedBrowse();
	afx_msg void OnCbnSelchangeDevices();

public:
	void StartRecording();
	void Stop();
	void ProcessHeader(WAVEHDR * pHdr);

private:
	void SetStatus(LPCTSTR lpszFormat, ...);
	void OpenDevice();
	void CloseDevice();
	void PrepareBuffers();
	void UnPrepareBuffers();
	UINT FillDevices();
	CString StoreError(MMRESULT mRes,BOOL bDisplay,LPCTSTR lpszFormat, ...);

	BOOL m_bRun;
	HWAVEIN m_hWaveIn;
	WAVEFORMATEX m_stWFEX;
	WAVEHDR m_stWHDR[MAX_BUFFERS];
	HANDLE m_hThread;
	CString m_csErrorText;
	HMMIO m_hOPFile;
	MMIOINFO m_stmmIF;
	MMCKINFO m_stckOut,m_stckOutRIFF; 
};


#endif