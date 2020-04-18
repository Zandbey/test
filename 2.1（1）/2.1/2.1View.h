
// 2.1View.h : CMy21View 类的接口
//

#pragma once


class CMy21View : public CView
{
protected: // 仅从序列化创建
	CMy21View();
	DECLARE_DYNCREATE(CMy21View)

// 特性
public:
	CMy21Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy21View();
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
};

#ifndef _DEBUG  // 2.1View.cpp 中的调试版本
inline CMy21Doc* CMy21View::GetDocument() const
   { return reinterpret_cast<CMy21Doc*>(m_pDocument); }
#endif

