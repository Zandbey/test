
// 2.1(3)View.cpp : CMy213View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2.1(3).h"
#endif

#include "2.1(3)Doc.h"
#include "2.1(3)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy213View

IMPLEMENT_DYNCREATE(CMy213View, CView)

BEGIN_MESSAGE_MAP(CMy213View, CView)
END_MESSAGE_MAP()

// CMy213View 构造/析构

CMy213View::CMy213View()
{
	// TODO: 在此处添加构造代码

}

CMy213View::~CMy213View()
{
}

BOOL CMy213View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy213View 绘制

void CMy213View::OnDraw(CDC* /*pDC*/)
{
	CMy213Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy213View 诊断

#ifdef _DEBUG
void CMy213View::AssertValid() const
{
	CView::AssertValid();
}

void CMy213View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy213Doc* CMy213View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy213Doc)));
	return (CMy213Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy213View 消息处理程序
