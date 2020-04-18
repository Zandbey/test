
// 实验2.2（1)View.cpp : C实验22（1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验2.2（1).h"
#endif

#include "实验2.2（1)Doc.h"
#include "实验2.2（1)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验22（1View

IMPLEMENT_DYNCREATE(C实验22（1View, CView)

BEGIN_MESSAGE_MAP(C实验22（1View, CView)
END_MESSAGE_MAP()

// C实验22（1View 构造/析构

C实验22（1View::C实验22（1View()
{
	// TODO: 在此处添加构造代码

}

C实验22（1View::~C实验22（1View()
{
}

BOOL C实验22（1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验22（1View 绘制

void C实验22（1View::OnDraw(CDC* pDC)
{
	C实验22（1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString S;
	S = _T("我是***");
	pDC->TextOutW(100, 100, S);
	int A=123;
	CString a;
	a.Format(_T("%d"), A);
	pDC->TextOutW(200, 200, a);
		// TODO: 在此处为本机数据添加绘制代码
}


// C实验22（1View 诊断

#ifdef _DEBUG
void C实验22（1View::AssertValid() const
{
	CView::AssertValid();
}

void C实验22（1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验22（1Doc* C实验22（1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验22（1Doc)));
	return (C实验22（1Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验22（1View 消息处理程序
