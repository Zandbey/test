
// 2.1ʵ��3View.cpp : CMy21ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2.1ʵ��3.h"
#endif

#include "2.1ʵ��3Doc.h"
#include "2.1ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy21ʵ��3View

IMPLEMENT_DYNCREATE(CMy21ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy21ʵ��3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy21ʵ��3View ����/����

CMy21ʵ��3View::CMy21ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy21ʵ��3View::~CMy21ʵ��3View()
{
}

BOOL CMy21ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy21ʵ��3View ����

void CMy21ʵ��3View::OnDraw(CDC* pDC)
{
	CMy21ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;

	this->GetClientRect(cr);

	pDC->Ellipse(cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy21ʵ��3View ���

#ifdef _DEBUG
void CMy21ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy21ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy21ʵ��3Doc* CMy21ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy21ʵ��3Doc)));
	return (CMy21ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy21ʵ��3View ��Ϣ�������


void CMy21ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
}
