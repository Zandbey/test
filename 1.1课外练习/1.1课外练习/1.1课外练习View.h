
// 1.1������ϰView.h : CMy11������ϰView ��Ľӿ�
//

#pragma once


class CMy11������ϰView : public CView
{
protected: // �������л�����
	CMy11������ϰView();
	DECLARE_DYNCREATE(CMy11������ϰView)

// ����
public:
	CMy11������ϰDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy11������ϰView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString d;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 1.1������ϰView.cpp �еĵ��԰汾
inline CMy11������ϰDoc* CMy11������ϰView::GetDocument() const
   { return reinterpret_cast<CMy11������ϰDoc*>(m_pDocument); }
#endif

