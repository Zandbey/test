
// 2.1View.h : CMy21View ��Ľӿ�
//

#pragma once


class CMy21View : public CView
{
protected: // �������л�����
	CMy21View();
	DECLARE_DYNCREATE(CMy21View)

// ����
public:
	CMy21Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy21View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 2.1View.cpp �еĵ��԰汾
inline CMy21Doc* CMy21View::GetDocument() const
   { return reinterpret_cast<CMy21Doc*>(m_pDocument); }
#endif

