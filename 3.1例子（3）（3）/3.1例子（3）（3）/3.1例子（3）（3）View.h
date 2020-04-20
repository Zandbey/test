
// 3.1例子（3）（3）View.h : CMy31例子（3）（3）View 类的接口
//

#pragma once


class CMy31例子（3）（3）View : public CView
{
protected: // 仅从序列化创建
	CMy31例子（3）（3）View();
	DECLARE_DYNCREATE(CMy31例子（3）（3）View)

// 特性
public:
	CMy31例子（3）（3）Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy31例子（3）（3）View();
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

#ifndef _DEBUG  // 3.1例子（3）（3）View.cpp 中的调试版本
inline CMy31例子（3）（3）Doc* CMy31例子（3）（3）View::GetDocument() const
   { return reinterpret_cast<CMy31例子（3）（3）Doc*>(m_pDocument); }
#endif

