
// 3.2实验2View.cpp : CMy32实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.2实验2.h"
#endif

#include "3.2实验2Doc.h"
#include "3.2实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy32实验2View

IMPLEMENT_DYNCREATE(CMy32实验2View, CView)

BEGIN_MESSAGE_MAP(CMy32实验2View, CView)
//	ON_WM_LBUTTONDOWN()
//	ON_WM_LBUTTONUP()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy32实验2View 构造/析构

CMy32实验2View::CMy32实验2View()
{
	// TODO: 在此处添加构造代码

}

CMy32实验2View::~CMy32实验2View()
{
}

BOOL CMy32实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy32实验2View 绘制

void CMy32实验2View::OnDraw(CDC* /*pDC*/)
{
	CMy32实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy32实验2View 诊断

#ifdef _DEBUG
void CMy32实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy32实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy32实验2Doc* CMy32实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy32实验2Doc)));
	return (CMy32实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy32实验2View 消息处理程序





void CMy32实验2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy32实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	CString s;
	s.Format(_T("%d+%d=%d"), pDoc->A, pDoc->B,  pDoc->A + pDoc->B);
	dc.TextOutW(point.x, point.y, s);
	CView::OnLButtonDown(nFlags, point);
}
