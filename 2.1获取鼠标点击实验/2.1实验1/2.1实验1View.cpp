
// 2.1ʵ��1View.cpp : CMy21ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2.1ʵ��1.h"
#endif

#include "2.1ʵ��1Doc.h"
#include "2.1ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy21ʵ��1View

IMPLEMENT_DYNCREATE(CMy21ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy21ʵ��1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy21ʵ��1View ����/����

CMy21ʵ��1View::CMy21ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy21ʵ��1View::~CMy21ʵ��1View()
{
}

BOOL CMy21ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy21ʵ��1View ����

void CMy21ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy21ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// CMy21ʵ��1View ���

#ifdef _DEBUG
void CMy21ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy21ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy21ʵ��1Doc* CMy21ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy21ʵ��1Doc)));
	return (CMy21ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy21ʵ��1View ��Ϣ�������


void CMy21ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s.Format(_T("���λ����(%d,%d)"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(100, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
