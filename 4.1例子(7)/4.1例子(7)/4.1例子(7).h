
// 4.1����(7).h : 4.1����(7) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy41����7App:
// �йش����ʵ�֣������ 4.1����(7).cpp
//

class CMy41����7App : public CWinAppEx
{
public:
	CMy41����7App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy41����7App theApp;
