
// 4.1例子(5)View.cpp : CMy41例子5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.1例子(5).h"
#endif

#include "4.1例子(5)Doc.h"
#include "4.1例子(5)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41例子5View

IMPLEMENT_DYNCREATE(CMy41例子5View, CView)

BEGIN_MESSAGE_MAP(CMy41例子5View, CView)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMy41例子5View 构造/析构

CMy41例子5View::CMy41例子5View()
{
	// TODO: 在此处添加构造代码

}

CMy41例子5View::~CMy41例子5View()
{
}

BOOL CMy41例子5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy41例子5View 绘制

void CMy41例子5View::OnDraw(CDC* pDC)
{
	CMy41例子5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->a);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy41例子5View 诊断

#ifdef _DEBUG
void CMy41例子5View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41例子5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41例子5Doc* CMy41例子5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41例子5Doc)));
	return (CMy41例子5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41例子5View 消息处理程序


void CMy41例子5View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy41例子5Doc* pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->a.left>0)
		{
			pDoc->a.left -= 5;
			pDoc->a.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->a.right<=(clientRec.right-clientRec.left))
		{
			pDoc->a.left += 5;
			pDoc->a.right += 5;
			
		}
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
