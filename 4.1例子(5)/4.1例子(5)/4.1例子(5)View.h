
// 4.1����(5)View.h : CMy41����5View ��Ľӿ�
//

#pragma once


class CMy41����5View : public CView
{
protected: // �������л�����
	CMy41����5View();
	DECLARE_DYNCREATE(CMy41����5View)

// ����
public:
	CMy41����5Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy41����5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 4.1����(5)View.cpp �еĵ��԰汾
inline CMy41����5Doc* CMy41����5View::GetDocument() const
   { return reinterpret_cast<CMy41����5Doc*>(m_pDocument); }
#endif

