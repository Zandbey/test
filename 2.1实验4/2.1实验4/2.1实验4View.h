
// 2.1实验4View.h : CMy21实验4View 类的接口
//

#pragma once


class CMy21实验4View : public CView
{
protected: // 仅从序列化创建
	CMy21实验4View();
	DECLARE_DYNCREATE(CMy21实验4View)

// 特性
public:
	CMy21实验4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy21实验4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2.1实验4View.cpp 中的调试版本
inline CMy21实验4Doc* CMy21实验4View::GetDocument() const
   { return reinterpret_cast<CMy21实验4Doc*>(m_pDocument); }
#endif

