
// 2.1ʵ��2View.cpp : CMy21ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2.1ʵ��2.h"
#endif

#include "2.1ʵ��2Doc.h"
#include "2.1ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy21ʵ��2View

IMPLEMENT_DYNCREATE(CMy21ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy21ʵ��2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy21ʵ��2View ����/����

CMy21ʵ��2View::CMy21ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);
}

CMy21ʵ��2View::~CMy21ʵ��2View()
{
}

BOOL CMy21ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy21ʵ��2View ����

void CMy21ʵ��2View::OnDraw(CDC* pDC)
{
	CMy21ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++) {

		pDC->Ellipse(ca[i]);

	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy21ʵ��2View ���

#ifdef _DEBUG
void CMy21ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy21ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy21ʵ��2Doc* CMy21ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy21ʵ��2Doc)));
	return (CMy21ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy21ʵ��2View ��Ϣ�������


void CMy21ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	int r = rand() % 30 + 10;

	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
