
// 1.1������ϰ.h : 1.1������ϰ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy11������ϰApp:
// �йش����ʵ�֣������ 1.1������ϰ.cpp
//

class CMy11������ϰApp : public CWinApp
{
public:
	CMy11������ϰApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy11������ϰApp theApp;
