
// 2.1(2)View.h : CMy212View ��Ľӿ�
//

#pragma once


class CMy212View : public CView
{
protected: // �������л�����
	CMy212View();
	DECLARE_DYNCREATE(CMy212View)

// ����
public:
	CMy212Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy212View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2.1(2)View.cpp �еĵ��԰汾
inline CMy212Doc* CMy212View::GetDocument() const
   { return reinterpret_cast<CMy212Doc*>(m_pDocument); }
#endif

