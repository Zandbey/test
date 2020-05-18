
// 3.1实验2View.cpp : CMy31实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.1实验2.h"
#endif

#include "3.1实验2Doc.h"
#include "3.1实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy31实验2View

IMPLEMENT_DYNCREATE(CMy31实验2View, CView)

BEGIN_MESSAGE_MAP(CMy31实验2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy31实验2View 构造/析构

CMy31实验2View::CMy31实验2View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(256);

}

CMy31实验2View::~CMy31实验2View()
{
}

BOOL CMy31实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy31实验2View 绘制

void CMy31实验2View::OnDraw(CDC* pDC)
{
	CMy31实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//Ellipse cr;
	for (int i = 0; i < ca.GetSize(); i++)
	{
	pDC->Ellipse(ca[i]);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy31实验2View 诊断

#ifdef _DEBUG
void CMy31实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy31实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy31实验2Doc* CMy31实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy31实验2Doc)));
	return (CMy31实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy31实验2View 消息处理程序


void CMy31实验2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int a = rand() % 50 + 5;
	int b = rand() % 30 + 3;
	CRect cr(point.x + a, point.y + b, point.x - a, point.y - b);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
