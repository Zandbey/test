
// 1.1ʵ��View.cpp : CMy11ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "1.1ʵ��.h"
#endif

#include "1.1ʵ��Doc.h"
#include "1.1ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11ʵ��View

IMPLEMENT_DYNCREATE(CMy11ʵ��View, CView)

BEGIN_MESSAGE_MAP(CMy11ʵ��View, CView)
END_MESSAGE_MAP()

// CMy11ʵ��View ����/����

CMy11ʵ��View::CMy11ʵ��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy11ʵ��View::~CMy11ʵ��View()
{
}

BOOL CMy11ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy11ʵ��View ����

void CMy11ʵ��View::OnDraw(CDC* pDC)
{
	CMy11ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(200, 200,pDoc->s);
	
}


// CMy11ʵ��View ���

#ifdef _DEBUG
void CMy11ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy11ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy11ʵ��Doc* CMy11ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11ʵ��Doc)));
	return (CMy11ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy11ʵ��View ��Ϣ�������
