#include "Employee.h"

Employee::Employee()
{

}

Employee::Employee(string strName, string strGender, string strBirth, string strPhone, string strRank, string strContract) :
	m_strName(strName), m_strGender(strGender), m_strBirth(strBirth), m_strPhone(strPhone), m_strRank(strRank), m_strContract(strContract)
{

}

void Employee::ShowEmpInfo() const
{
	cout << GetName() << '\t' << GetGender() << '\t' << GetBirth() << '\t' << GetPhone() << '\t' << GetRank() << '\t' << GetContract() << endl;
}