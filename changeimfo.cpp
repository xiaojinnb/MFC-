// changeimfo.cpp: 实现文件
//

#include "pch.h"
#include "MFCstudent.h"
#include "changeimfo.h"
#include "afxdialogex.h"


// changeimfo 对话框

IMPLEMENT_DYNAMIC(changeimfo, CDialogEx)

changeimfo::changeimfo(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG5, pParent)
{

}

changeimfo::~changeimfo()
{
}

void changeimfo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, name1);
	DDX_Control(pDX, IDC_EDIT2, id1);
	DDX_Control(pDX, IDC_EDIT4, name2);
	DDX_Control(pDX, IDC_EDIT3, id2);
	DDX_Control(pDX, IDC_RADIO2, nan);
	DDX_Control(pDX, IDC_RADIO3, nv);
	DDX_Control(pDX, IDC_EDIT5, mmm);
}


BEGIN_MESSAGE_MAP(changeimfo, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &changeimfo::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_RADIO2, &changeimfo::OnBnClickedRadio2)
	ON_EN_CHANGE(IDC_EDIT3, &changeimfo::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON2, &changeimfo::OnBnClickedButton2)
END_MESSAGE_MAP()


// changeimfo 消息处理程序


void changeimfo::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void changeimfo::OnBnClickedRadio2()
{
	// TODO: 在此添加控件通知处理程序代码
}


void changeimfo::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void changeimfo::OnBnClickedButton2()
{
	CString s1, s2,gender;
	name1.GetWindowTextA(s1);
	id1.GetWindowTextA(s2);
	int i, flag = 0;
	for (i = 0;i < my_students.size();i++)
	{
		if (my_students[i].name == s1 && my_students[i].id == s2) { flag = 1; break; }
	}
	if (flag == 1)
	{
		name2.GetWindowTextA(my_students[i].name);
			id2.GetWindowTextA(my_students[i].id);
			mmm.GetWindowTextA(my_students[i].major);
			if (nan.GetCheck() && nv.GetCheck() == 0)
			{
				gender = "男";
			}
			else if (nv.GetCheck() && nan.GetCheck() == 0)
			{
				gender = "女";
			}
			else gender = "";
			my_students[i].gender = gender;
	}
	if (my_students[i].name != "", my_students[i].major != "", my_students[i].id != "", my_students[i].gender != "")
	{
		MessageBox("修改成功");
		function.clearFileContent("D:\\学生管理.txt");
		for (int j = 0;j < my_students.size();j++)
		{
			function.save("D:\\学生管理.txt", my_students[j].name, my_students[j].major, my_students[j].id, my_students[j].gender);
		}
	}
	else
	{
		MessageBox("信息有空缺");
	}

	// TODO: 在此添加控件通知处理程序代码
}
