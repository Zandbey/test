
// 2.1(3)View.h : CMy213View ��Ľӿ�
//

#pragma once


class CMy213View : public CView
{
protected: // �������л�����
	CMy213View();
	DECLARE_DYNCREATE(CMy213View)

// ����
public:
	CMy213Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy213View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2.1(3)View.cpp �еĵ��԰汾
inline CMy213Doc* CMy213View::GetDocument() const
   { return reinterpret_cast<CMy213Doc*>(m_pDocument); }
#endif

