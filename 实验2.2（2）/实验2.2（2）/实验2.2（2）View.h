
// ʵ��2.2��2��View.h : Cʵ��22��2��View ��Ľӿ�
//

#pragma once


class Cʵ��22��2��View : public CView
{
protected: // �������л�����
	Cʵ��22��2��View();
	DECLARE_DYNCREATE(Cʵ��22��2��View)

// ����
public:
	Cʵ��22��2��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��22��2��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ʵ��2.2��2��View.cpp �еĵ��԰汾
inline Cʵ��22��2��Doc* Cʵ��22��2��View::GetDocument() const
   { return reinterpret_cast<Cʵ��22��2��Doc*>(m_pDocument); }
#endif

