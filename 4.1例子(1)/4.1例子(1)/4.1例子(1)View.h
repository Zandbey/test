
// 4.1����(1)View.h : CMy41����1View ��Ľӿ�
//

#pragma once


class CMy41����1View : public CView
{
protected: // �������л�����
	CMy41����1View();
	DECLARE_DYNCREATE(CMy41����1View)

// ����
public:
	CMy41����1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy41����1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 4.1����(1)View.cpp �еĵ��԰汾
inline CMy41����1Doc* CMy41����1View::GetDocument() const
   { return reinterpret_cast<CMy41����1Doc*>(m_pDocument); }
#endif

