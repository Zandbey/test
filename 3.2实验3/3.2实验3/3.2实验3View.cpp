
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
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
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

void CMy32ʵ��3View::OnDraw(CDC* pDC)
{
	CMy32ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->A);
	pDC->Rectangle(pDoc->B);
	pDC->Rectangle(pDoc->C);

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


void CMy32ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy32ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	CString s;
	if (point.x > pDoc->A.left&&point.x<pDoc->A.right&&point.y>pDoc->A.top&&point.y < pDoc->A.bottom) {
		pDoc->a = rand() % 30 + 5;
		s.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s);
	}

	else if (point.x > pDoc->B.left&&point.x<pDoc->B.right&&point.y>pDoc->B.top&&point.y < pDoc->B.bottom) {
		pDoc->b = rand() % 20 + 5;
		s.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}

	else if (point.x > pDoc->C.left&&point.x<pDoc->C.right&&point.y>pDoc->C.top&&point.y < pDoc->C.bottom) {
		s.Format(_T("%d+%d=%d"), pDoc->a, pDoc->b, pDoc->a + pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	else dc.TextOutW(point.x, point.y, _T("�����Ч"));

	CView::OnLButtonDown(nFlags, point);
}


void CMy32ʵ��3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy32ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	CString s;
	if (point.x > pDoc->C.left&&point.x<pDoc->C.right&&point.y>pDoc->C.top&&point.y < pDoc->C.bottom) {
		//pDoc->c = rand() % 10 + 5;
		s.Format(_T("%d+%d=%d"),pDoc->a,pDoc->b, pDoc->a+pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
