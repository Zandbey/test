
// 4.1例子(1)View.cpp : CMy41例子1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.1例子(1).h"
#endif

#include "4.1例子(1)Doc.h"
#include "4.1例子(1)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41例子1View

IMPLEMENT_DYNCREATE(CMy41例子1View, CView)

BEGIN_MESSAGE_MAP(CMy41例子1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy41例子1View 构造/析构

CMy41例子1View::CMy41例子1View()
{
	// TODO: 在此处添加构造代码

}

CMy41例子1View::~CMy41例子1View()
{
}

BOOL CMy41例子1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy41例子1View 绘制

void CMy41例子1View::OnDraw(CDC* pDC)
{
	CMy41例子1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	CClientDC dc(this);
	pDC->Rectangle(pDoc->cr);

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy41例子1View 诊断

#ifdef _DEBUG
void CMy41例子1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41例子1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41例子1Doc* CMy41例子1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41例子1Doc)));
	return (CMy41例子1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41例子1View 消息处理程序


void CMy41例子1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy41例子1Doc* pDoc = GetDocument();
	if (nFlags&MK_SHIFT)
	{
		pDoc->cr.left = 100;
		pDoc->cr.top = 100;
		pDoc->cr.right = 350;
		pDoc->cr.bottom = 300;

	}
	else
	{
		pDoc->cr.left = point.x;
		pDoc->cr.top = point.y;
		pDoc->cr.right = point.x + 250;
		pDoc->cr.bottom = point.y + 200;
	}
	InvalidateRect(NULL, true);//强制重绘
	CView::OnLButtonDown(nFlags, point);
}
