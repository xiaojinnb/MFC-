// deletestudent.cpp: 实现文件
//

#include "pch.h"
#include "MFCstudent.h"
#include "deletestudent.h"
#include "afxdialogex.h"


// deletestudent 对话框

IMPLEMENT_DYNAMIC(deletestudent, CDialogEx)

deletestudent::deletestudent(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG4, pParent)
{

}

deletestudent::~deletestudent()
{
}

void deletestudent::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, name1);
	DDX_Control(pDX, IDC_EDIT2, id1);
}


BEGIN_MESSAGE_MAP(deletestudent, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &deletestudent::OnBnClickedButton1)
END_MESSAGE_MAP()


// deletestudent 消息处理程序


void deletestudent::OnBnClickedButton1()
{
	CString s1, s2;
	name1.GetWindowTextA(s1);
	id1.GetWindowTextA(s2);
	int i, flag = 0;
	for (i = 0;i < my_students.size();i++)
	{
		if (my_students[i].name == s1 && my_students[i].id == s2) { flag = 1; break; }
	}

	if (flag == 1)
	{
		my_students.erase(my_students.begin() + i);
		MessageBox("删除成功");
		function.clearFileContent("D:\\学生管理.txt");
		for (int j = 0;j < my_students.size();j++)
		{
			function.save("D:\\学生管理.txt", my_students[j].name, my_students[j].major, my_students[j].id,  my_students[j].gender);
		}
	}
	else MessageBox("查无此人，无法删除");
	// TODO: 在此添加控件通知处理程序代码
}
