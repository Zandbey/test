
// 3.1���ӣ�3����3��View.h : CMy31���ӣ�3����3��View ��Ľӿ�
//

#pragma once


class CMy31���ӣ�3����3��View : public CView
{
protected: // �������л�����
	CMy31���ӣ�3����3��View();
	DECLARE_DYNCREATE(CMy31���ӣ�3����3��View)

// ����
public:
	CMy31���ӣ�3����3��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy31���ӣ�3����3��View();
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

#ifndef _DEBUG  // 3.1���ӣ�3����3��View.cpp �еĵ��԰汾
inline CMy31���ӣ�3����3��Doc* CMy31���ӣ�3����3��View::GetDocument() const
   { return reinterpret_cast<CMy31���ӣ�3����3��Doc*>(m_pDocument); }
#endif

