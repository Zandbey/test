
// 4.1����(3)View.cpp : CMy41����3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.1����(3).h"
#endif

#include "4.1����(3)Doc.h"
#include "4.1����(3)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41����3View

IMPLEMENT_DYNCREATE(CMy41����3View, CView)

BEGIN_MESSAGE_MAP(CMy41����3View, CView)
END_MESSAGE_MAP()

// CMy41����3View ����/����

CMy41����3View::CMy41����3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy41����3View::~CMy41����3View()
{
}

BOOL CMy41����3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy41����3View ����

void CMy41����3View::OnDraw(CDC* /*pDC*/)
{
	CMy41����3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy41����3View ���

#ifdef _DEBUG
void CMy41����3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41����3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41����3Doc* CMy41����3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41����3Doc)));
	return (CMy41����3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41����3View ��Ϣ�������
