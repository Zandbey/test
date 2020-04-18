
// 2.1(3)View.h : CMy213View 类的接口
//

#pragma once


class CMy213View : public CView
{
protected: // 仅从序列化创建
	CMy213View();
	DECLARE_DYNCREATE(CMy213View)

// 特性
public:
	CMy213Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy213View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2.1(3)View.cpp 中的调试版本
inline CMy213Doc* CMy213View::GetDocument() const
   { return reinterpret_cast<CMy213Doc*>(m_pDocument); }
#endif

