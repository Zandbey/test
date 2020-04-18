
// 实验2.2（2）View.h : C实验22（2）View 类的接口
//

#pragma once


class C实验22（2）View : public CView
{
protected: // 仅从序列化创建
	C实验22（2）View();
	DECLARE_DYNCREATE(C实验22（2）View)

// 特性
public:
	C实验22（2）Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C实验22（2）View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 实验2.2（2）View.cpp 中的调试版本
inline C实验22（2）Doc* C实验22（2）View::GetDocument() const
   { return reinterpret_cast<C实验22（2）Doc*>(m_pDocument); }
#endif

