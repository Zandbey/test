
// 1.1ʵ�飨2��.h : 1.1ʵ�飨2�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy11ʵ�飨2��App:
// �йش����ʵ�֣������ 1.1ʵ�飨2��.cpp
//

class CMy11ʵ�飨2��App : public CWinApp
{
public:
	CMy11ʵ�飨2��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy11ʵ�飨2��App theApp;
