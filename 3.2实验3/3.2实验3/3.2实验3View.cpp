
// 3.2实验3View.cpp : CMy32实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.2实验3.h"
#endif

#include "3.2实验3Doc.h"
#include "3.2实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy32实验3View

IMPLEMENT_DYNCREATE(CMy32实验3View, CView)

BEGIN_MESSAGE_MAP(CMy32实验3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy32实验3View 构造/析构

CMy32实验3View::CMy32实验3View()
{
	// TODO: 在此处添加构造代码

}

CMy32实验3View::~CMy32实验3View()
{
}

BOOL CMy32实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy32实验3View 绘制

void CMy32实验3View::OnDraw(CDC* pDC)
{
	CMy32实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->A);
	pDC->Rectangle(pDoc->B);
	pDC->Rectangle(pDoc->C);

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy32实验3View 诊断

#ifdef _DEBUG
void CMy32实验3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy32实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy32实验3Doc* CMy32实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy32实验3Doc)));
	return (CMy32实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy32实验3View 消息处理程序


void CMy32实验3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy32实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	CString s;
	if (point.x > pDoc->A.left&&point.x<pDoc->A.right&&point.y>pDoc->A.top&&point.y < pDoc->A.bottom) {
		pDoc->a = rand() % 30 + 5;
		s.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s);
	}

	else if (point.x > pDoc->B.left&&point.x<pDoc->B.right&&point.y>pDoc->B.top&&point.y < pDoc->B.bottom) {
		pDoc->b = rand() % 20 + 5;
		s.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}

	else if (point.x > pDoc->C.left&&point.x<pDoc->C.right&&point.y>pDoc->C.top&&point.y < pDoc->C.bottom) {
		s.Format(_T("%d+%d=%d"), pDoc->a, pDoc->b, pDoc->a + pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	else dc.TextOutW(point.x, point.y, _T("点击无效"));

	CView::OnLButtonDown(nFlags, point);
}


void CMy32实验3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy32实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	CString s;
	if (point.x > pDoc->C.left&&point.x<pDoc->C.right&&point.y>pDoc->C.top&&point.y < pDoc->C.bottom) {
		//pDoc->c = rand() % 10 + 5;
		s.Format(_T("%d+%d=%d"),pDoc->a,pDoc->b, pDoc->a+pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
