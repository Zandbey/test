
// 1.1课外练习View.h : CMy11课外练习View 类的接口
//

#pragma once


class CMy11课外练习View : public CView
{
protected: // 仅从序列化创建
	CMy11课外练习View();
	DECLARE_DYNCREATE(CMy11课外练习View)

// 特性
public:
	CMy11课外练习Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy11课外练习View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString d;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 1.1课外练习View.cpp 中的调试版本
inline CMy11课外练习Doc* CMy11课外练习View::GetDocument() const
   { return reinterpret_cast<CMy11课外练习Doc*>(m_pDocument); }
#endif

