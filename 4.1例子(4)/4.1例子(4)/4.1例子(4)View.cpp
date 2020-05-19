
// 4.1例子(4)View.cpp : CMy41例子4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.1例子(4).h"
#endif

#include "4.1例子(4)Doc.h"
#include "4.1例子(4)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41例子4View

IMPLEMENT_DYNCREATE(CMy41例子4View, CView)

BEGIN_MESSAGE_MAP(CMy41例子4View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy41例子4View 构造/析构

CMy41例子4View::CMy41例子4View()
{
	// TODO: 在此处添加构造代码

}

CMy41例子4View::~CMy41例子4View()
{
}

BOOL CMy41例子4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy41例子4View 绘制

void CMy41例子4View::OnDraw(CDC* /*pDC*/)
{
	CMy41例子4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy41例子4View 诊断

#ifdef _DEBUG
void CMy41例子4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41例子4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41例子4Doc* CMy41例子4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41例子4Doc)));
	return (CMy41例子4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41例子4View 消息处理程序


void CMy41例子4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetCapture();//捕获鼠标消息

	CView::OnLButtonDown(nFlags, point);
}


void CMy41例子4View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	ReleaseCapture();//释放鼠标捕获
	CView::OnLButtonUp(nFlags, point);
}


void CMy41例子4View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	s = "WM_MOUSEMOVE";
	CClientDC dc(this);
	dc.TextOutW(20, 20,s);
	CString str;
	str.Format(str, "X:%d  Y:%d", point.x, point.y);


	CView::OnMouseMove(nFlags, point);
}
