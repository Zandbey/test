
// 4.1����(4).h : 4.1����(4) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy41����4App:
// �йش����ʵ�֣������ 4.1����(4).cpp
//

class CMy41����4App : public CWinApp
{
public:
	CMy41����4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy41����4App theApp;
