#ifndef RMPRINTFORMS_H
#define RMPRINTFORMS_H
/*
	File nay dung de viet cac ham in dung trong module tiep don
*/

class AFX_EXT_CLASS CRMPrintForms
{
public:
	//Khoi tao cac biet toan cung ban dau
	void RMInitialize(CWnd *pMain);

	/*Functions: In phieu tiep don.
	In: 
		szDept: Ma khoa
		nDocumentNo: So ho so kham chua benh
		nReceptIdx: Ma so phieu tiep don
		szHema: In phieu hay khong
	Out:

	Return:
		
	*/
	void RMPrintReceptionReceipt(long nDocumentNo, int nReceptIdx, bool bDirect=true);

};

#endif
