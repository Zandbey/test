
// 3.1���ӣ�2��.h : 3.1���ӣ�2�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy31���ӣ�2��App:
// �йش����ʵ�֣������ 3.1���ӣ�2��.cpp
//

class CMy31���ӣ�2��App : public CWinApp
{
public:
	CMy31���ӣ�2��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy31���ӣ�2��App theApp;
