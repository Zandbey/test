
// 4.1����(3)View.h : CMy41����3View ��Ľӿ�
//

#pragma once


class CMy41����3View : public CView
{
protected: // �������л�����
	CMy41����3View();
	DECLARE_DYNCREATE(CMy41����3View)

// ����
public:
	CMy41����3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy41����3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 4.1����(3)View.cpp �еĵ��԰汾
inline CMy41����3Doc* CMy41����3View::GetDocument() const
   { return reinterpret_cast<CMy41����3Doc*>(m_pDocument); }
#endif

