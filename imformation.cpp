// imformation.cpp: 实现文件
//

#include "pch.h"
#include "MFCstudent.h"
#include "imformation.h"
#include "afxdialogex.h"
#include<fstream>
using namespace std;

// imformation 对话框

IMPLEMENT_DYNAMIC(imformation, CDialogEx)

imformation::imformation(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

imformation::~imformation()
{
}

void imformation::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT3, savepath);
	DDX_Control(pDX, IDC_EDIT1, iname);
	DDX_Control(pDX, IDC_EDIT2, iid);
	DDX_Control(pDX, IDC_EDIT4, imajor);
	DDX_Control(pDX, IDC_RADIO2, nv);
	DDX_Control(pDX, IDC_RADIO1, nan);
}


BEGIN_MESSAGE_MAP(imformation, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &imformation::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT3, &imformation::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_RADIO2, &imformation::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO1, &imformation::OnBnClickedRadio1)
END_MESSAGE_MAP()


// imformation 消息处理程序


void imformation::OnBnClickedButton1()
{
	CString gender;
	CString n;
	CString m;
	CString i;
	CFileDialog* pOpenFile;
	pOpenFile = new CFileDialog(FALSE, (".txt"), NULL, OFN_HIDEREADONLY, ("TXT(*.txt)|*.txt|DAT(*.dat)|*.dat||"));
	pOpenFile->DoModal();

	CString filepath;
	filepath = pOpenFile->GetPathName();
	savepath.SetWindowTextA(filepath);
	iname.GetWindowTextA(n);
	iid.GetWindowTextA(i);
	imajor.GetWindowTextA(m);

	
	if (nan.GetCheck()&&nv.GetCheck()==0)
	{
		gender = "男";
	}
	else if (nv.GetCheck() && nan.GetCheck() == 0)
	{
		gender = "女";
	}
	
	else gender = "";
	student fw(n, i, gender, m);
	if (n != "" && m != "" && i != "" && gender != "")
	{
		function.save(filepath, n, m, i, gender);
		my_students.push_back(fw);
		MessageBox("保存成功");
	}
	else MessageBox("请把信息输入完整");
	

	
	// TODO: 在此添加控件通知处理程序代码
}


void imformation::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void imformation::OnBnClickedRadio2()
{
	
	// TODO: 在此添加控件通知处理程序代码
}

bool imformation:: click = 0;
void imformation::OnBnClickedRadio1()
{
	
	

	 
	// TODO: 在此添加控件通知处理程序代码
}
