
// 2.1View.cpp : CMy21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2.1.h"
#endif

#include "2.1Doc.h"
#include "2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy21View

IMPLEMENT_DYNCREATE(CMy21View, CView)

BEGIN_MESSAGE_MAP(CMy21View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy21View 构造/析构

CMy21View::CMy21View()
{
	// TODO: 在此处添加构造代码

}

CMy21View::~CMy21View()
{
}

BOOL CMy21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy21View 绘制

void CMy21View::OnDraw(CDC* pDC)
{
	CMy21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	CString s;
	s.Format(_T("%d"),pDoc->a);
	pDC->TextOutW(100, 100, s);

}


// CMy21View 诊断

#ifdef _DEBUG
void CMy21View::AssertValid() const
{
	CView::AssertValid();
}

void CMy21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy21Doc* CMy21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy21Doc)));
	return (CMy21Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy21View 消息处理程序


void CMy21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
}


void CMy21View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonUp(nFlags, point);
}
