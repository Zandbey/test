
// 4.1����(4)View.cpp : CMy41����4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.1����(4).h"
#endif

#include "4.1����(4)Doc.h"
#include "4.1����(4)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41����4View

IMPLEMENT_DYNCREATE(CMy41����4View, CView)

BEGIN_MESSAGE_MAP(CMy41����4View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy41����4View ����/����

CMy41����4View::CMy41����4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy41����4View::~CMy41����4View()
{
}

BOOL CMy41����4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy41����4View ����

void CMy41����4View::OnDraw(CDC* /*pDC*/)
{
	CMy41����4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy41����4View ���

#ifdef _DEBUG
void CMy41����4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41����4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41����4Doc* CMy41����4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41����4Doc)));
	return (CMy41����4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41����4View ��Ϣ�������


void CMy41����4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCapture();//���������Ϣ

	CView::OnLButtonDown(nFlags, point);
}


void CMy41����4View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	ReleaseCapture();//�ͷ���겶��
	CView::OnLButtonUp(nFlags, point);
}


void CMy41����4View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s = "WM_MOUSEMOVE";
	CClientDC dc(this);
	dc.TextOutW(20, 20,s);
	CString str;
	str.Format(str, "X:%d  Y:%d", point.x, point.y);


	CView::OnMouseMove(nFlags, point);
}
