#include "TemporaryEmployee.h"


TemporaryEmployee::TemporaryEmployee(string strName, string strGender, string strBirth, string strPhone,
	string strRank, string strContract, int nTimeWork) 
	: Employee(strName,strGender,strBirth,strPhone,strRank,strContract), m_nTimeWork(nTimeWork)
{

}

void TemporaryEmployee::ShowEmpInfo() const
{
	cout << GetName() << '\t' << GetGender() << '\t' << GetBirth()
		<< '\t' << GetPhone() << '\t' << GetRank() << '\t' << GetContract()
		<< '\t' << '\t' << GetTimeWork() << endl;
}