
// 3.2ʵ��3View.h : CMy32ʵ��3View ��Ľӿ�
//

#pragma once


class CMy32ʵ��3View : public CView
{
protected: // �������л�����
	CMy32ʵ��3View();
	DECLARE_DYNCREATE(CMy32ʵ��3View)

// ����
public:
	CMy32ʵ��3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy32ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 3.2ʵ��3View.cpp �еĵ��԰汾
inline CMy32ʵ��3Doc* CMy32ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy32ʵ��3Doc*>(m_pDocument); }
#endif

