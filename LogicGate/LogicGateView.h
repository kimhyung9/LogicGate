
// LogicGateView.h : interface of the CLogicGateView class
//

#pragma once


class CLogicGateView : public CView
{
protected: // create from serialization only
	CLogicGateView();
	DECLARE_DYNCREATE(CLogicGateView)

// Attributes
public:
	CLogicGateDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CLogicGateView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in LogicGateView.cpp
inline CLogicGateDoc* CLogicGateView::GetDocument() const
   { return reinterpret_cast<CLogicGateDoc*>(m_pDocument); }
#endif

