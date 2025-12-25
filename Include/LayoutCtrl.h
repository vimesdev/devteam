#ifndef LAYOUTCTRL_H
#define LAYOUTCTRL_H

#include "GuiDefs.h"
#include <afxtempl.h>


// How window size ...
#define WST_NONE		0x00					// No size changed
#define WST_LEFT		0x01					// size to left
#define WST_TOP			0x02					// size to top
#define WST_RIGHT		0x04					// size to right
#define WST_BOTTOM		0x08					// size to bottom
#define WST_TOPLEFT		(WST_TOP|WST_LEFT)		// size to top & left
#define WST_TOPRIGHT	(WST_TOP|WST_RIGHT)		// size to top & right
#define WST_BOTTOMRIGHT	(WST_BOTTOM|WST_RIGHT)	// size to bottom & right
#define WST_BOTTOMLEFT	(WST_BOTTOM|WST_LEFT)	// size to bottom & right

#ifndef IDC_DLGSIZEBOX
#define IDC_DLGSIZEBOX  50
#endif	/* IDC_DLGSIZEBOX */


//define layout control style (WS_)
#define WS_NONE		0x00
#define WS_REPOSX	0x01
#define WS_REPOSY	0x02
#define WS_RESIZEX	0x04
#define WS_RESIZEY	0x08
#define WS_REDRAW	0x10


struct AFX_DYNAMIC_LAYOUT_ITEM;

class AFX_EXT_CLASS CLayoutCtrl : public CObject
{
	DECLARE_DYNAMIC(CLayoutCtrl)

public:
	/// <summary>
	/// Vertical and horizontal ratios define move direction of a child control when a hosting window is being resized.
	/// </summary>
	struct MoveSettings
	{
		MoveSettings()
		{
			m_nXRatio = 0;
			m_nYRatio = 0;
		}

		BOOL IsHorizontal() const { return m_nXRatio > 0; }
		BOOL IsVertical() const { return m_nYRatio > 0; }
		BOOL IsNone() const { return !IsHorizontal() && !IsVertical(); }

		/// <summary>
		/// Defines (in percents) how far a child control is moved horizontally when size of host has been changed.
		/// For example, m_nXRatio is 50%. If size of host is changed by 20 pixels, the child is moved horizontally by 10 pixels from its current position.
		/// </summary>
		int m_nXRatio;

		/// <summary>
		/// Defines (in percents) how far a child control is moved vertically when size of host has been changed.
		/// For example, m_nYRatio is 50%. If size of host is changed by 20 pixels, the child is moved vertically by 10 pixels from its current position.
		/// </summary>
		int m_nYRatio;
	};

	/// <summary>
	/// Vertical and horizontal ratios define how to resize a child control when a hosting window is being resized.
	/// </summary>
	struct SizeSettings
	{
		SizeSettings()
		{
			m_nXRatio = 0;
			m_nYRatio = 0;
			m_bResize = true;
		}

		BOOL IsHorizontal() const { return m_nXRatio > 0; }
		BOOL IsVertical() const { return m_nYRatio > 0; }
		BOOL IsNone() const { return !IsHorizontal() && !IsVertical(); }

		/// <summary>
		/// Defines (in percents) how a child control is resized horizontally when size of host has been changed.
		/// For example, m_nXRatio is 50%. If the size of host is changed by 20 pixels, the child is resized by 10 pixels.
		/// </summary>
		int m_nXRatio;

		/// <summary>
		/// Defines (in percents) how a child control is resized vertically when size of host has been changed.
		/// For example, m_nYRatio is 50%. If the size of host is changed by 20 pixels, the child is resized by 10 pixels.
		/// </summary>
		int m_nYRatio;
		bool m_bResize;
	};
	
	// Construction:
public:
	CLayoutCtrl();
	virtual ~CLayoutCtrl();
	void Clear();
	// Operations:
public:
	/// <summary>
	/// Stores and validates the host window.</summary>
	/// <returns> TRUE if creation succeeded; otherwise FALSE.</returns>
	/// <param name="pHostWnd"> A pointer to a host window.</param>
	BOOL Create(CWnd* pHostWnd);

	/// <summary>
	/// This method recalculates positions and sizes of child controls that have been added to layout using AddItem. 
	/// Called by the framework when the hosting window is being resized.</summary>
	void Adjust();

	// Behavior settings:

	/// <summary>
	/// No move when a hosting window is being resized.</summary>
	/// <returns> Behavior settings define move direction.</returns>
	static MoveSettings MoveNone();

	/// <summary>
	/// A child control is moved horizontally only when a hosting window is being resized.</summary>
	/// <returns> Behavior settings define move direction.</returns>
	/// <param name="nRatio"> Defines (in percents) how far a child control is moved horizontally when size of host has been changed.</param>
	static MoveSettings MoveHorizontal(int nRatio);

	/// <summary>
	/// A child control is moved vertically only when a hosting window is being resized.</summary>
	/// <returns> Behavior settings define move direction.</returns>
	/// <param name="nRatio"> Defines (in percents) how far a child control is moved vertically when size of host has been changed.</param>
	static MoveSettings MoveVertical(int nRatio);

	/// <summary>
	/// A child control is moved horizontally and vertically when a hosting window is being resized.</summary>
	/// <returns> Behavior settings define move direction.</returns>
	/// <param name="nXRatio"> Defines (in percents) how far a child control is moved horizontally when size of host has been changed.</param>
	/// <param name="nYRatio"> Defines (in percents) how far a child control is moved vertically when size of host has been changed.</param>
	static MoveSettings MoveHorizontalAndVertical(int nXRatio, int nYRatio);

	/// <summary>
	/// No resize when a hosting window is being resized.</summary>
	/// <returns> Behavior settings define resize method.</returns>
	static SizeSettings SizeNone();

	/// <summary>
	/// X dimension of a child window is changed when a hosting window is being resized.</summary>
	/// <returns> Behavior settings define resize method.</returns>
	/// <param name="nRatio"> Defines (in percents) how a child control is resized horizontally when size of host has been changed.</param>
	static SizeSettings SizeHorizontal(int nRatio);

	/// <summary>
	/// Y dimension of a child window is changed when a hosting window is being resized.</summary>
	/// <returns> Behavior settings define resize method.</returns>
	/// <param name="nRatio"> Defines (in percents) how a child control is resized vertically when size of host has been changed.</param>
	static SizeSettings SizeVertical(int nRatio);

	/// <summary>
	/// Width and height of a child window are changed when a hosting window is being resized.</summary>
	/// <returns> Behavior settings define resize method.</returns>
	/// <param name="nXRatio"> Defines (in percents) how a child control is resized horizontally when size of host has been changed.</param>
	/// <param name="nYRatio"> Defines (in percents) how a child control is resized vertically when size of host has been changed.</param>
	static SizeSettings SizeHorizontalAndVertical(int nXRatio, int nYRatio);

	/// <summary>
	/// Adds a child control to dynamic layout.</summary>
	/// <remarks> The position and size of a child control is changed dynamically when a hosting window is being resized.</remarks>
	/// <returns> TRUE if succeeded; otherwise FALSE.</returns>
	/// <param name="nID"> Child control ID.</param>
	/// <param name="moveSettings"> Reposition behavior settings contain vertical and horizontal ratios. Specifies how to adjust position of a control.</param>
	/// <param name="sizeSettings"> Resizing behavior settings contain vertical and horizontal distribution ratios. Specifies how to adjust position of a control.</param>
	BOOL AddItem(UINT nID, MoveSettings moveSettings, SizeSettings sizeSettings);

	/// <summary>
	/// Adds a child control to dynamic layout.</summary>
	/// <remarks> The position and size of a child control is changed dynamically when a hosting window is being resized.</remarks>
	/// <returns> TRUE if succeeded; otherwise FALSE.</returns>
	/// <param name="hwnd"> Handle of a child control.</param>
	/// <param name="moveSettings"> Reposition behavior settings contain vertical and horizontal ratios. Specifies how to adjust position of a control.</param>
	/// <param name="sizeSettings"> Resizing behavior settings contain vertical and horizontal distribution ratios. Specifies how to adjust position of a control.</param>
	BOOL AddItem(HWND hwnd, MoveSettings moveSettings, SizeSettings sizeSettings);
	BOOL AddItem(CWnd* pWnd, MoveSettings moveSettings, SizeSettings sizeSettings);
	/// <summary>
	/// Checks if a child control was added to dynamic layout.</summary>
	/// <remarks></remarks>
	/// <returns> TRUE if layout already has this item; otherwise FALSE.</returns>
	/// <param name="hwnd"> Handle of a child control.</param>
	BOOL HasItem(HWND hwnd) { return FindItem(hwnd) != NULL; }

	/// <summary>
	/// Checks if a dynamic layout is empty.</summary>
	/// <remarks></remarks>
	/// <returns> TRUE if layout is empty; otherwise FALSE.</returns>
	BOOL IsEmpty() const { return m_listWnd.IsEmpty(); }

	/// <summary>
	/// This method returns client area of host window.</summary>
	/// <param name="rect"> When the function returns this parameter contains bounding rectangle of layout area..</param>
	void GetHostWndRect(CRect& rect) const;

	/// <summary>
	/// This method reads the dynamic layout from AFX_DIALOG_LAYOUT resource and then applies the layout to the host window.</summary>
	/// <returns> TRUE if resource is loaded and applied to the host window; otherwise FALSE.</returns>
	/// <param name="pHostWnd"> A pointer to the host window.</param>
	/// <param name="lpResource"> A pointer to the buffer containing AFX_DIALOG_LAYOUT resource.</param>
	/// <param name="dwSize"> Size of buffer in bytes.</param>
	static BOOL LoadResource(CWnd* pHostWnd, LPVOID lpResource, DWORD dwSize);
	void SetResize(SizeSettings sizeSetting) { m_sizeSettings = sizeSetting; }
	void Resize(CWnd* pWnd, float xscale, float yscale);
	BOOL AddBottom(CWnd* pWnd, int space=5, bool left=false);
	void SetMinScale(float x, float y);
protected:
	CWnd* m_pHostWnd;
	CSize m_MinSize;
	float m_nMinScaleX;
	float m_nMinScaleY;
	CMap<HWND,HWND, AFX_DYNAMIC_LAYOUT_ITEM*,AFX_DYNAMIC_LAYOUT_ITEM*> m_listWnd;
	CArray<CWnd*, CWnd*> m_leftActions;
	CArray<CWnd*, CWnd*> m_actions;	
	CMap<int, int, int, int> m_actionsWidth;

	AFX_DYNAMIC_LAYOUT_ITEM* FindItem(HWND hWnd);

	void CorrectItem(AFX_DYNAMIC_LAYOUT_ITEM& item) const;
	BOOL PrepareItem(AFX_DYNAMIC_LAYOUT_ITEM& item) const;
	UINT AdjustItemRect(AFX_DYNAMIC_LAYOUT_ITEM& item, CRect& rectItem) const;

	CRect GetItemRect(AFX_DYNAMIC_LAYOUT_ITEM& item) const;
	
	SizeSettings m_sizeSettings;
	void Reposition(HDWP hDWP, AFX_DYNAMIC_LAYOUT_ITEM* item, float scalex, float scaley);
	// Attributes:
public:
	/// <summary>
	/// This method returns a pointer to a host window. By default all child control positions recalculated relatively to this window.</summary>
	/// <returns> 
	/// A pointer to a host window.</returns>
	CWnd* GetHostWnd() { return m_pHostWnd; }

	/// <summary>
	/// This method returns minimal size of layout area. If a host window is resized beyond this area, the layout is not calculated.
	/// For dialog templates the initial minimal size is set to client rectangle.</summary>
	/// <returns> 
	/// Minimal size of layout area.</returns>
	CSize GetMinSize() const { return m_MinSize; }

	/// <summary>
	/// This function sets minimal size of layout area. If a host window is resized beyond this area, the layout is not calculated.</summary>
	/// <param name="size">Specifies the minimal size of layout area.</param>
	void SetMinSize(const CSize& size) { m_MinSize = size; }

};


#endif
