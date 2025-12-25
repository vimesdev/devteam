#ifndef EXCEL_H
#define EXCEL_H

#include <vector>
#include <windows.h>
#include <atlstr.h>


enum EColor {XLCOLOR_BLACK = 8, XLCOLOR_WHITE, XLCOLOR_RED, XLCOLOR_BRIGHTGREEN, XLCOLOR_BLUE, XLCOLOR_YELLOW, XLCOLOR_PINK, XLCOLOR_TURQUOISE, XLCOLOR_DARKRED,
                XLCOLOR_GREEN, XLCOLOR_DARKBLUE, XLCOLOR_DARKYELLOW, XLCOLOR_VIOLET, XLCOLOR_TEAL, XLCOLOR_GRAY25, XLCOLOR_GRAY50, XLCOLOR_PERIWINKLE_CF,
                XLCOLOR_PLUM_CF, XLCOLOR_IVORY_CF, XLCOLOR_LIGHTTURQUOISE_CF, XLCOLOR_DARKPURPLE_CF, XLCOLOR_CORAL_CF, XLCOLOR_OCEANBLUE_CF, XLCOLOR_ICEBLUE_CF,
                XLCOLOR_DARKBLUE_CL, XLCOLOR_PINK_CL, XLCOLOR_YELLOW_CL, XLCOLOR_TURQUOISE_CL, XLCOLOR_VIOLET_CL, XLCOLOR_DARKRED_CL, XLCOLOR_TEAL_CL,
                XLCOLOR_BLUE_CL, XLCOLOR_SKYBLUE, XLCOLOR_LIGHTTURQUOISE, XLCOLOR_LIGHTGREEN, XLCOLOR_LIGHTYELLOW, XLCOLOR_PALEBLUE, XLCOLOR_ROSE, XLCOLOR_LAVENDER,
                XLCOLOR_TAN, XLCOLOR_LIGHTBLUE, XLCOLOR_AQUA, XLCOLOR_LIME, XLCOLOR_GOLD, XLCOLOR_LIGHTORANGE, XLCOLOR_ORANGE, XLCOLOR_BLUEGRAY, XLCOLOR_GRAY40,
                XLCOLOR_DARKTEAL, XLCOLOR_SEAGREEN, XLCOLOR_DARKGREEN, XLCOLOR_OLIVEGREEN, XLCOLOR_BROWN, XLCOLOR_PLUM, XLCOLOR_INDIGO, XLCOLOR_GRAY80,
                XLCOLOR_DEFAULT_FOREGROUND = 0x0040, XLCOLOR_DEFAULT_BACKGROUND = 0x0041, XLCOLOR_TOOLTIP = 0x0051, XLCOLOR_AUTO = 0x7FFF};

enum ENumFormat {XLNUMFORMAT_GENERAL, XLNUMFORMAT_NUMBER, XLNUMFORMAT_NUMBER_D2, XLNUMFORMAT_NUMBER_SEP, XLNUMFORMAT_NUMBER_SEP_D2,
                    XLNUMFORMAT_CURRENCY_NEGBRA, XLNUMFORMAT_CURRENCY_NEGBRARED, XLNUMFORMAT_CURRENCY_D2_NEGBRA, XLNUMFORMAT_CURRENCY_D2_NEGBRARED,
                    XLNUMFORMAT_PERCENT, XLNUMFORMAT_PERCENT_D2, XLNUMFORMAT_SCIENTIFIC_D2, XLNUMFORMAT_FRACTION_ONEDIG, XLNUMFORMAT_FRACTION_TWODIG,
                    XLNUMFORMAT_DATE, XLNUMFORMAT_CUSTOM_D_MON_YY, XLNUMFORMAT_CUSTOM_D_MON, XLNUMFORMAT_CUSTOM_MON_YY,
                    XLNUMFORMAT_CUSTOM_HMM_AM, XLNUMFORMAT_CUSTOM_HMMSS_AM, XLNUMFORMAT_CUSTOM_HMM, XLNUMFORMAT_CUSTOM_HMMSS,
                    XLNUMFORMAT_CUSTOM_MDYYYY_HMM,
                    XLNUMFORMAT_NUMBER_SEP_NEGBRA = 37, XLNUMFORMAT_NUMBER_SEP_NEGBRARED,
                    XLNUMFORMAT_NUMBER_D2_SEP_NEGBRA, XLNUMFORMAT_NUMBER_D2_SEP_NEGBRARED, XLNUMFORMAT_ACCOUNT, XLNUMFORMAT_ACCOUNTCUR,
                    XLNUMFORMAT_ACCOUNT_D2, XLNUMFORMAT_ACCOUNT_D2_CUR, XLNUMFORMAT_CUSTOM_MMSS, XLNUMFORMAT_CUSTOM_H0MMSS,
                    XLNUMFORMAT_CUSTOM_MMSS0, XLNUMFORMAT_CUSTOM_000P0E_PLUS0, XLNUMFORMAT_TEXT};

enum EAlignH {XLALIGNH_GENERAL, XLALIGNH_LEFT, XLALIGNH_CENTER, XLALIGNH_RIGHT, XLALIGNH_FILL, XLALIGNH_JUSTIFY, XLALIGNH_MERGE, XLALIGNH_DISTRIBUTED};
enum EAlignV {XLALIGNV_TOP, XLALIGNV_CENTER, XLALIGNV_BOTTOM, XLALIGNV_JUSTIFY, XLALIGNV_DISTRIBUTED};

enum EBorderStyle {XLBORDERSTYLE_NONE, XLBORDERSTYLE_THIN, XLBORDERSTYLE_MEDIUM, XLBORDERSTYLE_DASHED, XLBORDERSTYLE_DOTTED, XLBORDERSTYLE_THICK,
                      XLBORDERSTYLE_DOUBLE, XLBORDERSTYLE_HAIR, XLBORDERSTYLE_MEDIUMDASHED, XLBORDERSTYLE_DASHDOT, XLBORDERSTYLE_MEDIUMDASHDOT,
                      XLBORDERSTYLE_DASHDOTDOT, XLBORDERSTYLE_MEDIUMDASHDOTDOT, XLBORDERSTYLE_SLANTDASHDOT};

enum EBorderDiagonal {XLBORDERDIAGONAL_NONE, XLBORDERDIAGONAL_DOWN, XLBORDERDIAGONAL_UP, XLBORDERDIAGONAL_BOTH};

enum EFillPattern {XLFILLPATTERN_NONE, XLFILLPATTERN_SOLID, XLFILLPATTERN_GRAY50, XLFILLPATTERN_GRAY75, XLFILLPATTERN_GRAY25,
                      XLFILLPATTERN_HORSTRIPE, XLFILLPATTERN_VERSTRIPE, XLFILLPATTERN_REVDIAGSTRIPE, XLFILLPATTERN_DIAGSTRIPE,
                      XLFILLPATTERN_DIAGCROSSHATCH, XLFILLPATTERN_THICKDIAGCROSSHATCH, XLFILLPATTERN_THINHORSTRIPE, XLFILLPATTERN_THINVERSTRIPE,
                      XLFILLPATTERN_THINREVDIAGSTRIPE, XLFILLPATTERN_THINDIAGSTRIPE, XLFILLPATTERN_THINHORCROSSHATCH, XLFILLPATTERN_THINDIAGCROSSHATCH,
                      XLFILLPATTERN_GRAY12P5, XLFILLPATTERN_GRAY6P25};

enum EScript {XLSCRIPT_NORMAL, XLSCRIPT_SUPER, XLSCRIPT_SUB};
enum EUnderline {XLUNDERLINE_NONE, XLUNDERLINE_SINGLE, XLUNDERLINE_DOUBLE, XLUNDERLINE_SINGLEACC = 0x21, XLUNDERLINE_DOUBLEACC = 0x22};

enum EPaper {XLPAPER_DEFAULT, XLPAPER_LETTER, XLPAPER_LETTERSMALL, XLPAPER_TABLOID, XLPAPER_LEDGER, XLPAPER_LEGAL, XLPAPER_STATEMENT, XLPAPER_EXECUTIVE, XLPAPER_A3,
                XLPAPER_A4, XLPAPER_A4SMALL, XLPAPER_A5, XLPAPER_B4, XLPAPER_B5, XLPAPER_FOLIO, XLPAPER_QUATRO, XLPAPER_10x14, XLPAPER_10x17, XLPAPER_NOTE, XLPAPER_ENVELOPE_9,
                XLPAPER_ENVELOPE_10, XLPAPER_ENVELOPE_11, XLPAPER_ENVELOPE_12, XLPAPER_ENVELOPE_14, XLPAPER_C_SIZE, XLPAPER_D_SIZE, XLPAPER_E_SIZE, XLPAPER_ENVELOPE_DL,
                XLPAPER_ENVELOPE_C5, XLPAPER_ENVELOPE_C3, XLPAPER_ENVELOPE_C4, XLPAPER_ENVELOPE_C6, XLPAPER_ENVELOPE_C65, XLPAPER_ENVELOPE_B4, XLPAPER_ENVELOPE_B5,
                XLPAPER_ENVELOPE_B6, XLPAPER_ENVELOPE, XLPAPER_ENVELOPE_MONARCH, XLPAPER_US_ENVELOPE, XLPAPER_FANFOLD, XLPAPER_GERMAN_STD_FANFOLD,
                XLPAPER_GERMAN_LEGAL_FANFOLD, XLPAPER_B4_ISO, XLPAPER_JAPANESE_POSTCARD, XLPAPER_9x11, XLPAPER_10x11, XLPAPER_15x11, XLPAPER_ENVELOPE_INVITE,
                XLPAPER_US_LETTER_EXTRA = 50, XLPAPER_US_LEGAL_EXTRA, XLPAPER_US_TABLOID_EXTRA, XLPAPER_A4_EXTRA, XLPAPER_LETTER_TRANSVERSE, XLPAPER_A4_TRANSVERSE,
                XLPAPER_LETTER_EXTRA_TRANSVERSE, XLPAPER_SUPERA, XLPAPER_SUPERB, XLPAPER_US_LETTER_PLUS, XLPAPER_A4_PLUS, XLPAPER_A5_TRANSVERSE, XLPAPER_B5_TRANSVERSE,
                XLPAPER_A3_EXTRA, XLPAPER_A5_EXTRA, XLPAPER_B5_EXTRA, XLPAPER_A2, XLPAPER_A3_TRANSVERSE, XLPAPER_A3_EXTRA_TRANSVERSE, XLPAPER_JAPANESE_DOUBLE_POSTCARD,
                XLPAPER_A6, XLPAPER_JAPANESE_ENVELOPE_KAKU2, XLPAPER_JAPANESE_ENVELOPE_KAKU3, XLPAPER_JAPANESE_ENVELOPE_CHOU3, XLPAPER_JAPANESE_ENVELOPE_CHOU4,
                XLPAPER_LETTER_ROTATED, XLPAPER_A3_ROTATED, XLPAPER_A4_ROTATED, XLPAPER_A5_ROTATED, XLPAPER_B4_ROTATED, XLPAPER_B5_ROTATED,
                XLPAPER_JAPANESE_POSTCARD_ROTATED, XLPAPER_DOUBLE_JAPANESE_POSTCARD_ROTATED, XLPAPER_A6_ROTATED, XLPAPER_JAPANESE_ENVELOPE_KAKU2_ROTATED,
                XLPAPER_JAPANESE_ENVELOPE_KAKU3_ROTATED, XLPAPER_JAPANESE_ENVELOPE_CHOU3_ROTATED, XLPAPER_JAPANESE_ENVELOPE_CHOU4_ROTATED, XLPAPER_B6,
                XLPAPER_B6_ROTATED, XLPAPER_12x11, XLPAPER_JAPANESE_ENVELOPE_YOU4, XLPAPER_JAPANESE_ENVELOPE_YOU4_ROTATED, XLPAPER_PRC16K, XLPAPER_PRC32K,
                XLPAPER_PRC32K_BIG, XLPAPER_PRC_ENVELOPE1, XLPAPER_PRC_ENVELOPE2, XLPAPER_PRC_ENVELOPE3, XLPAPER_PRC_ENVELOPE4, XLPAPER_PRC_ENVELOPE5,
                XLPAPER_PRC_ENVELOPE6, XLPAPER_PRC_ENVELOPE7, XLPAPER_PRC_ENVELOPE8, XLPAPER_PRC_ENVELOPE9, XLPAPER_PRC_ENVELOPE10, XLPAPER_PRC16K_ROTATED,
                XLPAPER_PRC32K_ROTATED, XLPAPER_PRC32KBIG_ROTATED, XLPAPER_PRC_ENVELOPE1_ROTATED, XLPAPER_PRC_ENVELOPE2_ROTATED, XLPAPER_PRC_ENVELOPE3_ROTATED,
                XLPAPER_PRC_ENVELOPE4_ROTATED, XLPAPER_PRC_ENVELOPE5_ROTATED, XLPAPER_PRC_ENVELOPE6_ROTATED, XLPAPER_PRC_ENVELOPE7_ROTATED,
                XLPAPER_PRC_ENVELOPE8_ROTATED, XLPAPER_PRC_ENVELOPE9_ROTATED, XLPAPER_PRC_ENVELOPE10_ROTATED};

enum ECellType {XLCELLTYPE_EMPTY, XLCELLTYPE_NUMBER, XLCELLTYPE_STRING, XLCELLTYPE_BOOLEAN, XLCELLTYPE_BLANK, XLCELLTYPE_ERROR};

enum EErrorType {XLERRORTYPE_NULL = 0x00, XLERRORTYPE_DIV_0 = 0x07, XLERRORTYPE_VALUE = 0x0F, XLERRORTYPE_REF = 0x17, XLERRORTYPE_NAME = 0x1D,
                    XLERRORTYPE_NUM = 0x24, XLERRORTYPE_NA = 0x2A, XLERRORTYPE_NOERROR = 0xFF};

enum EPictureType {XLPICTURETYPE_PNG, XLPICTURETYPE_JPEG, XLPICTURETYPE_WMF, XLPICTURETYPE_DIB, XLPICTURETYPE_EMF,
                      XLPICTURETYPE_PICT, XLPICTURETYPE_TIFF, XLPICTURETYPE_ERROR = 0xFF};

enum ESheetState {XLSHEETSTATE_VISIBLE, XLSHEETSTATE_HIDDEN, XLSHEETSTATE_VERYHIDDEN};



#define FMT_GENERAL		0x000001
#define FMT_TEXT		0x000002
#define FMT_INTEGER		0x000004
#define FMT_NUMBER1		0x000008
#define FMT_DECIMAL		0x000010
#define FMT_NUMBER2		0x000020
#define FMT_CURRENCY1	0x000040
#define FMT_PERCENT		0x000080
#define FMT_DATE		0x000100
#define FMT_TIME		0x000200
#define FMT_DATETIME	0x000400
#define FMT_LEFT		0x000800
#define FMT_CENTER		0x001000
#define FMT_RIGHT		0x002000
#define FMT_JUSTIFY		0x004000
#define FMT_TOP			0x008000
#define FMT_VCENTER		0x010000
#define FMT_BOTTOM		0x020000
#define FMT_VJUSTIFY	0x040000
#define FMT_WRAPING		0x080000
#define FMT_BORDERLEFT	0x100000
#define FMT_BORDERRIGHT	0x200000
#define FMT_BORDERTOP	0x400000
#define FMT_BORDERBOTTOM 0x800000
#define FMT_BORDER	(FMT_BORDERLEFT|FMT_BORDERTOP|FMT_BORDERRIGHT|FMT_BORDERBOTTOM)
class CExcel;

class AFX_EXT_CLASS CellFormat{
		bool	bBold;
		bool	bItalic;
		int		nUnderline;
		int		nFontSize;
		TCHAR	szFontName[128];
		int		nAlignH;
		int		nAlignV;
		int		nBorderStyle;
		int		nBorderStyleLeft;
		int		nBorderStyleRight;
		int		nBorderStyleTop;
		int		nBorderStyleBottom;
		int		nBorderColorLeft;
		int		nBorderColorRight;
		int		nBorderColorTop;
		int		nBorderColorBottom;
		int		nBorder;
		int		nFillPattern;
		int		nForegroundColor;
		int		nTextColor;
		int		nCellStyle;
		int		nScript;
		bool	bStrikeOut;
		int		nColor;
		CExcel*	m_xls;
		void*	m_format;
		void*	m_font;
	public:
		CellFormat(CExcel* xls);
		CellFormat(const CellFormat& cf);
		~CellFormat();
		friend bool operator==(const CellFormat& cf1,const CellFormat& cf2);
		void*	GetFormat();
		void	SetBold(bool bBold);
		void	SetItalic(bool bItalic);
		void	SetUnderline(int nUnderline);
		void	SetFontSize(int nSize);
		void	SetFontName(LPCTSTR lpsFontName);
		void	SetAlignH(int nAlign);
		void	SetAlignV(int nAlign);
		void	SetBorderStyle(int nBorderStyle);
		void	SetBorder(int nBorder);
		void	SetFillPattern(int nFill);
		void	SetForegroundColor(int nColor);
		void	SetTextColor(int nColor);
		void	SetCellStyle(int nCellStyle);
		void	SetScript(int nScript);
		void	SetStrikeOut(bool bStrikeOut);
		void	SetColor(int nColor);
		bool	IsBold();
		bool	IsItalic();
		int		GetUnderline();
		int		GetFontSize();
		LPCTSTR	GetFontName();
		int		GetAlignH();
		int		GetAlignV();
		int		GetBorderStyle();
		int		GetBorderStyleLeft();
		int		GetBorderStyleTop();
		int		GetBorderStyleRight();
		int		GetBorderStyleBottom();
		int		GetBorder();
		int		GetFillPattern();
		int		GetForegroundColor();
		int		GetTextColor();
		int		GetCellStyle();
		int		GetScript();
		bool	GetStrikeOut();
		int		GetColor();
		void	SetLibXLFormat(void* xlsFormat);
		void	SetLibXLFont(void* xlsFont);
		void*	GetLibXLFormat();
		void*	GetLibXLFont();
		void	Reset();
		void	AddFormat();


	};

class AFX_EXT_CLASS  CExcel
{
protected:
	int		m_nPaperSize;
	int		m_bLandscape;
	CString	m_szXLSFile;
	CString	m_szFontName;
	int		m_nFontSize;

	void*	m_pXLS;
	void*	m_pSheet;
	std::vector<CellFormat*>	m_cellFormat;
public:
	
	CExcel(void);
	~CExcel(void);
	bool	Load(LPCTSTR lpszFileName);
	bool	Save(LPCTSTR lpszFileName, bool bAutoOpen=true);
	void	CreateSheet(int nSheet);
	void	CreateWorkSheet(LPCTSTR lpszSheetName);
	void	SetWorksheet(int nIndex);
	void	AddSheet(const TCHAR* name);
	void	SetActiveSheet(int nIndex);
	void	SetCellText(int nCol, int nRow, LPCTSTR lpszText, int nFormat, bool bBold=false, int nFontSize=10, int nBorderline=0);
	void	SetCellText(int nCol, int nRow, LPCTSTR lpszText, CellFormat* cellFmt=NULL);
	void	SetValue(LPCTSTR lpszName, LPCTSTR lpszText, int nFormat=FMT_TEXT, bool bBold = false, int nFontSize = 10, int nBorderline = 0);
	void	SetCellMergedColumns(int nCol, int nRow, int nColumns);
	void	SetCellMergedRows(int nCol, int nRow, int nColumns);
	void	MergeCell(int first_col, int first_row, int last_col, int last_row);
	void	SetColumnWidth(int col, short width);
	void	SetRowHeight(int row, short height);
	void	SetDefaultFont(LPCTSTR lpszFontName, int nFontSize);
	int		GetTotalColumns();
	int		GetTotalRows();
	void	SetPaperSize(int nPaper, bool bLandscape=false);
	void*	GetWorksheet();
	void*	GetWorkbook();
	int		GetActiveSheet();
	int		AddPicture(const TCHAR* filename);
    int		AddPicture2(const char* data, unsigned size);
	bool	LoadRaw(const char* data, unsigned size);
    bool	SaveRaw(const char** data, unsigned* size);
    bool	DeleteSheet(unsigned short index);
    unsigned short GetCount() const;
    void	AddFormat(CellFormat* cellFmt) ;

//Sheet properties 

	CellFormat* GetCellStyle(unsigned short row, unsigned short col);
	bool		IsFormula(unsigned short row, unsigned short col) const;
	LPCTSTR		ReadString(unsigned short row, unsigned short col, CellFormat* format = 0);
	bool		WriteString(unsigned short row, unsigned short col, const TCHAR* value, CellFormat* format = 0);

	double		ReadNumber(unsigned short row, unsigned short col, CellFormat* format = 0) const;
    bool		WriteNumber(unsigned short row, unsigned short col, double value, CellFormat* format = 0);

    bool		ReadBool(unsigned short row, unsigned short col, CellFormat* format = 0) const;
    bool		WriteBool(unsigned short row, unsigned short col, bool value, CellFormat* format = 0);

    bool		ReadBlank(unsigned short row, unsigned short col, CellFormat* format) const;
    bool		WriteBlank(unsigned short row, unsigned short col, CellFormat* format);

    LPCTSTR		ReadFormula(unsigned short row, unsigned short col, CellFormat* format = 0);
    bool		WriteFormula(unsigned short row, unsigned short col, const TCHAR* value, CellFormat* format = 0);

	LPCTSTR		ReadComment(unsigned short row, unsigned short col) const;
    void		WriteComment(unsigned short row, unsigned short col, const TCHAR* value, const TCHAR* author = 0, int width = 129, int height = 75);

    bool		IsDate(unsigned short row, unsigned short col) const;
    int			ReadError(unsigned short row, unsigned short col) const;

    double		GetColWidth(unsigned short col) const;
    double		GetRowHeight(unsigned short row) const;

    bool		SetCol(unsigned short colFirst, unsigned short colLast, double width, CellFormat* format = 0, bool hidden = false);
    bool		SetRow(unsigned short row, double height, CellFormat* format = 0, bool hidden = false);

    bool		IsRowHidden(unsigned short row) const;
    bool		SetRowHidden(unsigned short row, bool hidden);

    bool		GetColHidden(unsigned short col) const;
    bool		SetColHidden(unsigned short col, bool hidden);

    bool		GetMerge(unsigned short row, unsigned short col, unsigned short* rowFirst, unsigned short* rowLast, unsigned short* colFirst, unsigned short* colLast);
    bool		SetMerge(unsigned short rowFirst, unsigned short rowLast, unsigned short colFirst, unsigned short colLast);
    bool		DeleteMerge(unsigned short row, unsigned short col);

    void		SetPicture(unsigned short row, unsigned short col, int pictureId, double scale = 1.0);
    void		SetPicture2(unsigned short row, unsigned short col, int pictureId, int width, int height);

    bool		SetHorPageBreak(unsigned short row, bool pageBreak = true);
    bool		SetVerPageBreak(unsigned short col, bool pageBreak = true);

    void		Split(unsigned short row, unsigned short col);

    bool		GroupRows(unsigned short rowFirst, unsigned rowLast, bool collapsed = true);
    bool		GroupCols(unsigned short colFirst, unsigned colLast, bool collapsed = true);

    bool		Clear(unsigned short rowFirst = 0, unsigned short rowLast = 65535, unsigned short colFirst = 0, unsigned short colLast = 255);

    bool		InsertCol(unsigned short colFirst, unsigned short colLast);
    bool		InsertRow(unsigned short rowFirst, unsigned short rowLast);
    bool		RemoveCol(unsigned short colFirst, unsigned  short colLast);
    bool		RemoveRow(unsigned short rowFirst, unsigned short rowLast);

    bool		CopyCell(unsigned short rowSrc, unsigned short colSrc, unsigned short rowDst, unsigned short colDst);

    int			GetFirstRow() const;
    int			GetLastRow() const;
    int			GetFirstCol() const;
    int			GetLastCol() const;
	bool		IsDisplayGridlines() const;
    void		SetDisplayGridlines(bool show = true);

    bool		IsPrintGridlines() const;
    void		SetPrintGridLines(bool print = true);

    unsigned	GetZoom() const;
    void		SetZoom(unsigned zoom);

    unsigned	GetPrintZoom() const;
    void		SetPrintZoom(unsigned zoom);

    bool		GetLandscape() const;
    void		SetLandscape(bool landscape = true);

    int			GetPaper() const;
    void		SetPaper(int paper = XLPAPER_DEFAULT);

    LPCTSTR		GetHeader() const;
    bool		SetHeader(const TCHAR* header, double margin = 0.5);
    double		GetHeaderMargin() const;

    LPCTSTR		GetFooter() const;
    bool		SetFooter(const TCHAR* footer, double margin = 0.5);
    double		GetFooterMargin() const;

    bool		GetHCenter() const;
    void		SetHCenter(bool hCenter = true);

    bool		GetVCenter() const;
    void		SetVCenter(bool vCenter = true);

    double		GetMarginLeft() const;
    void		SetMarginLeft(double margin);

    double		GetMarginRight() const;
    void		SetMarginRight(double margin);

    double		GetMarginTop() const;
    void		SetMarginTop(double margin);

    double		GetMarginBottom() const;
    void		SetMarginBottom(double margin);

    bool		GetPrintRowCol() const;
    void		SetPrintRowCol(bool print = true);

    LPCTSTR		GetSheetName() const;
    void		SetSheetName(const TCHAR* name);

    bool		GetProtect() const;
	void		SetProtect(bool protect = true);


};

#endif