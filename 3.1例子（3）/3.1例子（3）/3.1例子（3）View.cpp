
// 3.1���ӣ�3��View.cpp : CMy31���ӣ�3��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3.1���ӣ�3��.h"
#endif

#include "3.1���ӣ�3��Doc.h"
#include "3.1���ӣ�3��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy31���ӣ�3��View

IMPLEMENT_DYNCREATE(CMy31���ӣ�3��View, CView)

BEGIN_MESSAGE_MAP(CMy31���ӣ�3��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy31���ӣ�3��View ����/����

CMy31���ӣ�3��View::CMy31���ӣ�3��View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);

}

CMy31���ӣ�3��View::~CMy31���ӣ�3��View()
{
}

BOOL CMy31���ӣ�3��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy31���ӣ�3��View ����

void CMy31���ӣ�3��View::OnDraw(CDC* pDC)
{
	CMy31���ӣ�3��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//CClientDC dc(this)
		
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Rectangle(ca.GetAt(i));

}


// CMy31���ӣ�3��View ���

#ifdef _DEBUG
void CMy31���ӣ�3��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy31���ӣ�3��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy31���ӣ�3��Doc* CMy31���ӣ�3��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy31���ӣ�3��Doc)));
	return (CMy31���ӣ�3��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy31���ӣ�3��View ��Ϣ�������


void CMy31���ӣ�3��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 50 + 5;
	//CClientDC dc(this);
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
