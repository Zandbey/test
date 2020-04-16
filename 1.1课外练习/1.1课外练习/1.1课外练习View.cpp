
// 1.1课外练习View.cpp : CMy11课外练习View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "1.1课外练习.h"
#endif

#include "1.1课外练习Doc.h"
#include "1.1课外练习View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11课外练习View

IMPLEMENT_DYNCREATE(CMy11课外练习View, CView)

BEGIN_MESSAGE_MAP(CMy11课外练习View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy11课外练习View 构造/析构

CMy11课外练习View::CMy11课外练习View()
{
	// TODO: 在此处添加构造代码

}

CMy11课外练习View::~CMy11课外练习View()
{
}

BOOL CMy11课外练习View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy11课外练习View 绘制

void CMy11课外练习View::OnDraw(CDC* pDC)
{
	CMy11课外练习Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	d = _T("world");
	pDC->TextOutW(200, 200, d);
	pDC->TextOutW(150, 200, pDoc->s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy11课外练习View 诊断

#ifdef _DEBUG
void CMy11课外练习View::AssertValid() const
{
	CView::AssertValid();
}

void CMy11课外练习View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy11课外练习Doc* CMy11课外练习View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11课外练习Doc)));
	return (CMy11课外练习Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy11课外练习View 消息处理程序


void CMy11课外练习View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy11课外练习Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CString t;
	t = pDoc->s;
	t = t + d;
	dc.TextOutW(300, 300,t );
	CView::OnLButtonDown(nFlags, point);
}
