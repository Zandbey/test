
// 4.1����(6)View.h : CMy41����6View ��Ľӿ�
//

#pragma once


class CMy41����6View : public CView
{
protected: // �������л�����
	CMy41����6View();
	DECLARE_DYNCREATE(CMy41����6View)

// ����
public:
	CMy41����6Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy41����6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 4.1����(6)View.cpp �еĵ��԰汾
inline CMy41����6Doc* CMy41����6View::GetDocument() const
   { return reinterpret_cast<CMy41����6Doc*>(m_pDocument); }
#endif

