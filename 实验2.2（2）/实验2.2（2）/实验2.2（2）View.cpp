
// ʵ��2.2��2��View.cpp : Cʵ��22��2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��2.2��2��.h"
#endif

#include "ʵ��2.2��2��Doc.h"
#include "ʵ��2.2��2��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��22��2��View

IMPLEMENT_DYNCREATE(Cʵ��22��2��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��22��2��View, CView)
END_MESSAGE_MAP()

// Cʵ��22��2��View ����/����

Cʵ��22��2��View::Cʵ��22��2��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��22��2��View::~Cʵ��22��2��View()
{
}

BOOL Cʵ��22��2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��22��2��View ����

void Cʵ��22��2��View::OnDraw(CDC* pDC)
{
	Cʵ��22��2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(100, 100, pDoc->S);
	pDoc->a.Format(_T("%d"), pDoc->A);
	pDC->TextOutW(200, 200, pDoc->a);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��22��2��View ���

#ifdef _DEBUG
void Cʵ��22��2��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��22��2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��22��2��Doc* Cʵ��22��2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��22��2��Doc)));
	return (Cʵ��22��2��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��22��2��View ��Ϣ�������
