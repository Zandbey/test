
// 1.1ʵ��.h : 1.1ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy11ʵ��App:
// �йش����ʵ�֣������ 1.1ʵ��.cpp
//

class CMy11ʵ��App : public CWinApp
{
public:
	CMy11ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy11ʵ��App theApp;
