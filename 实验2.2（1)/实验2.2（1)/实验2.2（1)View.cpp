
// ʵ��2.2��1)View.cpp : Cʵ��22��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��2.2��1).h"
#endif

#include "ʵ��2.2��1)Doc.h"
#include "ʵ��2.2��1)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��22��1View

IMPLEMENT_DYNCREATE(Cʵ��22��1View, CView)

BEGIN_MESSAGE_MAP(Cʵ��22��1View, CView)
END_MESSAGE_MAP()

// Cʵ��22��1View ����/����

Cʵ��22��1View::Cʵ��22��1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��22��1View::~Cʵ��22��1View()
{
}

BOOL Cʵ��22��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��22��1View ����

void Cʵ��22��1View::OnDraw(CDC* pDC)
{
	Cʵ��22��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString S;
	S = _T("����***");
	pDC->TextOutW(100, 100, S);
	int A=123;
	CString a;
	a.Format(_T("%d"), A);
	pDC->TextOutW(200, 200, a);
		// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��22��1View ���

#ifdef _DEBUG
void Cʵ��22��1View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��22��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��22��1Doc* Cʵ��22��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��22��1Doc)));
	return (Cʵ��22��1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��22��1View ��Ϣ�������
