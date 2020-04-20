
// 绘制扇形线条View.h : C绘制扇形线条View 类的接口
//

#pragma once


class C绘制扇形线条View : public CView
{
protected: // 仅从序列化创建
	C绘制扇形线条View();
	DECLARE_DYNCREATE(C绘制扇形线条View)

// 特性
public:
	C绘制扇形线条Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C绘制扇形线条View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CPoint m_ptOld;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 绘制扇形线条View.cpp 中的调试版本
inline C绘制扇形线条Doc* C绘制扇形线条View::GetDocument() const
   { return reinterpret_cast<C绘制扇形线条Doc*>(m_pDocument); }
#endif

