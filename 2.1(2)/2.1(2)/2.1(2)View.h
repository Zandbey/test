
// 2.1(2)View.h : CMy212View 类的接口
//

#pragma once


class CMy212View : public CView
{
protected: // 仅从序列化创建
	CMy212View();
	DECLARE_DYNCREATE(CMy212View)

// 特性
public:
	CMy212Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy212View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2.1(2)View.cpp 中的调试版本
inline CMy212Doc* CMy212View::GetDocument() const
   { return reinterpret_cast<CMy212Doc*>(m_pDocument); }
#endif

