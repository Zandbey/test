
// 4.1����(6)View.cpp : CMy41����6View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.1����(6).h"
#endif

#include "4.1����(6)Doc.h"
#include "4.1����(6)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy41����6View

IMPLEMENT_DYNCREATE(CMy41����6View, CView)

BEGIN_MESSAGE_MAP(CMy41����6View, CView)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMy41����6View ����/����

CMy41����6View::CMy41����6View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy41����6View::~CMy41����6View()
{
}

BOOL CMy41����6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy41����6View ����

void CMy41����6View::OnDraw(CDC* pDC)
{
	CMy41����6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->a);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy41����6View ���

#ifdef _DEBUG
void CMy41����6View::AssertValid() const
{
	CView::AssertValid();
}

void CMy41����6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy41����6Doc* CMy41����6View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy41����6Doc)));
	return (CMy41����6Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy41����6View ��Ϣ�������


void CMy41����6View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy41����6Doc* pDoc = GetDocument();
	CRect b;
	GetClientRect(&b);
	switch (nChar)
	{
	case 'L':
		if (pDoc->a.left>0)
		{
			pDoc->a.left -= 10;
			pDoc->a.right -= 10;

		}
	default:
		break;
	case 'R':
if (pDoc->a.right<=(b.right-b.left))
{
	pDoc->a.left += 10;
	pDoc->a.right += 10;
	
}
break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
