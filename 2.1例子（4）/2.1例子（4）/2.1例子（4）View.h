
// 2.1���ӣ�4��View.h : CMy21���ӣ�4��View ��Ľӿ�
//

#pragma once


class CMy21���ӣ�4��View : public CView
{
protected: // �������л�����
	CMy21���ӣ�4��View();
	DECLARE_DYNCREATE(CMy21���ӣ�4��View)

// ����
public:
	CMy21���ӣ�4��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy21���ӣ�4��View();
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

#ifndef _DEBUG  // 2.1���ӣ�4��View.cpp �еĵ��԰汾
inline CMy21���ӣ�4��Doc* CMy21���ӣ�4��View::GetDocument() const
   { return reinterpret_cast<CMy21���ӣ�4��Doc*>(m_pDocument); }
#endif

