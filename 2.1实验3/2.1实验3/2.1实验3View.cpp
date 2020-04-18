
// 2.1实验3View.cpp : CMy21实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2.1实验3.h"
#endif

#include "2.1实验3Doc.h"
#include "2.1实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy21实验3View

IMPLEMENT_DYNCREATE(CMy21实验3View, CView)

BEGIN_MESSAGE_MAP(CMy21实验3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy21实验3View 构造/析构

CMy21实验3View::CMy21实验3View()
{
	// TODO: 在此处添加构造代码

}

CMy21实验3View::~CMy21实验3View()
{
}

BOOL CMy21实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy21实验3View 绘制

void CMy21实验3View::OnDraw(CDC* pDC)
{
	CMy21实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;

	this->GetClientRect(cr);

	pDC->Ellipse(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy21实验3View 诊断

#ifdef _DEBUG
void CMy21实验3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy21实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy21实验3Doc* CMy21实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy21实验3Doc)));
	return (CMy21实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy21实验3View 消息处理程序


void CMy21实验3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
}
