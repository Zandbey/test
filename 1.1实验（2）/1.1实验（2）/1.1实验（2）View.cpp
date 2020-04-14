
// 1.1实验（2）View.cpp : CMy11实验（2）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "1.1实验（2）.h"
#endif

#include "1.1实验（2）Doc.h"
#include "1.1实验（2）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11实验（2）View

IMPLEMENT_DYNCREATE(CMy11实验（2）View, CView)

BEGIN_MESSAGE_MAP(CMy11实验（2）View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy11实验（2）View 构造/析构

CMy11实验（2）View::CMy11实验（2）View()
{
	// TODO: 在此处添加构造代码

}

CMy11实验（2）View::~CMy11实验（2）View()
{
}

BOOL CMy11实验（2）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy11实验（2）View 绘制

void CMy11实验（2）View::OnDraw(CDC* /*pDC*/)
{
	CMy11实验（2）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy11实验（2）View 诊断

#ifdef _DEBUG
void CMy11实验（2）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy11实验（2）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy11实验（2）Doc* CMy11实验（2）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11实验（2）Doc)));
	return (CMy11实验（2）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy11实验（2）View 消息处理程序


void CMy11实验（2）View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy11实验（2）Doc*pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->cout += 1;
	
	//CView::OnLButtonDown(nFlags, point);
}


void CMy11实验（2）View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy11实验（2）Doc*pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CString s;
	s.Format(_T("%d"), pDoc->cout);
	dc.TextOutW(100, 100, s);

	CView::OnRButtonDown(nFlags, point);
}
