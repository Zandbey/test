
// 4.1例子(4)View.h : CMy41例子4View 类的接口
//

#pragma once


class CMy41例子4View : public CView
{
protected: // 仅从序列化创建
	CMy41例子4View();
	DECLARE_DYNCREATE(CMy41例子4View)

// 特性
public:
	CMy41例子4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy41例子4View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 4.1例子(4)View.cpp 中的调试版本
inline CMy41例子4Doc* CMy41例子4View::GetDocument() const
   { return reinterpret_cast<CMy41例子4Doc*>(m_pDocument); }
#endif

