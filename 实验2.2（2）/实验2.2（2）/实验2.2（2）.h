
// ʵ��2.2��2��.h : ʵ��2.2��2�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��22��2��App:
// �йش����ʵ�֣������ ʵ��2.2��2��.cpp
//

class Cʵ��22��2��App : public CWinApp
{
public:
	Cʵ��22��2��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��22��2��App theApp;
