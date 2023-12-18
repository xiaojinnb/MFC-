#pragma once


// deletestudent 对话框

class deletestudent : public CDialogEx
{
	DECLARE_DYNAMIC(deletestudent)

public:
	deletestudent(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~deletestudent();
	function function;

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit name1;
	CEdit id1;
	afx_msg void OnBnClickedButton1();
};
