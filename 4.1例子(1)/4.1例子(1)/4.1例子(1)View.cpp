
// 4.1����(1)View.cpp : CMy41����1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.1����(1).h"
#endif

#include "4.1����(1)Doc.h"
#include "4.1����(1)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41����1View

IMPLEMENT_DYNCREATE(CMy41����1View, CView)

BEGIN_MESSAGE_MAP(CMy41����1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy41����1View ����/����

CMy41����1View::CMy41����1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy41����1View::~CMy41����1View()
{
}

BOOL CMy41����1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy41����1View ����

void CMy41����1View::OnDraw(CDC* pDC)
{
	CMy41����1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	CClientDC dc(this);
	pDC->Rectangle(pDoc->cr);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy41����1View ���

#ifdef _DEBUG
void CMy41����1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41����1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41����1Doc* CMy41����1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41����1Doc)));
	return (CMy41����1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41����1View ��Ϣ�������


void CMy41����1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy41����1Doc* pDoc = GetDocument();
	if (nFlags&MK_SHIFT)
	{
		pDoc->cr.left = 100;
		pDoc->cr.top = 100;
		pDoc->cr.right = 350;
		pDoc->cr.bottom = 300;

	}
	else
	{
		pDoc->cr.left = point.x;
		pDoc->cr.top = point.y;
		pDoc->cr.right = point.x + 250;
		pDoc->cr.bottom = point.y + 200;
	}
	InvalidateRect(NULL, true);//ǿ���ػ�
	CView::OnLButtonDown(nFlags, point);
}
