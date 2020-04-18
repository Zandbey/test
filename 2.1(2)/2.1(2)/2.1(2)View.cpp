
// 2.1(2)View.cpp : CMy212View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2.1(2).h"
#endif

#include "2.1(2)Doc.h"
#include "2.1(2)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy212View

IMPLEMENT_DYNCREATE(CMy212View, CView)

BEGIN_MESSAGE_MAP(CMy212View, CView)
END_MESSAGE_MAP()

// CMy212View ����/����

CMy212View::CMy212View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy212View::~CMy212View()
{
}

BOOL CMy212View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy212View ����

void CMy212View::OnDraw(CDC* pDC)
{
	CMy212Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int red = 0, green = 0, blue = 0;
	int width = 2;
	int row = 20;
	for (int s = 0; s < 8; s++)
	{
		int color = RGB(red, green, blue);
		CPen newPen(PS_SOLID, width, color);
		CPen*oldPen = pDC->SelectObject(&newPen);
		pDC->MoveTo(20, row);
		pDC->LineTo(300, row);
		pDC->SelectObject(oldPen);
		red += 32;
		green += 16;
		blue += 8;
		width += 2;
		row += 30;
	}
}


// CMy212View ���

#ifdef _DEBUG
void CMy212View::AssertValid() const
{
	CView::AssertValid();
}

void CMy212View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy212Doc* CMy212View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy212Doc)));
	return (CMy212Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy212View ��Ϣ�������
