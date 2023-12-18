// checkimformation.cpp: 实现文件
//

#include "pch.h"
#include "MFCstudent.h"
#include "checkimformation.h"
#include "afxdialogex.h"


// checkimformation 对话框

IMPLEMENT_DYNAMIC(checkimformation, CDialogEx)

checkimformation::checkimformation(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

checkimformation::~checkimformation()
{
}

void checkimformation::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, name1);
	DDX_Control(pDX, IDC_EDIT2, id1);
	DDX_Control(pDX, IDC_EDIT4, imfo);
}


BEGIN_MESSAGE_MAP(checkimformation, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &checkimformation::OnBnClickedButton1)
END_MESSAGE_MAP()


// checkimformation 消息处理程序


void checkimformation::OnBnClickedButton1()
{
	CString s1,s2;
	name1.GetWindowTextA(s1);
	id1.GetWindowTextA(s2);
	int i,flag=0;
	for (i = 0;i < my_students.size();i++)
	{
		if (my_students[i].name == s1 && my_students[i].id == s2) { flag = 1; break; }
	}
	if (flag == 1)
	{
		CString n = my_students[i].name, m = my_students[i].major, iid = my_students[i].id, g = my_students[i].gender, sum;
		sum = n + "	  " + g + "   " + iid + "   " + m;
		imfo.SetWindowTextA(sum);
	}
	else MessageBox("查无此人！");
	
	// TODO: 在此添加控件通知处理程序代码
}
