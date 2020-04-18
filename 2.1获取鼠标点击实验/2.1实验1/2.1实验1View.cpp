
// 2.1实验1View.cpp : CMy21实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2.1实验1.h"
#endif

#include "2.1实验1Doc.h"
#include "2.1实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy21实验1View

IMPLEMENT_DYNCREATE(CMy21实验1View, CView)

BEGIN_MESSAGE_MAP(CMy21实验1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy21实验1View 构造/析构

CMy21实验1View::CMy21实验1View()
{
	// TODO: 在此处添加构造代码

}

CMy21实验1View::~CMy21实验1View()
{
}

BOOL CMy21实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy21实验1View 绘制

void CMy21实验1View::OnDraw(CDC* /*pDC*/)
{
	CMy21实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// CMy21实验1View 诊断

#ifdef _DEBUG
void CMy21实验1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy21实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy21实验1Doc* CMy21实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy21实验1Doc)));
	return (CMy21实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy21实验1View 消息处理程序


void CMy21实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	s.Format(_T("点的位置是(%d,%d)"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(100, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
