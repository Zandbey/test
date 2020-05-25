
// 4.1例子(6)View.h : CMy41例子6View 类的接口
//

#pragma once


class CMy41例子6View : public CView
{
protected: // 仅从序列化创建
	CMy41例子6View();
	DECLARE_DYNCREATE(CMy41例子6View)

// 特性
public:
	CMy41例子6Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy41例子6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 4.1例子(6)View.cpp 中的调试版本
inline CMy41例子6Doc* CMy41例子6View::GetDocument() const
   { return reinterpret_cast<CMy41例子6Doc*>(m_pDocument); }
#endif

