
// ʵ��2.2��3��View.cpp : Cʵ��22��3��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��2.2��3��.h"
#endif

#include "ʵ��2.2��3��Doc.h"
#include "ʵ��2.2��3��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��22��3��View

IMPLEMENT_DYNCREATE(Cʵ��22��3��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��22��3��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cʵ��22��3��View ����/����

Cʵ��22��3��View::Cʵ��22��3��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��22��3��View::~Cʵ��22��3��View()
{
}

BOOL Cʵ��22��3��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��22��3��View ����

void Cʵ��22��3��View::OnDraw(CDC* pDC)
{
	Cʵ��22��3��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��22��3��View ���

#ifdef _DEBUG
void Cʵ��22��3��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��22��3��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��22��3��Doc* Cʵ��22��3��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��22��3��Doc)));
	return (Cʵ��22��3��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��22��3��View ��Ϣ�������

CString s;
void Cʵ��22��3��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��22��3��Doc* pDoc = GetDocument();
	
	s.Format(_T("%d"), pDoc->cout++);

	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��22��3��View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	dc.TextOutW(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}
