
// 2.1���ӣ�4��View.cpp : CMy21���ӣ�4��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2.1���ӣ�4��.h"
#endif

#include "2.1���ӣ�4��Doc.h"
#include "2.1���ӣ�4��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy21���ӣ�4��View

IMPLEMENT_DYNCREATE(CMy21���ӣ�4��View, CView)

BEGIN_MESSAGE_MAP(CMy21���ӣ�4��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy21���ӣ�4��View ����/����

CMy21���ӣ�4��View::CMy21���ӣ�4��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy21���ӣ�4��View::~CMy21���ӣ�4��View()
{
}

BOOL CMy21���ӣ�4��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy21���ӣ�4��View ����

void CMy21���ӣ�4��View::OnDraw(CDC* /*pDC*/)
{
	CMy21���ӣ�4��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy21���ӣ�4��View ���

#ifdef _DEBUG
void CMy21���ӣ�4��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy21���ӣ�4��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy21���ӣ�4��Doc* CMy21���ӣ�4��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy21���ӣ�4��Doc)));
	return (CMy21���ӣ�4��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy21���ӣ�4��View ��Ϣ�������


void CMy21���ӣ�4��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.MoveTo(0, (rc.bottom + rc.top) / 2);
	dc.LineTo((rc.right + rc.left) / 2, 0);
	dc.LineTo(rc.right, (rc.bottom + rc.top) / 2);
	dc.LineTo((rc.right + rc.left) / 2, rc.bottom);
	dc.LineTo(0, (rc.bottom + rc.top) / 2);
	CView::OnLButtonDown(nFlags, point);
}
