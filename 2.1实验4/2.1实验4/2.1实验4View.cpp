
// 2.1ʵ��4View.cpp : CMy21ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2.1ʵ��4.h"
#endif

#include "2.1ʵ��4Doc.h"
#include "2.1ʵ��4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy21ʵ��4View

IMPLEMENT_DYNCREATE(CMy21ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy21ʵ��4View, CView)
END_MESSAGE_MAP()

// CMy21ʵ��4View ����/����

CMy21ʵ��4View::CMy21ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy21ʵ��4View::~CMy21ʵ��4View()
{
}

BOOL CMy21ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy21ʵ��4View ����

void CMy21ʵ��4View::OnDraw(CDC* pDC)
{
	CMy21ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;

	this->GetClientRect(cr);

	int color = RGB(0, 250, 0);

	CBrush newBrush(color);

	CBrush *oldBrush = pDC->SelectObject(&newBrush);

	pDC->Ellipse(cr);

	pDC->SelectObject(oldBrush);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy21ʵ��4View ���

#ifdef _DEBUG
void CMy21ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy21ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy21ʵ��4Doc* CMy21ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy21ʵ��4Doc)));
	return (CMy21ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy21ʵ��4View ��Ϣ�������
