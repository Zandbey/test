
// 3.2ʵ��3View.cpp : CMy32ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3.2ʵ��3.h"
#endif

#include "3.2ʵ��3Doc.h"
#include "3.2ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy32ʵ��3View

IMPLEMENT_DYNCREATE(CMy32ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy32ʵ��3View, CView)
END_MESSAGE_MAP()

// CMy32ʵ��3View ����/����

CMy32ʵ��3View::CMy32ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy32ʵ��3View::~CMy32ʵ��3View()
{
}

BOOL CMy32ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy32ʵ��3View ����

void CMy32ʵ��3View::OnDraw(CDC* /*pDC*/)
{
	CMy32ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy32ʵ��3View ���

#ifdef _DEBUG
void CMy32ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy32ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy32ʵ��3Doc* CMy32ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy32ʵ��3Doc)));
	return (CMy32ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy32ʵ��3View ��Ϣ�������
