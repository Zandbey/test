
// 1.1实验View.h : CMy11实验View 类的接口
//

#pragma once


class CMy11实验View : public CView
{
protected: // 仅从序列化创建
	CMy11实验View();
	DECLARE_DYNCREATE(CMy11实验View)

// 特性
public:
	CMy11实验Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy11实验View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 1.1实验View.cpp 中的调试版本
inline CMy11实验Doc* CMy11实验View::GetDocument() const
   { return reinterpret_cast<CMy11实验Doc*>(m_pDocument); }
#endif

