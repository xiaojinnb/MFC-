#pragma once


// checkimformation 对话框

class checkimformation : public CDialogEx
{
	DECLARE_DYNAMIC(checkimformation)

public:
	checkimformation(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~checkimformation();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit name1;
	CEdit id1;
	function function;

	afx_msg void OnBnClickedButton1();
	CEdit imfo;
};
