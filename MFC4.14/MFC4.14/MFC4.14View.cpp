
// MFC4.14View.cpp : CMFC414View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMFC414View ����/����

CMFC414View::CMFC414View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC414View::~CMFC414View()
{
}

BOOL CMFC414View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC414View ����

void CMFC414View::OnDraw(CDC* pDC)
{
	CMFC414Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	//CString s =_T( "hello world");

	pDC->TextOutW(200, 200,pDoc->s);
	CString d = _T("��ԣ÷");
	pDC->TextOutW(100, 100, d);
	int cout = 0;

}


// CMFC414View ���

#ifdef _DEBUG
void CMFC414View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC414View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC414Doc* CMFC414View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC414Doc)));
	return (CMFC414Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC414View ��Ϣ�������
