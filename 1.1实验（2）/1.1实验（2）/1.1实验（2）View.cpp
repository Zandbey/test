
// 1.1ʵ�飨2��View.cpp : CMy11ʵ�飨2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "1.1ʵ�飨2��.h"
#endif

#include "1.1ʵ�飨2��Doc.h"
#include "1.1ʵ�飨2��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11ʵ�飨2��View

IMPLEMENT_DYNCREATE(CMy11ʵ�飨2��View, CView)

BEGIN_MESSAGE_MAP(CMy11ʵ�飨2��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy11ʵ�飨2��View ����/����

CMy11ʵ�飨2��View::CMy11ʵ�飨2��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy11ʵ�飨2��View::~CMy11ʵ�飨2��View()
{
}

BOOL CMy11ʵ�飨2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy11ʵ�飨2��View ����

void CMy11ʵ�飨2��View::OnDraw(CDC* /*pDC*/)
{
	CMy11ʵ�飨2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy11ʵ�飨2��View ���

#ifdef _DEBUG
void CMy11ʵ�飨2��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy11ʵ�飨2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy11ʵ�飨2��Doc* CMy11ʵ�飨2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11ʵ�飨2��Doc)));
	return (CMy11ʵ�飨2��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy11ʵ�飨2��View ��Ϣ�������


void CMy11ʵ�飨2��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy11ʵ�飨2��Doc*pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->cout += 1;
	
	//CView::OnLButtonDown(nFlags, point);
}


void CMy11ʵ�飨2��View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy11ʵ�飨2��Doc*pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CString s;
	s.Format(_T("%d"), pDoc->cout);
	dc.TextOutW(100, 100, s);

	CView::OnRButtonDown(nFlags, point);
}
