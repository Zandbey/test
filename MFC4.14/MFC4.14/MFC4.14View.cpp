
// MFC4.14View.cpp : CMFC414View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC4.14.h"
#endif

#include "MFC4.14Doc.h"
#include "MFC4.14View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC414View

IMPLEMENT_DYNCREATE(CMFC414View, CView)

BEGIN_MESSAGE_MAP(CMFC414View, CView)
END_MESSAGE_MAP()

// CMFC414View 构造/析构

CMFC414View::CMFC414View()
{
	// TODO: 在此处添加构造代码

}

CMFC414View::~CMFC414View()
{
}

BOOL CMFC414View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC414View 绘制

void CMFC414View::OnDraw(CDC* pDC)
{
	CMFC414Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	//CString s =_T( "hello world");

	pDC->TextOutW(200, 200,pDoc->s);
	CString d = _T("张裕梅");
	pDC->TextOutW(100, 100, d);
	int cout = 0;

}


// CMFC414View 诊断

#ifdef _DEBUG
void CMFC414View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC414View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC414Doc* CMFC414View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC414Doc)));
	return (CMFC414Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC414View 消息处理程序
