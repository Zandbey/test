
// 4.1����(7)View.h : CMy41����7View ��Ľӿ�
//

#pragma once


class CMy41����7View : public CView
{
protected: // �������л�����
	CMy41����7View();
	DECLARE_DYNCREATE(CMy41����7View)

// ����
public:
	CMy41����7Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy41����7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 4.1����(7)View.cpp �еĵ��԰汾
inline CMy41����7Doc* CMy41����7View::GetDocument() const
   { return reinterpret_cast<CMy41����7Doc*>(m_pDocument); }
#endif

