
// ʵ��2.2��1).h : ʵ��2.2��1) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��22��1App:
// �йش����ʵ�֣������ ʵ��2.2��1).cpp
//

class Cʵ��22��1App : public CWinApp
{
public:
	Cʵ��22��1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��22��1App theApp;
