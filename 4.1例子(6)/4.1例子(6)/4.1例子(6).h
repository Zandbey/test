
// 4.1����(6).h : 4.1����(6) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy41����6App:
// �йش����ʵ�֣������ 4.1����(6).cpp
//

class CMy41����6App : public CWinAppEx
{
public:
	CMy41����6App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy41����6App theApp;
