
// MFC4.14View.h : CMFC414View ��Ľӿ�
//

#pragma once


class CMFC414View : public CView
{
protected: // �������л�����
	CMFC414View();
	DECLARE_DYNCREATE(CMFC414View)

// ����
public:
	CMFC414Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC414View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC4.14View.cpp �еĵ��԰汾
inline CMFC414Doc* CMFC414View::GetDocument() const
   { return reinterpret_cast<CMFC414Doc*>(m_pDocument); }
#endif

