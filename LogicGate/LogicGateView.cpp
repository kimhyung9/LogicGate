
// LogicGateView.cpp : implementation of the CLogicGateView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "LogicGate.h"
#endif

#include "LogicGateDoc.h"
#include "LogicGateView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CLogicGateView

IMPLEMENT_DYNCREATE(CLogicGateView, CView)

BEGIN_MESSAGE_MAP(CLogicGateView, CView)
END_MESSAGE_MAP()

// CLogicGateView construction/destruction

CLogicGateView::CLogicGateView()
{
	// TODO: add construction code here

}

CLogicGateView::~CLogicGateView()
{
}

BOOL CLogicGateView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CLogicGateView drawing

void CLogicGateView::OnDraw(CDC* /*pDC*/)
{
	CLogicGateDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CLogicGateView diagnostics

#ifdef _DEBUG
void CLogicGateView::AssertValid() const
{
	CView::AssertValid();
}

void CLogicGateView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLogicGateDoc* CLogicGateView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLogicGateDoc)));
	return (CLogicGateDoc*)m_pDocument;
}
#endif //_DEBUG


// CLogicGateView message handlers
