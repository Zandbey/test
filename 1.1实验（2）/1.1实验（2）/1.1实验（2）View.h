
// 1.1ʵ�飨2��View.h : CMy11ʵ�飨2��View ��Ľӿ�
//

#pragma once


class CMy11ʵ�飨2��View : public CView
{
protected: // �������л�����
	CMy11ʵ�飨2��View();
	DECLARE_DYNCREATE(CMy11ʵ�飨2��View)

// ����
public:
	CMy11ʵ�飨2��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy11ʵ�飨2��View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 1.1ʵ�飨2��View.cpp �еĵ��԰汾
inline CMy11ʵ�飨2��Doc* CMy11ʵ�飨2��View::GetDocument() const
   { return reinterpret_cast<CMy11ʵ�飨2��Doc*>(m_pDocument); }
#endif

