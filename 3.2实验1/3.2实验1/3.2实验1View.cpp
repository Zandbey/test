
// 3.2ʵ��1View.cpp : CMy32ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3.2ʵ��1.h"
#endif

#include "3.2ʵ��1Doc.h"
#include "3.2ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy32ʵ��1View

IMPLEMENT_DYNCREATE(CMy32ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy32ʵ��1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy32ʵ��1View ����/����

CMy32ʵ��1View::CMy32ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy32ʵ��1View::~CMy32ʵ��1View()
{
}

BOOL CMy32ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy32ʵ��1View ����

void CMy32ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy32ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy32ʵ��1View ���

#ifdef _DEBUG
void CMy32ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy32ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy32ʵ��1Doc* CMy32ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy32ʵ��1Doc)));
	return (CMy32ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy32ʵ��1View ��Ϣ�������


void CMy32ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString a;
	a = _T("������ڱ�����");
	dc.TextOutW(100, 100, a);
	CView::OnLButtonDown(nFlags, point);
	CView::OnLButtonDown(nFlags, point);
}


void CMy32ʵ��1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s;
	s = _T("�������̧��");
	dc.TextOutW(200, 200, s);
	CView::OnLButtonUp(nFlags, point);
}
