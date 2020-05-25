
// 4.1����(5)View.cpp : CMy41����5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.1����(5).h"
#endif

#include "4.1����(5)Doc.h"
#include "4.1����(5)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41����5View

IMPLEMENT_DYNCREATE(CMy41����5View, CView)

BEGIN_MESSAGE_MAP(CMy41����5View, CView)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMy41����5View ����/����

CMy41����5View::CMy41����5View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy41����5View::~CMy41����5View()
{
}

BOOL CMy41����5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy41����5View ����

void CMy41����5View::OnDraw(CDC* pDC)
{
	CMy41����5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->a);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy41����5View ���

#ifdef _DEBUG
void CMy41����5View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41����5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41����5Doc* CMy41����5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41����5Doc)));
	return (CMy41����5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41����5View ��Ϣ�������


void CMy41����5View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy41����5Doc* pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->a.left>0)
		{
			pDoc->a.left -= 5;
			pDoc->a.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->a.right<=(clientRec.right-clientRec.left))
		{
			pDoc->a.left += 5;
			pDoc->a.right += 5;
			
		}
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
