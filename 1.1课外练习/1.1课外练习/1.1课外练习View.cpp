
// 1.1������ϰView.cpp : CMy11������ϰView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "1.1������ϰ.h"
#endif

#include "1.1������ϰDoc.h"
#include "1.1������ϰView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11������ϰView

IMPLEMENT_DYNCREATE(CMy11������ϰView, CView)

BEGIN_MESSAGE_MAP(CMy11������ϰView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy11������ϰView ����/����

CMy11������ϰView::CMy11������ϰView()
{
	// TODO: �ڴ˴���ӹ������

}

CMy11������ϰView::~CMy11������ϰView()
{
}

BOOL CMy11������ϰView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy11������ϰView ����

void CMy11������ϰView::OnDraw(CDC* pDC)
{
	CMy11������ϰDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	d = _T("world");
	pDC->TextOutW(200, 200, d);
	pDC->TextOutW(150, 200, pDoc->s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy11������ϰView ���

#ifdef _DEBUG
void CMy11������ϰView::AssertValid() const
{
	CView::AssertValid();
}

void CMy11������ϰView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy11������ϰDoc* CMy11������ϰView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11������ϰDoc)));
	return (CMy11������ϰDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy11������ϰView ��Ϣ�������


void CMy11������ϰView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy11������ϰDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CString t;
	t = pDoc->s;
	t = t + d;
	dc.TextOutW(300, 300,t );
	CView::OnLButtonDown(nFlags, point);
}
