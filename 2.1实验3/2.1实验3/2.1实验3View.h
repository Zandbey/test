
// 2.1ʵ��3View.h : CMy21ʵ��3View ��Ľӿ�
//

#pragma once


class CMy21ʵ��3View : public CView
{
protected: // �������л�����
	CMy21ʵ��3View();
	DECLARE_DYNCREATE(CMy21ʵ��3View)

// ����
public:
	CMy21ʵ��3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy21ʵ��3View();
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

#ifndef _DEBUG  // 2.1ʵ��3View.cpp �еĵ��԰汾
inline CMy21ʵ��3Doc* CMy21ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy21ʵ��3Doc*>(m_pDocument); }
#endif

