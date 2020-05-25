
// 4.1例子(5)View.h : CMy41例子5View 类的接口
//

#pragma once


class CMy41例子5View : public CView
{
protected: // 仅从序列化创建
	CMy41例子5View();
	DECLARE_DYNCREATE(CMy41例子5View)

// 特性
public:
	CMy41例子5Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy41例子5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 4.1例子(5)View.cpp 中的调试版本
inline CMy41例子5Doc* CMy41例子5View::GetDocument() const
   { return reinterpret_cast<CMy41例子5Doc*>(m_pDocument); }
#endif

