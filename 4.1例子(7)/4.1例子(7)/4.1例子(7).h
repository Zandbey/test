
// 4.1例子(7).h : 4.1例子(7) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy41例子7App:
// 有关此类的实现，请参阅 4.1例子(7).cpp
//

class CMy41例子7App : public CWinAppEx
{
public:
	CMy41例子7App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy41例子7App theApp;
