// start.cpp: 实现文件
//

#include "pch.h"
#include "MFCstudent.h"
#include "start.h"
#include "afxdialogex.h"
#include"imformation.h"
#include"checkimformation.h"


// start 对话框

IMPLEMENT_DYNAMIC(start, CDialogEx)

start::start(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

start::~start()
{
}

void start::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(start, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &start::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &start::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &start::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON3, &start::OnBnClickedButton3)
END_MESSAGE_MAP()


// start 消息处理程序


void start::OnBnClickedButton1()
{
	imformation student_imformation;
	student_imformation.DoModal();	
	// TODO: 在此添加控件通知处理程序代码
}


void start::OnBnClickedButton2()
{
	checkimformation a;
	a.DoModal();
	
	// TODO: 在此添加控件通知处理程序代码
}
#include"deletestudent.h"

void start::OnBnClickedButton4()
{
	deletestudent a;
	a.DoModal();

	// TODO: 在此添加控件通知处理程序代码
}

#include"changeimfo.h"
void start::OnBnClickedButton3()
{
	changeimfo a;
	a.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}
