#include "pch.h"
#include "function.h"



void function::save(CString f, CString name1, CString major1, CString id1, CString gender1)
{
    ofstream file(f, std::ios::app);
    if (file.is_open())
    {
       
        CT2CA pszConvertedAnsiString1(name1);
        std::string n(pszConvertedAnsiString1);
        CT2CA pszConvertedAnsiString2(major1);
        std::string m(pszConvertedAnsiString2);
        CT2CA pszConvertedAnsiString3(id1);
        std::string id(pszConvertedAnsiString3);
        CT2CA pszConvertedAnsiString4(gender1);
        std::string g(pszConvertedAnsiString4);

        file << "姓名：" << n << "\n";
        file << "性别 " << g << "\n";
        file << "学号 " << id << "\n";
        file << "专业 " << m << "\n";
        
        file << "\n";
        file.close();
    }

}

void function::clearFileContent(const std::string& filename)
{
    
        std::ofstream ofs;
        ofs.open(filename, std::ofstream::out | std::ofstream::trunc);
        ofs.close();
    
}
