#include "PermanentEmployee.h"

PermanentEmployee::PermanentEmployee(string strName, string strGender, string strBirth, string strPhone,
	string strRank, string strContract, int nSalary) 
	: Employee(strName,strGender,strBirth,strPhone,strRank,strContract), m_nSalary(nSalary)
{

}

void PermanentEmployee::ShowEmpInfo() const
{
	cout << GetName() << '\t' << GetGender() << '\t' << GetBirth() 
		<< '\t' << GetPhone() << '\t' << GetRank() << '\t' << GetContract() 
		<<'\t'<<'\t'<<GetSalary()<< endl;
}