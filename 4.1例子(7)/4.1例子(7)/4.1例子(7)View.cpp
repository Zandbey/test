
// 4.1����(7)View.cpp : CMy41����7View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.1����(7).h"
#endif

#include "4.1����(7)Doc.h"
#include "4.1����(7)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41����7View

IMPLEMENT_DYNCREATE(CMy41����7View, CView)

BEGIN_MESSAGE_MAP(CMy41����7View, CView)
END_MESSAGE_MAP()

// CMy41����7View ����/����

CMy41����7View::CMy41����7View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy41����7View::~CMy41����7View()
{
}

BOOL CMy41����7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy41����7View ����

void CMy41����7View::OnDraw(CDC* /*pDC*/)
{
	CMy41����7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy41����7View ���

#ifdef _DEBUG
void CMy41����7View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41����7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41����7Doc* CMy41����7View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41����7Doc)));
	return (CMy41����7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41����7View ��Ϣ�������
