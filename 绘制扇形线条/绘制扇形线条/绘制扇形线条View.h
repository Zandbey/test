
// ������������View.h : C������������View ��Ľӿ�
//

#pragma once


class C������������View : public CView
{
protected: // �������л�����
	C������������View();
	DECLARE_DYNCREATE(C������������View)

// ����
public:
	C������������Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������������View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CPoint m_ptOld;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ������������View.cpp �еĵ��԰汾
inline C������������Doc* C������������View::GetDocument() const
   { return reinterpret_cast<C������������Doc*>(m_pDocument); }
#endif

