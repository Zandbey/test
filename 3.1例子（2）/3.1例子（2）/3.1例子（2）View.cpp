
// 3.1���ӣ�2��View.cpp : CMy31���ӣ�2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3.1���ӣ�2��.h"
#endif

#include "3.1���ӣ�2��Doc.h"
#include "3.1���ӣ�2��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy31���ӣ�2��View

IMPLEMENT_DYNCREATE(CMy31���ӣ�2��View, CView)

BEGIN_MESSAGE_MAP(CMy31���ӣ�2��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy31���ӣ�2��View ����/����

CMy31���ӣ�2��View::CMy31���ӣ�2��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy31���ӣ�2��View::~CMy31���ӣ�2��View()
{
}

BOOL CMy31���ӣ�2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy31���ӣ�2��View ����

void CMy31���ӣ�2��View::OnDraw(CDC* /*pDC*/)
{
	CMy31���ӣ�2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy31���ӣ�2��View ���

#ifdef _DEBUG
void CMy31���ӣ�2��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy31���ӣ�2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy31���ӣ�2��Doc* CMy31���ӣ�2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy31���ӣ�2��Doc)));
	return (CMy31���ӣ�2��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy31���ӣ�2��View ��Ϣ�������


void CMy31���ӣ�2��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 50 + 5;
	CRect cr(point.x-r,point.y-r,point.x+r,point.y+r);
	CClientDC dc(this);
	dc.Rectangle(cr);
	CView::OnLButtonDown(nFlags, point);
}
