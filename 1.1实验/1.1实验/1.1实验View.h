
// 1.1ʵ��View.h : CMy11ʵ��View ��Ľӿ�
//

#pragma once


class CMy11ʵ��View : public CView
{
protected: // �������л�����
	CMy11ʵ��View();
	DECLARE_DYNCREATE(CMy11ʵ��View)

// ����
public:
	CMy11ʵ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy11ʵ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 1.1ʵ��View.cpp �еĵ��԰汾
inline CMy11ʵ��Doc* CMy11ʵ��View::GetDocument() const
   { return reinterpret_cast<CMy11ʵ��Doc*>(m_pDocument); }
#endif

