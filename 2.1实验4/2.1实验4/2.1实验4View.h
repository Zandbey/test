
// 2.1ʵ��4View.h : CMy21ʵ��4View ��Ľӿ�
//

#pragma once


class CMy21ʵ��4View : public CView
{
protected: // �������л�����
	CMy21ʵ��4View();
	DECLARE_DYNCREATE(CMy21ʵ��4View)

// ����
public:
	CMy21ʵ��4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy21ʵ��4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2.1ʵ��4View.cpp �еĵ��԰汾
inline CMy21ʵ��4Doc* CMy21ʵ��4View::GetDocument() const
   { return reinterpret_cast<CMy21ʵ��4Doc*>(m_pDocument); }
#endif

