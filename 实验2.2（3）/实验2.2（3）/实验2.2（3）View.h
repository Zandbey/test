
// ʵ��2.2��3��View.h : Cʵ��22��3��View ��Ľӿ�
//

#pragma once


class Cʵ��22��3��View : public CView
{
protected: // �������л�����
	Cʵ��22��3��View();
	DECLARE_DYNCREATE(Cʵ��22��3��View)

// ����
public:
	Cʵ��22��3��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��22��3��View();
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

#ifndef _DEBUG  // ʵ��2.2��3��View.cpp �еĵ��԰汾
inline Cʵ��22��3��Doc* Cʵ��22��3��View::GetDocument() const
   { return reinterpret_cast<Cʵ��22��3��Doc*>(m_pDocument); }
#endif

