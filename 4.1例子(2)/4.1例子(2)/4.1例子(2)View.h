
// 4.1����(2)View.h : CMy41����2View ��Ľӿ�
//

#pragma once


class CMy41����2View : public CView
{
protected: // �������л�����
	CMy41����2View();
	DECLARE_DYNCREATE(CMy41����2View)

// ����
public:
	CMy41����2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy41����2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 4.1����(2)View.cpp �еĵ��԰汾
inline CMy41����2Doc* CMy41����2View::GetDocument() const
   { return reinterpret_cast<CMy41����2Doc*>(m_pDocument); }
#endif

