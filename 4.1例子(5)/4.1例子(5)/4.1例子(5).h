
// 4.1����(5).h : 4.1����(5) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy41����5App:
// �йش����ʵ�֣������ 4.1����(5).cpp
//

class CMy41����5App : public CWinAppEx
{
public:
	CMy41����5App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy41����5App theApp;
