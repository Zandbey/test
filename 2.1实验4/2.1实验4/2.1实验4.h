
// 2.1ʵ��4.h : 2.1ʵ��4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy21ʵ��4App:
// �йش����ʵ�֣������ 2.1ʵ��4.cpp
//

class CMy21ʵ��4App : public CWinApp
{
public:
	CMy21ʵ��4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy21ʵ��4App theApp;
