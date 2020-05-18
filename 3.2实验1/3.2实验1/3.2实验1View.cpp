
// 3.2实验1View.cpp : CMy32实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.2实验1.h"
#endif

#include "3.2实验1Doc.h"
#include "3.2实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy32实验1View

IMPLEMENT_DYNCREATE(CMy32实验1View, CView)

BEGIN_MESSAGE_MAP(CMy32实验1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy32实验1View 构造/析构

CMy32实验1View::CMy32实验1View()
{
	// TODO: 在此处添加构造代码

}

CMy32实验1View::~CMy32实验1View()
{
}

BOOL CMy32实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy32实验1View 绘制

void CMy32实验1View::OnDraw(CDC* /*pDC*/)
{
	CMy32实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy32实验1View 诊断

#ifdef _DEBUG
void CMy32实验1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy32实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy32实验1Doc* CMy32实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy32实验1Doc)));
	return (CMy32实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy32实验1View 消息处理程序


void CMy32实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString a;
	a = _T("左键正在被按下");
	dc.TextOutW(100, 100, a);
	CView::OnLButtonDown(nFlags, point);
	CView::OnLButtonDown(nFlags, point);
}


void CMy32实验1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s;
	s = _T("左键正在抬起");
	dc.TextOutW(200, 200, s);
	CView::OnLButtonUp(nFlags, point);
}
