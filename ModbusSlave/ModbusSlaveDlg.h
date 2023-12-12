#pragma once


class CModbusSlaveDlg : public CDialogEx
{
public:
	CModbusSlaveDlg(CWnd* pParent = nullptr);

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MODBUSSLAVE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);



protected:
	HICON m_hIcon;

	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CString m_light;
	int	m_iRegAddr;
	int	m_iRegValue;
	HANDLE handleCom;
public:
	afx_msg void OnBnClickedButton1();
private:
	CString m_ComName;
};
