
// 4.1����(2)View.cpp : CMy41����2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.1����(2).h"
#endif

#include "4.1����(2)Doc.h"
#include "4.1����(2)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41����2View

IMPLEMENT_DYNCREATE(CMy41����2View, CView)

BEGIN_MESSAGE_MAP(CMy41����2View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy41����2View ����/����

CMy41����2View::CMy41����2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy41����2View::~CMy41����2View()
{
}

BOOL CMy41����2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy41����2View ����

void CMy41����2View::OnDraw(CDC* pDC)
{
	CMy41����2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPoint point(30, 30);
	pDC->MoveTo(point);
	pDC->LineTo(pDoc->a);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy41����2View ���

#ifdef _DEBUG
void CMy41����2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41����2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41����2Doc* CMy41����2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41����2Doc)));
	return (CMy41����2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41����2View ��Ϣ�������


void CMy41����2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy41����2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->a = point;
	InvalidateRect(NULL, FALSE);
	CView::OnMouseMove(nFlags, point);
}
