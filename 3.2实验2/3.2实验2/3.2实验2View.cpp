
// 3.2ʵ��2View.cpp : CMy32ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3.2ʵ��2.h"
#endif

#include "3.2ʵ��2Doc.h"
#include "3.2ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy32ʵ��2View

IMPLEMENT_DYNCREATE(CMy32ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy32ʵ��2View, CView)
//	ON_WM_LBUTTONDOWN()
//	ON_WM_LBUTTONUP()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy32ʵ��2View ����/����

CMy32ʵ��2View::CMy32ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy32ʵ��2View::~CMy32ʵ��2View()
{
}

BOOL CMy32ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy32ʵ��2View ����

void CMy32ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy32ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy32ʵ��2View ���

#ifdef _DEBUG
void CMy32ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy32ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy32ʵ��2Doc* CMy32ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy32ʵ��2Doc)));
	return (CMy32ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy32ʵ��2View ��Ϣ�������





void CMy32ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy32ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	CString s;
	s.Format(_T("%d+%d=%d"), pDoc->A, pDoc->B,  pDoc->A + pDoc->B);
	dc.TextOutW(point.x, point.y, s);
	CView::OnLButtonDown(nFlags, point);
}
