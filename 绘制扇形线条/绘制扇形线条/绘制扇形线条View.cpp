
// 绘制扇形线条View.cpp : C绘制扇形线条View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "绘制扇形线条.h"
#endif

#include "绘制扇形线条Doc.h"
#include "绘制扇形线条View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C绘制扇形线条View

IMPLEMENT_DYNCREATE(C绘制扇形线条View, CView)

BEGIN_MESSAGE_MAP(C绘制扇形线条View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C绘制扇形线条View 构造/析构

C绘制扇形线条View::C绘制扇形线条View()
{
	// TODO: 在此处添加构造代码

}

C绘制扇形线条View::~C绘制扇形线条View()
{
}

BOOL C绘制扇形线条View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C绘制扇形线条View 绘制

void C绘制扇形线条View::OnDraw(CDC* pDC)
{
	C绘制扇形线条Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
}


// C绘制扇形线条View 诊断

#ifdef _DEBUG
void C绘制扇形线条View::AssertValid() const
{
	CView::AssertValid();
}

void C绘制扇形线条View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C绘制扇形线条Doc* C绘制扇形线条View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C绘制扇形线条Doc)));
	return (C绘制扇形线条Doc*)m_pDocument;
}
#endif //_DEBUG


// C绘制扇形线条View 消息处理程序


void C绘制扇形线条View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	m_ptOld = point;
	CView::OnLButtonDown(nFlags, point);
}


void C绘制扇形线条View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CPen pen(PS_SOLID, 1, RGB(250, 0, 0));

	CPen *pOldPen = dc.SelectObject(&pen);
	//if (m_bGestureInited == TRUE)
	//{
		dc.MoveTo(m_ptOld);
		dc.LineTo(point);
		dc.LineTo(m_ptOld);
		m_ptOld = point;
	//}
	dc.SelectObject(pOldPen);
	CView::OnMouseMove(nFlags, point);
}
