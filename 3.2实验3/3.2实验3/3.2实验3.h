
// 3.2ʵ��3.h : 3.2ʵ��3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy32ʵ��3App:
// �йش����ʵ�֣������ 3.2ʵ��3.cpp
//

class CMy32ʵ��3App : public CWinApp
{
public:
	CMy32ʵ��3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy32ʵ��3App theApp;
