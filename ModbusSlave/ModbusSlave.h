
#pragma once

#ifndef __AFXWIN_H__
	#error "Include 'pch.h' before including this file to generate PCH"
#endif

#include "resource.h"


class CModbusSlaveApp : public CWinApp
{
public:
	CModbusSlaveApp();


public:
	virtual BOOL InitInstance();


	DECLARE_MESSAGE_MAP()
};

extern CModbusSlaveApp theApp;
