
// 3.1ʵ��2View.cpp : CMy31ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3.1ʵ��2.h"
#endif

#include "3.1ʵ��2Doc.h"
#include "3.1ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy31ʵ��2View

IMPLEMENT_DYNCREATE(CMy31ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy31ʵ��2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy31ʵ��2View ����/����

CMy31ʵ��2View::CMy31ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);

}

CMy31ʵ��2View::~CMy31ʵ��2View()
{
}

BOOL CMy31ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy31ʵ��2View ����

void CMy31ʵ��2View::OnDraw(CDC* pDC)
{
	CMy31ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//Ellipse cr;
	for (int i = 0; i < ca.GetSize(); i++)
	{
	pDC->Ellipse(ca[i]);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy31ʵ��2View ���

#ifdef _DEBUG
void CMy31ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy31ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy31ʵ��2Doc* CMy31ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy31ʵ��2Doc)));
	return (CMy31ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy31ʵ��2View ��Ϣ�������


void CMy31ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int a = rand() % 50 + 5;
	int b = rand() % 30 + 3;
	CRect cr(point.x + a, point.y + b, point.x - a, point.y - b);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
