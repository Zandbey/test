
// 2.1���ӣ�4��.h : 2.1���ӣ�4�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy21���ӣ�4��App:
// �йش����ʵ�֣������ 2.1���ӣ�4��.cpp
//

class CMy21���ӣ�4��App : public CWinApp
{
public:
	CMy21���ӣ�4��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy21���ӣ�4��App theApp;
