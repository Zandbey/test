
// 3.1ʵ��2View.h : CMy31ʵ��2View ��Ľӿ�
//

#pragma once


class CMy31ʵ��2View : public CView
{
protected: // �������л�����
	CMy31ʵ��2View();
	DECLARE_DYNCREATE(CMy31ʵ��2View)

// ����
public:
	CMy31ʵ��2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy31ʵ��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CArray<CRect, CRect&> ca;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 3.1ʵ��2View.cpp �еĵ��԰汾
inline CMy31ʵ��2Doc* CMy31ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy31ʵ��2Doc*>(m_pDocument); }
#endif

