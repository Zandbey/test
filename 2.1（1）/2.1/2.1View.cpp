
// 2.1View.cpp : CMy21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2.1.h"
#endif

#include "2.1Doc.h"
#include "2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy21View

IMPLEMENT_DYNCREATE(CMy21View, CView)

BEGIN_MESSAGE_MAP(CMy21View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy21View ����/����

CMy21View::CMy21View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy21View::~CMy21View()
{
}

BOOL CMy21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy21View ����

void CMy21View::OnDraw(CDC* pDC)
{
	CMy21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	CString s;
	s.Format(_T("%d"),pDoc->a);
	pDC->TextOutW(100, 100, s);

}


// CMy21View ���

#ifdef _DEBUG
void CMy21View::AssertValid() const
{
	CView::AssertValid();
}

void CMy21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy21Doc* CMy21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy21Doc)));
	return (CMy21Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy21View ��Ϣ�������


void CMy21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
}


void CMy21View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonUp(nFlags, point);
}
