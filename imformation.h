#pragma once

#include"function.h"
// imformation 对话框

class imformation : public CDialogEx
{
	DECLARE_DYNAMIC(imformation)

public:
	imformation(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~imformation();
	function function;
	int flag=0;
	static bool click;

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CEdit savepath;
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedRadio2();
	CEdit iname;
	CEdit iid;
	CEdit imajor;
	afx_msg void OnBnClickedRadio1();
	CButton nv;
	CButton nan;
	
};
