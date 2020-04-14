
// MFC4.14View.h : CMFC414View 类的接口
//

#pragma once


class CMFC414View : public CView
{
protected: // 仅从序列化创建
	CMFC414View();
	DECLARE_DYNCREATE(CMFC414View)

// 特性
public:
	CMFC414Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC414View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC4.14View.cpp 中的调试版本
inline CMFC414Doc* CMFC414View::GetDocument() const
   { return reinterpret_cast<CMFC414Doc*>(m_pDocument); }
#endif

