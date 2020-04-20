
// ������������View.cpp : C������������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������������.h"
#endif

#include "������������Doc.h"
#include "������������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������������View

IMPLEMENT_DYNCREATE(C������������View, CView)

BEGIN_MESSAGE_MAP(C������������View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C������������View ����/����

C������������View::C������������View()
{
	// TODO: �ڴ˴���ӹ������

}

C������������View::~C������������View()
{
}

BOOL C������������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������������View ����

void C������������View::OnDraw(CDC* pDC)
{
	C������������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������������View ���

#ifdef _DEBUG
void C������������View::AssertValid() const
{
	CView::AssertValid();
}

void C������������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������������Doc* C������������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������������Doc)));
	return (C������������Doc*)m_pDocument;
}
#endif //_DEBUG


// C������������View ��Ϣ�������


void C������������View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	m_ptOld = point;
	CView::OnLButtonDown(nFlags, point);
}


void C������������View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CPen pen(PS_SOLID, 1, RGB(250, 0, 0));

	CPen *pOldPen = dc.SelectObject(&pen);
	//if (m_bGestureInited == TRUE)
	//{
		dc.MoveTo(m_ptOld);
		dc.LineTo(point);
		dc.LineTo(m_ptOld);
		m_ptOld = point;
	//}
	dc.SelectObject(pOldPen);
	CView::OnMouseMove(nFlags, point);
}
