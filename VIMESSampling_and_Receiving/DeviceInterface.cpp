#include "DeviceInterface.h"
#include "MainFrm.h"

void _debug(TCHAR *fmt, ...)
{
	va_list args;
   int len;
   TCHAR * buffer;

   va_start( args, fmt);
   len = _vsctprintf(fmt, args ) + 1; // terminating '\0'
   buffer = (TCHAR*)malloc( len * sizeof(TCHAR) );
   _vstprintf( buffer, fmt, args );
   
	va_end(args);
	::OutputDebugString(buffer);	
	free(buffer);
}

void TrimLeftZero(LPCTSTR lpszData, CString& szRetString){
	szRetString.Empty();
	LPCTSTR pstr = lpszData;
	int n = 0;
	int nLen = _tcslen(lpszData);
	while(*pstr != NULL){
		if(*pstr != _T(' ') && *pstr != _T('0'))
			break;
		n++;
		*pstr++;
	}
	szRetString.SetString(lpszData+n, nLen-n);

}
void ParseResult(LPCTSTR lpszData, LPCTSTR lpszSeperators, CStringArray& fields){
	bool bFlag = false;
	CString tmpStr;
	LPCTSTR pstr = lpszData;
	fields.RemoveAll();
	tmpStr.Empty();
	if(*pstr == NULL)
		return;
	while(*pstr != NULL){
		bFlag = false;
		for (int i =0; i < _tcslen(lpszSeperators); i++){
			if(*pstr == lpszSeperators[i]){
				fields.Add(tmpStr);
				tmpStr.Empty();
				bFlag = true;
				break;
			}
		}
		if(!bFlag)
			tmpStr += *pstr;
		pstr++;
	}
	fields.Add(tmpStr);
}




CDeviceInterface::CDeviceInterface(CWnd *pMainWnd){

	m_szPortName = _T("COM1");
	m_dwBaudrate = 9600;
	m_nDataBits = 8;
	m_nStopBits = 1;
	m_nParity = 0;
	m_nFlowControl = 0;
	m_dwState = 0;
	m_pMainWnd = pMainWnd;
	m_szInitializeData.Empty();
	m_szLine.Empty();
	m_nFlags = -1;
	m_nTray = m_nCup = m_nRackNo = 0;
	m_szResultDate.Empty();
	
}

CDeviceInterface::~CDeviceInterface(){
	m_bSendToken = false;
}

TCHAR CDeviceInterface::GetLRC(LPCTSTR lpszBuffer, int nLength){
	TCHAR chLRC = 0;
	int nCount = nLength;
	while(nCount > 0)
	{
		chLRC ^= *lpszBuffer++;
		nCount--;
	}
	return chLRC;
}

BOOL CDeviceInterface::Open(){
	if(LoadSettings()){
		BOOL ret = CCommPort::Open(m_szPortName, m_dwBaudrate, m_nDataBits, m_nStopBits, m_nParity, m_nFlowControl);
		if(ret > 0){

		}
		return ret;
	}
	return FALSE;
}

void CDeviceInterface::SetMachine(LPCTSTR lpszMachine){
	m_szMachine = lpszMachine;
	m_nFieldIndex = 0;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM lims_protocol WHERE limsp_id='%s' "), m_szMachine);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("limsp_type"), m_nProtocolType);
		rs.GetValue(_T("limsp_mode"), m_nMode);
		rs.GetValue(_T("limsp_sof"), m_szBeginTransmission);
		rs.GetValue(_T("limsp_hor"), m_szHeaderInfo);
		rs.GetValue(_T("limsp_por"), m_szPatientInfo);
		rs.GetValue(_T("limsp_oor"), m_szOrderInfo);
		rs.GetValue(_T("limsp_ror"), m_szResultInfo);
		rs.GetValue(_T("limsp_qor"), m_szRequestInfo);
		rs.GetValue(_T("limsp_tor"), m_szTerminateInfo);
		rs.GetValue(_T("limsp_eof"), m_szEndTransmission);
		rs.GetValue(_T("limsp_init"), m_szInitializeData);
		rs.GetValue(_T("limsp_sep"), m_szSeperator);
		m_szSeperator.Replace(_T("<CR>"), _T("\n"));
		m_szSeperator.Replace(_T("<LF>"), _T("\r"));
		AddTemplateFieldInfo(TAG_HEADER, m_szHeaderInfo);
		AddTemplateFieldInfo(TAG_PATIENT, m_szPatientInfo);
		AddTemplateFieldInfo(TAG_ORDER, m_szOrderInfo);
		AddTemplateFieldInfo(TAG_RESULT, m_szResultInfo);
		AddTemplateFieldInfo(TAG_QUERY, m_szRequestInfo);
		AddTemplateFieldInfo(TAG_TERMINATE, m_szTerminateInfo);
		m_szResultDate.Format(_T("%s"), pMF->GetSysDate());
		_debug(_T("\r\nSysdate=%s"), m_szResultDate);
	}


/*
	if(m_szMachine == _T("ACL9000")){
		m_nProtocolType = PROTOCOL_ASTM;
		m_szHeaderInfo = _T("H|\^&|||Machine|||||||P|1|DateTime\n");
		m_szPatientInfo = _T("P|PID|||||||Sex||||||||||||||||||||||||||\n");
		m_szOrderInfo = _T("O|Index|OrderID||^^^SID|||||||||||^|||||||||||F||||||\n");
		m_szResultInfo = _T("R|Index|^^^SID|Result|R||||F||||DateTime|\n");
		m_szTerminateInfo = _T("L|1|N\n");
		m_szRequestInfo =  _T("Q|1|ALL||||||||O\n");		
	}
	if(m_szMachine.Left(2) == _T("AU")){
		m_szStartTransfer = _T("DB");
		m_szHeaderRecord = _T("");
		m_szPatientRecord = _T("");
		m_szOrderRecord = _T("R");
		m_szResultRecord = _T("D");
		m_szCommentRecord = _T("");
		m_szExtendedRecord = _T("");
		m_szRequestRecord = _T("");
		m_szTrailerRecord =_T("");
		m_szFinishTransfer = _T("DE");
		m_szSeperator = _T(" ");
		if(m_szMachine == _T("AU640")){
			AddFieldInfo(_T("StartDB"), 2);
			AddFieldInfo(_T("RackNo"), 2);
			AddFieldInfo(_T("CupID"), 4);
			AddFieldInfo(_T("SampleID"), 5);
			AddFieldInfo(_T("StartDB"), 2);
		}
	}

	if(m_szMachine.Left(3) == _T("ACL")){
		m_szInitializeData.Format(_T("%c"), 0x06);
		m_szHeaderRecord= _T("H|\^&||||||||%s||P|1|%s\r\n"); //Seq No, Machine, system time
		m_szPatientRecord = _T("P|%ld||||^^^^|||||||||||||||||||||||||||||||\r\n"); //Seq No, PatientID
		m_szOrderRecord = _T("O|%d|%s||^^^%s|||||||||||^|||||||||||O||||||\r\n"); //Index, Specimen ID, TestID
		m_szResultRecord = _T("R|%d|^^^%s||||||F||||%s|\r\n"); //Index, TestID, System Time
		m_szRequestRecord = _T("Q|1|ALL||||||||O\r\n");
		m_szTrailerRecord = _T("L|1|N\r\n");
	}
	if(m_szMachine.Left(5) == _T("ADVIA")){
		m_szInitializeData.Format(_T("%c%c%c%c%c%c%c%c"), 0x02, 0x30,0x49,0x20, 0x0D,0x0A,0x5E,0x03 );
	}
	if(m_szMachine.Left(2) == _T("AU")){
		m_szInitializeData.Format(_T("%c"), 0x06);
	}
	
	if(m_szMachine.Left(2) == _T("CX")){
		m_szInitializeData.Format(_T("%c"), 0x06);
	}

	if(m_nProtocolType == PROTOCOL_ASTM)
		m_nFlags = -1;
*/

}

void CDeviceInterface::OnRxChar(DWORD dwCount){
	CString tmpStr;
	DWORD dwSymbolsRead = Read( (VOID*)tmpStr.GetBufferSetLength(dwCount), dwCount);	
	tmpStr.ReleaseBuffer();
	try
	{
//Process buffer
		if(dwSymbolsRead > 0)
		{
			OnReceive(tmpStr);
		}

	}
	catch( CFileException *e )
	{
		e->Delete();
	}
}

void CDeviceInterface::ParseData(LPCTSTR lpszData){
	CString tmpStr;
	CString szData, szValue;
	LPCTSTR pstr;
	//szData.Format(_T("%s"), lpszData);
	int i =0;
	int nID=0, nOID=0, nPID=0;
	bool bEndFlags = false;
	m_dwState = 0;
	m_nPosition = 0;
	if(m_nProtocolType == PROTOCOL_ASTM){
		ParseASTMData(lpszData);
	}
	else if(m_nProtocolType == PROTOCOL_SEPARATOR){
		pstr = lpszData;
		if(m_szMachine.Left(2) == _T("AU"))
		{
			while(*pstr != NULL){
				if(*pstr != ETX){
					m_szLine += *pstr;
				}
				else
				{
					int i =0;
					for (i =0; i < m_szLine.GetLength(); i++){
						if(m_szLine.Mid(i, m_szOrderRecord.GetLength()) == m_szOrderRecord)
						{
							i+= m_szOrderRecord.GetLength();
							RESULTINFO data;
							CString szValue;
							data.szResult.Format(_T("%s"), m_szLine.Mid(i));
							_debug(_T("\r\n%s"), data.szResult);
							m_arrayResult.Add(data);
							CStringArray fields;
							ParseResult(m_szLine.Mid(i), _T(" "), fields);
							for (int i =0; i < fields.GetCount(); i++){
								RESULTINFO dta;
								dta.szResult = fields[i];
								m_arrayResult.Add(dta);
							}
							break;
						}
					}
					m_szLine.Empty();
				}
				pstr++;
			}
		}
	}
/*
	if(m_szProtocol == _T("AUXXX")){
		while(*pstr != NULL){
			if(_tcsncmp(pstr, m_szTrailerRecord, m_szTrailerRecord.GetLength()) != 0){
				m_szLine += *pstr;
			}
			else
			{
				int i =0;
				for (i =0; i < m_szLine.GetLength(); i++){
					if(m_szLine.Mid(i, m_szOrderRecord.GetLength()) == m_szOrderRecord)
					{
						i+= m_szOrderRecord.GetLength();
						RESULTINFO data;
						CString szValue;
						data.szResult.Format(_T("%s"), m_szLine.Mid(i));
						m_arrayResult.Add(data);
						CStringArray fields;
						ParseResult(m_szLine.Mid(i), _T(" "), fields);
						for (int i =0; i < fields.GetCount(); i++){
							RESULTINFO dta;
							dta.szResult = fields[i];
							m_arrayResult.Add(dta);
						}
						break;
					}
				}
				m_szLine.Empty();
			}
			pstr++;
		}
	}
	else if(m_szProtocol == _T("ADVIA")){
		while(*pstr != NULL){
//Start of record
			if((TCHAR)*pstr != 0x03 && (TCHAR)*pstr != 0x02){
				m_szLine += *pstr;
			}
			if(*pstr == 0x03){
					m_szLine.Trim();
					bool bFlags = false;
					for (int i =0; i < m_szLine.GetLength(); i++){
						if(m_szLine[i] == _T('\r')){
							if(bFlags)
								break;
							bFlags = true;
							i++;
						}
						else if(bFlags){
							szValue = m_szLine.Mid(i, 8);
							RESULTINFO data;
							data.szTestID = szValue.Left(3);
							data.szResult = szValue.Mid(3);
							m_arrayResult.Add(data);

							i+=8;

						}
					}

				}
				m_szLine.Empty();
			pstr++;
		}
	}
*/
}



void CDeviceInterface::ParseASTMData(LPCTSTR lpszData){
	if(lpszData == NULL)
		return;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString tmpStr, szSQL;
	CString szData;
	LPCTSTR pstr;
	FIELDINFO fi;
//	m_szLine += lpszData;
/*
	int nFindPos = m_szLine.Find(_T("L|1"));
	if(nFindPos > 0){
		pstr = m_szLine;
		_debug(_T("\r\nHeader"));
		while(*pstr != NULL){
			if(_tcsncmp(pstr, _T("H|"), 2) == 0){
				m_nFieldIndex = 0;
				while(*pstr != NULL){
					if(m_nFieldIndex >= m_HeaderInfo.GetCount()){
						for (int i =0; i < m_HeaderInfo.GetCount(); i++){
							fi = m_HeaderInfo[i];
						}
						break;
					}
					fi = m_HeaderInfo[m_nFieldIndex];
					if(*pstr == fi.chSep){
						fi.szValue = szData;
						m_HeaderInfo.SetAt(m_nFieldIndex, fi);
						m_nFieldIndex++;
						szData.Empty();
					}
					else
						szData += *pstr;
					*pstr++;
				}
			}
			if(_tcsncmp(pstr, _T("P|"), 2) == 0){
				m_nFieldIndex = 0;
				while(*pstr != NULL){
					if(m_nFieldIndex >= m_PatientInfo.GetCount()){
						CString szPID, szPatientName, szAge, szSex;
						for (int i =0; i < m_PatientInfo.GetCount(); i++){
							fi = m_PatientInfo[i];
							if(fi.szName == _T("<PID>"))
								szPID = fi.szValue;
							if(fi.szName == _T("<PatientName>"))
								szPatientName = fi.szValue;
							if(fi.szName == _T("<Age>"))
								szAge = fi.szValue;
							if(fi.szName == _T("<Sex>"))
								szSex = fi.szValue;
							
							
						}
						szSQL.Format(_T("INSERT INTO hms_instrument_order(hio_pid,limsp_patientname, hio_age, limsp_sex) VALUES('%s', '%s', '%s', '%s') "),
							szPID, szPatientName, szAge, szSex);
						pMF->ExecSQL(szSQL);
						break;
					}
					fi = m_PatientInfo[m_nFieldIndex];
					if(*pstr == fi.chSep){
						fi.szValue = szData;
						m_PatientInfo.SetAt(m_nFieldIndex, fi);
						m_nFieldIndex++;
						szData.Empty();
					}
					else
						szData += *pstr;
					*pstr++;
				}
			}

			if(_tcsncmp(pstr, _T("O|"), 2) == 0){
				m_nFieldIndex = 0;
				while(*pstr != NULL){
					if(m_nFieldIndex >= m_OrderInfo.GetCount()){
						_debug(_T("\r\n"));
						for (int i =0; i < m_OrderInfo.GetCount(); i++){
							fi = m_OrderInfo[i];
							_debug(_T("%s, "), fi.szValue);
						}
						break;
					}
					fi = m_OrderInfo[m_nFieldIndex];
					if(*pstr == fi.chSep){
						fi.szValue = szData;
						m_OrderInfo.SetAt(m_nFieldIndex, fi);
						m_nFieldIndex++;
						szData.Empty();
					}
					else
						szData += *pstr;
					*pstr++;
				}
			}

			if(_tcsncmp(pstr, _T("R|"), 2) == 0){
				m_nFieldIndex = 0;
				while(*pstr != NULL){
					if(m_nFieldIndex >= m_ResultInfo.GetCount()){
						_debug(_T("\r\n"), fi.szValue);
						for (int i =0; i < m_ResultInfo.GetCount(); i++){
							fi = m_ResultInfo[i];
							_debug(_T("%s, "), fi.szValue);
						}
						break;
					}
					fi = m_ResultInfo[m_nFieldIndex];
					if(*pstr == fi.chSep){
						fi.szValue = szData;
						m_ResultInfo.SetAt(m_nFieldIndex, fi);
						m_nFieldIndex++;
						szData.Empty();
					}
					else
						szData += *pstr;
					*pstr++;
				}
			}

			if(_tcsncmp(pstr, _T("Q|"), 2) == 0){
				m_nFieldIndex = 0;
				while(*pstr != NULL){
					if(m_nFieldIndex >= m_QueryInfo.GetCount()){
						for (int i =0; i < m_QueryInfo.GetCount(); i++){
							fi = m_QueryInfo[i];
							_debug(_T("\r\n %s"), fi.szValue);
						}
						break;
					}
					fi = m_QueryInfo[m_nFieldIndex];
					if(*pstr == fi.chSep){
						fi.szValue = szData;
						m_QueryInfo.SetAt(m_nFieldIndex, fi);
						m_nFieldIndex++;
						szData.Empty();
					}
					else
						szData += *pstr;
					*pstr++;
				}
			}

			if(*pstr == fi.chSep){
				//Duyet toi cuoi dong
				while(*pstr != NULL &&*pstr != _T('\n')) *pstr++;
				tmpStr.SetString(pstr, 20);
				_debug(_T("\r\nEnd of line: %s"), tmpStr);
				break;
			}

			*pstr++;
		}
		m_szLine = m_szLine.Mid(nFindPos+5);
	}
*/
	

	if(m_nProtocolType == PROTOCOL_ASTM)
	{

		pstr = lpszData;
		
		while(*pstr != NULL){
			int nLen = m_szLine.GetLength();
			if(*pstr == 0x0A || *pstr == 0x0D){
				m_szLine += *pstr;
				LPCTSTR pstr2 = m_szLine;
				if(m_nFlags == -1)
				{
					while(*pstr2 != NULL){
						if(_tcsncmp(pstr2, _T("H|"), 2) == 0){
							m_nFlags = TAG_HEADER;
							break;
						}
						if(_tcsncmp(pstr2, _T("P|"), 2) == 0){
							m_nFlags = TAG_PATIENT;
							break;
						}
						if(_tcsncmp(pstr2, _T("O|"), 2) == 0){
							m_nFlags = TAG_ORDER;
							break;
						}
						if(_tcsncmp(pstr2, _T("R|1"), 3) == 0){
							m_nFlags = TAG_RESULT;
							break;
						}
						if(_tcsncmp(pstr2, _T("C|"), 2) == 0){
							m_nFlags = TAG_COMMENT;
							break;
						}
						if(_tcsncmp(pstr2, _T("Q|"), 2) == 0){
							m_nFlags = TAG_QUERY;
							break;
						}
						if(_tcsncmp(pstr2, _T("L|1"), 3) == 0){
							m_nFlags = TAG_TERMINATE;
							break;
						}
						*pstr2++;
					}
				}
				if(m_nFlags == TAG_HEADER){
					_debug(_T("\r\nLine: %s"), m_szLine);
					while(*pstr2 != NULL){
						if(m_nFieldIndex >= m_HeaderInfo.GetCount())
						{
							break;
						}
						FIELDINFO  fi = m_HeaderInfo[m_nFieldIndex];
						if(fi.chSep == *pstr2){
							fi.szValue = szData;
							m_HeaderInfo.SetAt(m_nFieldIndex, fi);
							szData.Empty();
							m_nFieldIndex++;
						}
						else
							szData += *pstr2;
						*pstr2++;
					}
					if(m_nFieldIndex < m_HeaderInfo.GetCount()){
						fi.szValue = szData;
						m_HeaderInfo.SetAt(m_nFieldIndex, fi);
						szData.Empty();
						m_nFieldIndex++;
					}
					
					if(m_nFieldIndex >= m_HeaderInfo.GetCount())
					{
						for (int i =0; i < m_HeaderInfo.GetCount(); i++){
								FIELDINFO fi = m_HeaderInfo[i];
						//		_debug(_T("\r\n%s : %s"), fi.szName, fi.szValue);
						}
						m_nFieldIndex = 0;
						m_nFlags = -1;
					}
				}
				else if(m_nFlags == TAG_PATIENT){
					_debug(_T("\r\nLine: %s"), m_szLine);
					while(*pstr2 != NULL){
						if(m_nFieldIndex >= m_PatientInfo.GetCount())
						{
							break;
						}
						FIELDINFO  fi = m_PatientInfo[m_nFieldIndex];
						if(fi.chSep == *pstr2){
							fi.szValue = szData;
							m_PatientInfo.SetAt(m_nFieldIndex, fi);
							szData.Empty();
							m_nFieldIndex++;
						}
						else
							szData += *pstr2;
						*pstr2++;
					}
					if(m_nFieldIndex < m_PatientInfo.GetCount()){
						fi.szValue = szData;
						m_PatientInfo.SetAt(m_nFieldIndex, fi);
						szData.Empty();
						m_nFieldIndex++;
					}
					
					if(m_nFieldIndex >= m_PatientInfo.GetCount())
					{
						for (int i =0; i < m_PatientInfo.GetCount(); i++){
								FIELDINFO fi = m_PatientInfo[i];
								//_debug(_T("\r\n%s : %s"), fi.szName, fi.szValue);
						}
						OnAddPatient();
						m_nFieldIndex = 0;
						m_nFlags = -1;
					}
				}
				else if(m_nFlags == TAG_RESULT){
				//	_debug(_T("\r\nLine: %s"), m_szLine);
					while(*pstr2 != NULL){
						if(m_nFieldIndex >= m_ResultInfo.GetCount())
						{
							break;
						}
						FIELDINFO  fi = m_ResultInfo[m_nFieldIndex];
						if(fi.chSep == *pstr2){
							fi.szValue = szData;
							m_ResultInfo.SetAt(m_nFieldIndex, fi);
							szData.Empty();
							m_nFieldIndex++;
						}
						else
							szData += *pstr2;
						*pstr2++;
					}
					if(m_nFieldIndex < m_ResultInfo.GetCount()){
						fi.szValue = szData;
						m_ResultInfo.SetAt(m_nFieldIndex, fi);
						szData.Empty();
						m_nFieldIndex++;
					}
					
					if(m_nFieldIndex >= m_ResultInfo.GetCount())
					{
						for (int i =0; i < m_ResultInfo.GetCount(); i++){
								FIELDINFO fi = m_ResultInfo[i];
							//	_debug(_T("\r\n%s : %s"), fi.szName, fi.szValue);
						}
//						OnAddResult();
						m_nFieldIndex = 0;
						m_nFlags = -1;
					}
				}


				else if(m_nFlags != -1){
					m_nFlags = -1;
					m_nFieldIndex = 0;
				}


				m_szLine.Empty();
			}
			else
				m_szLine += *pstr;
			*pstr++;
		}
	}
}



void CDeviceInterface::AddTemplateFieldInfo(int nType, LPCTSTR lpszString){
	TCHAR ch, chSep;
	CString szString, szName, szValue;
	szString = lpszString;
	szString.Replace(_T("<CR>"), _T("\n"));
	szString.Replace(_T("<LF>"), _T("\r"));
	szName.Empty();
	bool bFound = false;
	int nLength = 0;

	switch(nType)
	{
	case TAG_HEADER:
		m_HeaderInfo.RemoveAll();
		break;
	case TAG_PATIENT:
		m_PatientInfo.RemoveAll();
		break;
	case TAG_ORDER:
		m_OrderInfo.RemoveAll();
		break;
	case TAG_RESULT:
		m_ResultInfo.RemoveAll();
		break;
	case TAG_QUERY:
		m_QueryInfo.RemoveAll();
		break;
	case TAG_TERMINATE:
		m_TerminateInfo.RemoveAll();
		break;
	};

	for (int i =0; i < szString.GetLength(); i++){
		ch = szString[i];
		bFound = false;
		for(int j =0; j < m_szSeperator.GetLength(); j++){
			if(ch == m_szSeperator[j]){
				bFound = true;
				break;
			}
		}
		if(bFound)
		{
			chSep = ch;
			szValue.Trim();
			switch(m_nProtocolType){
				case PROTOCOL_AU:
				case PROTOCOL_ADVIAD:
					nLength = ToInt(szValue.Left(2));
					szValue = szValue.Mid(2);
					break;
				default:
					nLength = 0;
			};
			
			if(szValue[0] == _T('<'))
			{
				szName = szValue;
				szValue.Empty();
			}
			else
			{
				szName.Empty();
			}
			
			AddFieldInfo(nType, chSep, szName, szValue, nLength);
			szName.Empty();
			szValue.Empty();
		}
		else
			szValue += ch;
	}
	
}
void CDeviceInterface::AddFieldInfo(int nType, TCHAR chSeperator, LPCTSTR lpszName, LPCTSTR lpszValue, int nLength){
	FIELDINFO fi;
	fi.chSep = chSeperator;
	fi.szName = lpszName;
	fi.szValue = lpszValue;
	fi.nLength = nLength;
	fi.szName.Trim();
	switch(nType)
	{
	case TAG_HEADER:
		m_HeaderInfo.Add(fi);
		break;
	case TAG_PATIENT:
		m_PatientInfo.Add(fi);
		break;
	case TAG_ORDER:
		m_OrderInfo.Add(fi);
		break;
	case TAG_RESULT:
		m_ResultInfo.Add(fi);
		break;
	case TAG_QUERY:
		m_QueryInfo.Add(fi);
		break;
	case TAG_TERMINATE:
		m_TerminateInfo.Add(fi);
		break;
	};

}

void CDeviceInterface::SendRequest(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szHeaderRecord;
	if(m_szMachine.Left(3) == _T("ACL"))
	{
	}
}

void CDeviceInterface::InitializeData(){

	if(!m_szInitializeData.IsEmpty())
	{
		if(m_szMachine == _T("ADVIAD"))
		{
			m_szInitializeData.Format(_T("%c%c%c%c%c%c%c%c"), 0x02, 0x30, 0x49, 0x20,0x0D,0x0A,0x5E,0x03);
			m_bSendToken = false;
			m_nMaxTimeout = 60;
		}

		if(m_szMachine.Left(2) == _T("CX")){
			if(m_szInitializeData[0] == 0x06)
				m_szInitializeData.Format(_T("%c"), 0x03);
			else
				m_szInitializeData.Format(_T("%c"), 0x06);
		}

		CCommPort::Write((LPVOID)(LPCTSTR)m_szInitializeData, m_szInitializeData.GetLength());

	}
}


void CDeviceInterface::UploadData(){
	CMainFrame *pMF = (CMainFrame *) m_pMainWnd;
	CString szData, szSampleID, szTestID;
	CString szSysTime = pMF->GetSysDateTime(yyyymmdd|hhmmss);
	szSysTime.Replace(_T("/"), _T(""));
	szSysTime.Replace(_T(":"), _T(""));
	szSysTime.Replace(_T(" "), _T(""));
	if(m_szMachine.Left(3) == _T("ACL"))
	{
		szData.Format(m_szHeaderRecord, m_szMachine, szSysTime);
		for (int i =0; i < m_arrayRequest.GetCount(); i++)
		{
			CString szPID = m_arrayRequest[i];
			szData.AppendFormat(m_szPatientRecord, i+1, szPID);
//			m_arrayUploadData.RemoveAll();
//GetData To array;
			for (int i =0; i < m_arrayUploadData.GetCount(); i++)
			{
				szSampleID.Format(_T("SMP%.3d"), i+1);
				szTestID = m_arrayUploadData[i];
				szData.AppendFormat(m_szOrderRecord, i+1, szSampleID, szTestID);
			}
			
		}
		szData.AppendFormat(m_szTrailerRecord);
	//	_msg(_T("%s"), szData);
		CCommPort::Write((LPVOID) (LPCTSTR) szData, szData.GetLength());
		m_arrayUploadData.RemoveAll();
		m_arrayRequest.RemoveAll();
		InitializeData();

	}
}
void CDeviceInterface::TestMain(){
	return;
	SetMachine(_T("ADVIAD"));

	CString tmpStr;
	FILE *fp;
	TCHAR szBuffer[4096];
	fp = fopen("D:\\Documents\\_LIS_INTEFACE\\_DataRaw\\data.txt", "r");
	m_arrayResult.RemoveAll();	
	while(1){
		memset(szBuffer, _T('\0'), 4096);
		int nByte = fread(szBuffer, sizeof(TCHAR), sizeof(TCHAR)*3, fp);
		if(nByte <= 0)
			break;
		OnReceive(szBuffer);
	}
	fclose(fp);
}


long CDeviceInterface::AddRecord(long nSIP){
	CMainFrame *pMF = (CMainFrame *) m_pMainWnd;
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_arrayResult.GetCount() <= 0)
		return 0;
	szSQL.Format(_T("SELECt hms_instrument_inputdata(%d, %ld, '%s') "),
		0, nSIP, _T(""));
	rs.ExecSQL(szSQL);
	long nOrderID = rs.GetIntValue(); 
	if(nOrderID > 0){
		for (int i =0; i < m_arrayResult.GetCount(); i++){
			RESULTINFO dta = m_arrayResult[i];
			szSQL.Format(_T("UPDATE hms_instrument_result SET hir_result = '%s' ") \
				_T(" WHERE hir_OrderID=%ld AND hir_code='%s' "), dta.szResult, nSIP, dta.szTestID);
			rs.ExecSQL(szSQL);
		}
	}
	m_arrayResult.RemoveAll();
	return 1;
}

long CDeviceInterface::OnAddPatient(){
	if(m_szPID.IsEmpty())
		return -1;
	CMainFrame *pMF = (CMainFrame *) m_pMainWnd;
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	long	nOldOrderId;
	int ret = -1;
	m_szPID.Trim();
	m_szPName.Trim();
	tmpStr = m_szPID;
	TrimLeftZero(tmpStr, m_szPID);
	pMF->BeginTransaction();
//Xoa du lieu cu di

	szSQL.Format(_T("SELECT limso_oid,limso_refid FROM lims_order WHERE limso_instid=%d AND limso_pid='%s' AND date(limso_performdate)='%s' "), 
		m_nInstID, m_szPID, m_szResultDate);
	rs.ExecSQL(szSQL);
	nOldOrderId = 0;
	if(!rs.IsEOF())
		rs.GetValue(_T("limso_oid"), nOldOrderId);
	if(nOldOrderId > 0)
	{
		rs.GetValue(_T("limso_refid"), m_nRefID);
		szSQL.Format(_T("UPDATE hms_testorder SET hto_status='T',hto_resultdte=current_timestamp WHERE hto_orderno=%ld"), m_nRefID);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("UPDATE lims_order SET limso_status='T' WHERE limso_oid=%ld"), nOldOrderId);
		pMF->ExecSQL(szSQL);
		m_nOrderID = nOldOrderId;		
	}
	else
	{

		m_nRefID = -1;
//Them ban ghi moi
	szSQL.Format(_T("INSERT INTO lims_order(limso_createddate, limso_updateddate, limso_instid, limso_machine, limso_pid, limso_pname, limso_age, limso_sex, limso_tray, limso_cup, limso_rack, limso_performdate) ") \
		_T("VALUES('%s', '%s', %d, '%s', '%s', '%s', '%s', '%s', %d, %d, %d, '%s') "),
		pMF->GetSysDateTime(), pMF->GetSysDateTime(), m_nInstID, m_szMachine, m_szPID, m_szPName, m_szAge, m_szSex, m_nTray, m_nCup, m_nRackNo, m_szResultDate);
_fmsg(_T("%s"), szSQL);
	ret = pMF->ExecSQL(szSQL);
	if(ret < 0)
		pMF->Rollback();

	//Lay so order loi nhat
		szSQL.Format(_T("SELECT last_value FROM lims_order_limso_oid_seq "));
		rs.ExecSQL(szSQL);
		m_nOrderID = rs.GetIntValue();
	}
	m_nIndex = 1;
	if(m_nOrderID <= 0)
		pMF->Rollback();
	pMF->Commit();
	return m_nOrderID;
}

int CDeviceInterface::OnAddResult(LPCTSTR lpszTestCode, LPCTSTR lpszResult, LPCTSTR lpszComment){
	if(m_nOrderID <= 0)
		return -1;

	CMainFrame *pMF = (CMainFrame *) m_pMainWnd;
	CString szSQL, szTestCode, szResult;
	CRecord rs(&pMF->m_db);
	szTestCode = lpszTestCode;
	szResult = lpszResult;
	szTestCode.Trim();
	szResult.Trim();
	szSQL.Format(_T("SELECT lims_result_add(%d, %ld, '%s', '%s', '%s') "), m_nInstID, m_nOrderID, szTestCode, szResult, lpszComment);
//_msg(_T("%s"), szSQL);
	pMF->ExecSQL(szSQL);
/*
	pMF->BeginTransaction();

	szSQL.Format(_T("SELECT * FROM lims_result WHERE limsr_oid=%ld AND limsr_code='%s'"), m_nOrderID, szTest);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		szSQL.Format(_T("UPDATE lims_result SET limsr_result='%s', limsr_exresult='%s' WHERE limsr_oid=%ld AND limsr_code='%s' "), 
		szResult, szResult, m_nOrderID, szTest);
		pMF->ExecSQL(szSQL);
	}
	else
	{
		szSQL.Format(_T("INSERT INTO lims_result (limsr_oid, limsr_index, limsr_code, limsr_codein, limsr_result, limsr_exresult) ") \
		_T("VALUES(%ld, %d, '%s', '%s', '%s', '%s') "),
		m_nOrderID, m_nIndex++, szTest, szTest, szResult, szResult);
		int ret = pMF->ExecSQL(szSQL);
		if(ret < 0)
			pMF->Rollback();

	}
	szSQL.Format(_T("UPDATE hms_testorderln SET htol_result='%s' WHERE htol_orderno=%ld AND htol_testid='%s' "),
		szResult, ToLong(rs.GetValue(_T("limsr_refid"))), rs.GetValue(_T("limsr_testid")));
	pMF->ExecSQL(szSQL);

	pMF->Commit();
*/
	return m_nIndex;
}

void CDeviceInterface::OnSyncData(){
	CMainFrame *pMF = (CMainFrame *) m_pMainWnd;
	CString szSQL;
	if(m_nRefID > 0){
//		szSQL.Format(_T("SELECT lims_sycndata(%d, %ld, %ld)"), m_nInstID, m_nRefID, m_nOrderID);
//		pMF->ExecSQL(szSQL);
	}
}

int CDeviceInterface::OnInitializeData(){
	return 0;
}

int CDeviceInterface::OnProcessRequest(){
	return 0;
}
int CDeviceInterface::OnSend(){
	return 0;
}



int CDeviceInterface::OnReceive(LPCTSTR lpszData){
	if(lpszData == NULL)
		return -1;
	switch(m_nProtocolType){
		case PROTOCOL_ASTM:
			receive_ASTM(lpszData);
			break;
		case PROTOCOL_ABXARGOS:
			receive_ABXARGOS(lpszData);
			break;
		case PROTOCOL_AU:
			receive_AU(lpszData);
			break;
		case PROTOCOL_CD:
			receive_CD(lpszData);
			break;
		case PROTOCOL_CELLDYN:
			receive_CELLDYN(lpszData);
			break;
		case PROTOCOL_HITACHI:
			receive_HITACHI(lpszData);
			break;
		case PROTOCOL_MTX:
			receive_MTX(lpszData);
			break;
		case PROTOCOL_NUCLEUS:
			receive_NUCLEUS(lpszData);
			break;
		case PROTOCOL_SYSMEX:
			receive_SYSMEX(lpszData);
			break;
		case PROTOCOL_TEST1:
			receive_TEST1(lpszData);
			break;
		case PROTOCOL_TOSOH1:
			receive_TOSOH1(lpszData);
			break;
		case PROTOCOL_URISCAN:
			receive_URISCAN(lpszData);
			break;
		case PROTOCOL_YNSTAR:
			receive_YNSTAR(lpszData);
			break;
		case PROTOCOL_ADVIAD:
			receive_ADVIAD(lpszData);
			break;
	};
	return 0;
}
void CDeviceInterface::receive_ASTM(LPCTSTR lpszData){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString tmpStr, szSQL;
	CString szData;
	LPCTSTR pstr;
	FIELDINFO fi;
	if(m_nProtocolType == PROTOCOL_ASTM)
	{
		pstr = lpszData;
		while(*pstr != NULL){
			int nLen = m_szLine.GetLength();
			if(*pstr == 0x0A || *pstr == 0x0D){
				m_szLine += *pstr;
				LPCTSTR pstr2 = m_szLine;
				if(m_nFlags == -1)
				{
					while(*pstr2 != NULL){
						if(_tcsncmp(pstr2, _T("H|"), 2) == 0){
							m_nFlags = TAG_HEADER;
							break;
						}
						if(_tcsncmp(pstr2, _T("P|"), 2) == 0){
							m_nFlags = TAG_PATIENT;
							OnSyncData();
							break;
						}
						if(_tcsncmp(pstr2, _T("O|"), 2) == 0){
							m_nFlags = TAG_ORDER;
							break;
						}
						if(_tcsncmp(pstr2, m_szResultInfo.Left(2), 2) == 0){
							m_nFlags = TAG_RESULT;
							break;
						}
						if(_tcsncmp(pstr2, _T("C|"), 2) == 0){
							m_nFlags = TAG_COMMENT;
							break;
						}
						if(_tcsncmp(pstr2, _T("Q|"), 2) == 0){
							m_nFlags = TAG_QUERY;
							break;
						}
						if(_tcsncmp(pstr2, _T("L|1"), 3) == 0){
							m_nFlags = TAG_TERMINATE;
							OnSyncData();
							break;
						}
						*pstr2++;
					}
				}
				if(m_nFlags == TAG_HEADER){
					m_szPID.Empty();
					_debug(_T("\r\nLine: %s"), m_szLine);
					while(*pstr2 != NULL){
						if(m_nFieldIndex >= m_HeaderInfo.GetCount())
						{
							break;
						}
						FIELDINFO  fi = m_HeaderInfo[m_nFieldIndex];
						if(fi.chSep == *pstr2){
							fi.szValue = szData;
							m_HeaderInfo.SetAt(m_nFieldIndex, fi);
							szData.Empty();
							m_nFieldIndex++;
						}
						else
							szData += *pstr2;
						*pstr2++;
					}
					if(m_nFieldIndex < m_HeaderInfo.GetCount()){
						fi.szValue = szData;
						m_HeaderInfo.SetAt(m_nFieldIndex, fi);
						szData.Empty();
						m_nFieldIndex++;
					}
					
					if(m_nFieldIndex >= m_HeaderInfo.GetCount())
					{
						for (int i =0; i < m_HeaderInfo.GetCount(); i++){
								FIELDINFO fi = m_HeaderInfo[i];
						//		_debug(_T("\r\n%s : %s"), fi.szName, fi.szValue);
						}
						m_nFieldIndex = 0;
						m_nFlags = -1;
					}
				}
				else if(m_nFlags == TAG_PATIENT){
					_debug(_T("\r\nLine: %s"), m_szLine);
					while(*pstr2 != NULL){
						if(m_nFieldIndex >= m_PatientInfo.GetCount())
						{
							break;
						}
						FIELDINFO  fi = m_PatientInfo[m_nFieldIndex];
						if(fi.chSep == *pstr2){
							fi.szValue = szData;
							m_PatientInfo.SetAt(m_nFieldIndex, fi);
							szData.Empty();
							m_nFieldIndex++;
						}
						else
							szData += *pstr2;
						*pstr2++;
					}
					if(m_nFieldIndex < m_PatientInfo.GetCount()){
						fi.szValue = szData;
						m_PatientInfo.SetAt(m_nFieldIndex, fi);

						szData.Empty();
						m_nFieldIndex++;
					}
					
					if(m_nFieldIndex >= m_PatientInfo.GetCount())
					{
						for (int i =0; i < m_PatientInfo.GetCount(); i++){
								FIELDINFO fi = m_PatientInfo[i];
								if(fi.szName.CompareNoCase(_T("<PID>")) == 0)
								m_szPID = fi.szValue;
								if(fi.szName.CompareNoCase(_T("<PNAME>")) == 0)
									m_szPName = fi.szValue;
								if(fi.szName.CompareNoCase(_T("<TRAY>")) == 0)
									m_nTray = ToInt(fi.szValue);
								if(fi.szName.CompareNoCase(_T("<CUP>")) == 0)
									m_nCup = ToInt(fi.szValue);
								if(fi.szName.CompareNoCase(_T("<RACKNO>")) == 0)
									m_nRackNo = ToInt(fi.szValue);
								if(fi.szName.CompareNoCase(_T("<SID>")) == 0)
									m_szSID = fi.szValue;
						}
						OnAddPatient();
						m_nFieldIndex = 0;
						m_nFlags = -1;
					}
				}
				else if(m_nFlags == TAG_RESULT){
				//	_debug(_T("\r\nLine: %s"), m_szLine);
					while(*pstr2 != NULL){
						if(m_nFieldIndex >= m_ResultInfo.GetCount())
						{
							break;
						}
						FIELDINFO  fi = m_ResultInfo[m_nFieldIndex];
						if(fi.chSep == *pstr2){
							fi.szValue = szData;
							m_ResultInfo.SetAt(m_nFieldIndex, fi);
							szData.Empty();
							m_nFieldIndex++;
						}
						else
							szData += *pstr2;
						*pstr2++;
					}
					if(m_nFieldIndex < m_ResultInfo.GetCount()){
						fi.szValue = szData;
						m_ResultInfo.SetAt(m_nFieldIndex, fi);
						szData.Empty();
						m_nFieldIndex++;
					}
					
					if(m_nFieldIndex >= m_ResultInfo.GetCount())
					{
						CString szTestID, szResult, szUnit;
						for (int i =0; i < m_ResultInfo.GetCount(); i++){
								FIELDINFO fi = m_ResultInfo[i];
								if(fi.szName.CompareNoCase(_T("<TESTID>")) == 0)
									szTestID = fi.szValue;
								if(fi.szName.CompareNoCase(_T("<RESULT>")) == 0)
									szResult = fi.szValue;
								if(fi.szName.CompareNoCase(_T("<UNIT>")) == 0)
									szUnit = fi.szValue;
						}
						szTestID.Trim();
						szUnit.Trim();
						if(m_szMachine.Left(3) == _T("ACL"))
							szTestID+=szUnit;
						if(!szTestID.IsEmpty())
							OnAddResult(szTestID, szResult, _T(""));
						szTestID.Empty();
						szResult.Empty();
						szUnit.Empty();
						m_nFieldIndex = 0;
						m_nFlags = -1;
					}
				}
				else if(m_nFlags == TAG_QUERY){
					OnProcessRequest();
				}


				else if(m_nFlags != -1){
					m_nFlags = -1;
					m_nFieldIndex = 0;
				}


				m_szLine.Empty();
			}
			else
				m_szLine += *pstr;
			*pstr++;
		}
	}
}
/*
	R# T.R.I. inquiry AU400,AU640
	RB Start of T.R.I inquiry
	R_* T.R.I inquiry of
	normal sample
	RH T.R.I inquiry
	rerun sample
	RE End of T.R.I inquiry
	
	S# T.R.I. Host
	S_* T.R.I. of normal sample AU400,AU640
	SH T.R.I. of rerun sample
	SE STOP of T.R.I

	D# AU400,AU640
	DB Start of transfer result Host
	D_* Normal sample result
	DH Rerun sample result
	DR Reagent blank sample result
	DA Calibration result
	d_ * Stat fast result
	dH Stat fast rerun result
	DQ QC sample result
	DE End of result transfer
*/

void	CDeviceInterface::receive_AU(LPCTSTR lpszData){
	LPCTSTR pstr;
	pstr = lpszData;

	while(*pstr != NULL){
//Start of text
		if(*pstr == STX){
			m_szLine.Empty();
		}
//End of text
		if(*pstr == ETX){
//_debug(_T("\r\nLine=%s"), m_szLine);
			int n = 0;
			CString szMessage = m_szLine.Mid(1, 2);
			if(szMessage == _T("DB")){
				m_szLine.Empty();
				*pstr++;
				continue;		
			}
			if(szMessage == _T("DE")){
				m_szLine.Empty();
				*pstr++;
				continue;
			}
			if(szMessage.CompareNoCase(_T("D ")) != -1 || 
				szMessage.CompareNoCase(_T("DH")) != -1){
					CString szTestID, szResult, szLimit;
					m_szPID.Empty();
					m_szPName.Empty();
					m_nTray = m_nCup = m_nRackNo = 0;
					for (int i =0; i < m_PatientInfo.GetCount(); i++){
						FIELDINFO fi = m_PatientInfo[i];
						fi.szValue = m_szLine.Mid(n, fi.nLength);
						if(fi.szName.CompareNoCase(_T("<PID>")) == 0)
							m_szPID = fi.szValue;
						if(fi.szName.CompareNoCase(_T("<PNAME>")) == 0)
							m_szPName = fi.szValue;
						if(fi.szName.CompareNoCase(_T("<TRAY>")) == 0)
							m_nTray = ToInt(fi.szValue);
						if(fi.szName.CompareNoCase(_T("<CUP>")) == 0)
							m_nCup = ToInt(fi.szValue);
						if(fi.szName.CompareNoCase(_T("<RACKNO>")) == 0)
							m_nRackNo = ToInt(fi.szValue);
						if(fi.szName.CompareNoCase(_T("<SID>")) == 0)
							m_szSID = fi.szValue;

						n+= fi.nLength;
					}

				if(OnAddPatient() > 0)
				{
					int nSize = 0;
					for (int i =0; i < m_ResultInfo.GetCount(); i++){
							FIELDINFO fi = m_ResultInfo[i];
							nSize+= fi.nLength;
					}

					while(n+nSize <= m_szLine.GetLength())
					{
						szTestID.Empty();
						szResult.Empty();
						for (int i =0; i < m_ResultInfo.GetCount(); i++){
							FIELDINFO fi = m_ResultInfo[i];
							fi.szValue = m_szLine.Mid(n, fi.nLength);
							if(fi.szName.CompareNoCase(_T("<TESTID>")) == 0)
								szTestID = fi.szValue;
							if(fi.szName.CompareNoCase(_T("<RESULT>")) == 0)
								szResult = fi.szValue;
							if(fi.szName.CompareNoCase(_T("<LIMIT>")) == 0)
								szLimit = fi.szValue;
							n+= fi.nLength;
						}
						if(!szTestID.IsEmpty())
							OnAddResult(szTestID, szResult, szLimit);
					}
					OnSyncData();
				}
			}

			m_szLine.Empty();
		}
		m_szLine += *pstr;
		*pstr++;
	}
}
void	CDeviceInterface::receive_ADVIAD(LPCTSTR lpszData){
	LPCTSTR pstr;
	pstr = lpszData;
	static TCHAR chMT=0, newChMT;
	TCHAR chLRC;
	CString tmpStr;
	if(chMT == _T('Z'))
		chMT = 0;
	bool bAddFlag = false;
	if(_tcslen(lpszData) == 1 && lpszData[0] == 0x15 && !m_bSendToken){
		InitializeData();
		return;
	}
	if(_tcslen(lpszData) == 1 && lpszData[0] == 0x30 && !m_bSendToken){
		tmpStr.Format(_T("%c%c%c%c%c%c%c%c%c%c%c%c%c%c"), 0x31, 0x53, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0D, 0x0A);
		chLRC = GetLRC(tmpStr, tmpStr.GetLength());
		m_szTransferMessage.Format(_T("%c%s%c%c"), STX, tmpStr, chLRC, ETX);
		CCommPort::Write((LPCVOID)(LPCTSTR)m_szTransferMessage, m_szTransferMessage.GetLength());
		m_bSendToken = true;
		return;
	}

	while(*pstr != NULL){
//Start of text
		if(*pstr == STX){
			m_szLine.Empty();
		}
//End of text
		if(*pstr == ETX){
_debug(_T("\r\nLine=%s"), m_szLine);
			int n = 0;
			TCHAR ch;
			while(n < m_szLine.GetLength()){
				ch = m_szLine[n];
				if(ch == _T('R') || ch == _T('I') || ch == _T('S') || ch == _T('D') || ch == _T('E') || ch == _T('Y') || 
					ch == _T('Q') || ch == _T('N') || ch == _T('Z'))
					break;
				n++;
			}
			CString szMessage = m_szLine.Mid(n, 2);
			newChMT = m_szLine[n-1];

			n = 0;
			if(szMessage == _T("RB")){
				m_szLine.Empty();
				*pstr++;
				continue;		
			}
			if(szMessage == _T("RE")){
				m_szLine.Empty();
				*pstr++;
				continue;
			}

			if(szMessage.CompareNoCase(_T("R ")) != -1) {

				chMT = newChMT;
				CString szTestID, szResult;
				m_szPID.Empty();
				m_szSID.Empty();
				m_nTray = m_nCup = m_nRackNo = 0;
				for (int i =0; i < m_PatientInfo.GetCount(); i++){
					FIELDINFO fi = m_PatientInfo[i];
					fi.szValue = m_szLine.Mid(n, fi.nLength);

					if(fi.szName.CompareNoCase(_T("<PID>")) == 0)
						m_szPID = fi.szValue;
					if(fi.szName.CompareNoCase(_T("<PNAME>")) == 0)
							m_szPName = fi.szValue;
					if(fi.szName.CompareNoCase(_T("<TRAY>")) == 0)
						m_nTray = ToInt(fi.szValue);
					if(fi.szName.CompareNoCase(_T("<CUP>")) == 0)
						m_nCup = ToInt(fi.szValue);
					if(fi.szName.CompareNoCase(_T("<RACKNO>")) == 0)
						m_nRackNo = ToInt(fi.szValue);
					if(fi.szName.CompareNoCase(_T("<SID>")) == 0)
						m_szSID = fi.szValue;

					n+= fi.nLength;
				}

				if(OnAddPatient() > 0)
				{
					bAddFlag = true;
					int nSize = 0;
					for (int i =0; i < m_ResultInfo.GetCount(); i++){
							FIELDINFO fi = m_ResultInfo[i];
							nSize+= fi.nLength;
					}
					while(n+nSize <= m_szLine.GetLength())
					{
						szTestID.Empty();
						szResult.Empty();
						for (int i =0; i < m_ResultInfo.GetCount(); i++){
							FIELDINFO fi = m_ResultInfo[i];
							fi.szValue = m_szLine.Mid(n, fi.nLength);
							if(fi.szName.CompareNoCase(_T("<TESTID>")) == 0)
								szTestID = fi.szValue;
							if(fi.szName.CompareNoCase(_T("<RESULT>")) == 0)
								szResult = fi.szValue;
							n+= fi.nLength;
						}

						if(!szTestID.IsEmpty())
							OnAddResult(szTestID, szResult, _T(""));
					}


					OnSyncData();
				}

				

			}
			else if(!m_bSendToken){
				InitializeData();
				m_bSendToken = false;
			}
			m_szLine.Empty();
		}
		m_szLine += *pstr;
		*pstr++;
	}


	tmpStr.Format(_T("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"), 
					chMT+1, 0x5A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30, 0x0D, 0x0A);
				chLRC = GetLRC(tmpStr, tmpStr.GetLength());
				m_szTransferMessage.Format(_T("%c%c%s%c%c"), chMT, STX, tmpStr, chLRC, ETX);
				CCommPort::Write((LPCVOID)(LPCTSTR)m_szTransferMessage, m_szTransferMessage.GetLength());

	
/*
	else if(m_bSendToken)
	{
		tmpStr.Format(_T("%c%c%c%c%c%c%c%c%c%c%c%c%c%c"), 0x31, 0x53, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0D, 0x0A);
		chLRC = GetLRC(tmpStr, tmpStr.GetLength());
		m_szTransferMessage.Format(_T("%c%s%c%c"), STX, tmpStr, chLRC, ETX);
		CCommPort::Write((LPCVOID)(LPCTSTR)m_szTransferMessage, m_szTransferMessage.GetLength());
		m_bSendToken = true;
	}
	else
		InitializeData();
*/

}
void	CDeviceInterface::receive_CD(LPCTSTR lpszData){
}
void	CDeviceInterface::receive_CELLDYN(LPCTSTR lpszData){
}
void	CDeviceInterface::receive_HITACHI(LPCTSTR lpszData){
}
void	CDeviceInterface::receive_MTX(LPCTSTR lpszData){
}
void	CDeviceInterface::receive_NUCLEUS(LPCTSTR lpszData){
}
void	CDeviceInterface::receive_SYSMEX(LPCTSTR lpszData){
}
void	CDeviceInterface::receive_TEST1(LPCTSTR lpszData){
}
void	CDeviceInterface::receive_TOSOH1(LPCTSTR lpszData){
}
void	CDeviceInterface::receive_URISCAN(LPCTSTR lpszData){
}
void	CDeviceInterface::receive_YNSTAR(LPCTSTR lpszData){
}
void	CDeviceInterface::receive_ABXARGOS(LPCTSTR lpszData){
}

void	CDeviceInterface::OnTimeOut(){
	CCommPort::OnTimeOut();
	CCommPort::Write(_T("Time out"), 10);
}