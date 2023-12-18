#pragma once


// changeimfo 对话框

class changeimfo : public CDialogEx
{
	DECLARE_DYNAMIC(changeimfo)

public:
	changeimfo(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~changeimfo();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedRadio2();
	CEdit name1;
	CEdit id1;
	CEdit name2;
	afx_msg void OnEnChangeEdit3();
	CEdit id2;
	CButton nan;
	CButton nv;
	CEdit mmm;
	afx_msg void OnBnClickedButton2();
	function function;
};
