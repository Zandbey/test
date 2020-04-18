
// 2.1例子（4）View.cpp : CMy21例子（4）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2.1例子（4）.h"
#endif

#include "2.1例子（4）Doc.h"
#include "2.1例子（4）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy21例子（4）View

IMPLEMENT_DYNCREATE(CMy21例子（4）View, CView)

BEGIN_MESSAGE_MAP(CMy21例子（4）View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy21例子（4）View 构造/析构

CMy21例子（4）View::CMy21例子（4）View()
{
	// TODO: 在此处添加构造代码

}

CMy21例子（4）View::~CMy21例子（4）View()
{
}

BOOL CMy21例子（4）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy21例子（4）View 绘制

void CMy21例子（4）View::OnDraw(CDC* /*pDC*/)
{
	CMy21例子（4）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy21例子（4）View 诊断

#ifdef _DEBUG
void CMy21例子（4）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy21例子（4）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy21例子（4）Doc* CMy21例子（4）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy21例子（4）Doc)));
	return (CMy21例子（4）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy21例子（4）View 消息处理程序


void CMy21例子（4）View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.MoveTo(0, (rc.bottom + rc.top) / 2);
	dc.LineTo((rc.right + rc.left) / 2, 0);
	dc.LineTo(rc.right, (rc.bottom + rc.top) / 2);
	dc.LineTo((rc.right + rc.left) / 2, rc.bottom);
	dc.LineTo(0, (rc.bottom + rc.top) / 2);
	CView::OnLButtonDown(nFlags, point);
}
