
// 4.1例子(3)View.cpp : CMy41例子3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.1例子(3).h"
#endif

#include "4.1例子(3)Doc.h"
#include "4.1例子(3)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41例子3View

IMPLEMENT_DYNCREATE(CMy41例子3View, CView)

BEGIN_MESSAGE_MAP(CMy41例子3View, CView)
END_MESSAGE_MAP()

// CMy41例子3View 构造/析构

CMy41例子3View::CMy41例子3View()
{
	// TODO: 在此处添加构造代码

}

CMy41例子3View::~CMy41例子3View()
{
}

BOOL CMy41例子3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy41例子3View 绘制

void CMy41例子3View::OnDraw(CDC* /*pDC*/)
{
	CMy41例子3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy41例子3View 诊断

#ifdef _DEBUG
void CMy41例子3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41例子3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41例子3Doc* CMy41例子3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41例子3Doc)));
	return (CMy41例子3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41例子3View 消息处理程序
