
// 2.1实验1View.h : CMy21实验1View 类的接口
//

#pragma once


class CMy21实验1View : public CView
{
protected: // 仅从序列化创建
	CMy21实验1View();
	DECLARE_DYNCREATE(CMy21实验1View)

// 特性
public:
	CMy21实验1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy21实验1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 2.1实验1View.cpp 中的调试版本
inline CMy21实验1Doc* CMy21实验1View::GetDocument() const
   { return reinterpret_cast<CMy21实验1Doc*>(m_pDocument); }
#endif

