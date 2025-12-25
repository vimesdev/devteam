#ifndef HL7_H
#define HL7_H
#include <afxtempl.h>

class HL7
{
protected:
	int		m_nRefIdx;

	class HL7Message;

	typedef CArray<HL7Message*, HL7Message*> HL7MessageList;

	class HL7Message{
	public:
		HL7Message(int seq, int length, CString fmt, CString opt, CString name, CString defval);
		~HL7Message();
		int		m_index;
		int		m_seq;
		int		m_length;
		CString	m_fmt;
		CString m_opt;
		CString m_name;
		CString	m_value;
		CString m_default;
		CString m_item;
		CString m_refname;

		HL7MessageList m_components;
		int			GetCount();
		HL7Message*	Get(int nIndex);
		bool		Add(CString szName, CString value);
		void	SetData(CString value);
		void	SetData(CString name, CString value);
		CString ComponentToString();
	};


	class HL7OrderMessage{
	public:
		HL7OrderMessage();
		~HL7OrderMessage();
		HL7MessageList m_ORC;
		HL7MessageList m_OBR;
		CArray<HL7MessageList*, HL7MessageList*> m_OBXList;
	};
	
	CString	m_szData;

	CString m_szMessageType;
	CString	m_szEventTypeCode;
	HL7MessageList m_MSH;
	HL7MessageList m_EVN;
	HL7MessageList m_PID;
	HL7MessageList m_PV1;
	HL7MessageList m_PV2;
	HL7MessageList m_IN1;
	HL7MessageList m_IN2;
	HL7MessageList m_IN3;
	HL7MessageList m_AL1;
	HL7MessageList m_DG1;
	HL7MessageList m_MRG;
	HL7MessageList m_OBX;
	HL7MessageList m_OBR;
	HL7MessageList m_ORC;
	HL7MessageList m_RXO;
	HL7MessageList m_RXE;
	HL7MessageList m_NK1;
	HL7MessageList m_ACC;
	HL7MessageList m_DB1;

	HL7MessageList m_DRG;
	HL7MessageList m_GT1;
	HL7MessageList m_PD1;

	CArray<CString, CString> m_eventMessage;

	CArray<HL7MessageList*, HL7MessageList*> m_PV1List;
	CArray<HL7MessageList*, HL7MessageList*> m_DG1List;
	CArray<HL7MessageList*, HL7MessageList*> m_OBXList;
	CArray<HL7OrderMessage*, HL7OrderMessage*> m_OBRList;
	CArray<HL7OrderMessage*, HL7OrderMessage*> m_ORCList;

	


	CString HL7DateTime(CString szDateTime);
	void	InitMessage(CString szSegment);
	void	InitEvent(CString szEventCode);
	void	ClearMessage(HL7MessageList *pMsg);
	void	SetData(HL7MessageList *pMsg, CString item, CString data);

	void	GetData(long nDocumentNo, CString szEvent);

	

public:

	CString		m_szSendingApplication;
	CString		m_szSendingFacility;
	CString		m_szReceivingApplication;
	CString		m_szReceivingFacility;

	HL7(void);
	~HL7(void);
	void	Clear();
	void	ResetValues();
	virtual void OnInit();
	CString	Export();
	CString Export(HL7MessageList *pMsg);
	bool	Export(long nDocumentNo, CString szEventCode);
	CString	GetData();
};

#endif