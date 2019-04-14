#ifndef __EMPLOYEE_H_
#define __EMPLOYEE_H_

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

class Employee
{
private:
	string m_strName;	//이름
	string m_strGender;	//성별
	string m_strBirth;	//생년월일
	string m_strPhone;	//연락처
	string m_strRank;	//직급
	string m_strContract;//계약형태
public:
	Employee();
	Employee(string strName, string strGender, string strBirth, string strPhone, string strRank, string strContract);
	string GetName() const
	{
		return m_strName;
	}
	string GetGender() const
	{
		return m_strGender;
	}
	string GetBirth() const
	{
		return m_strBirth;
	}
	string GetPhone() const
	{
		return m_strPhone;
	}
	string GetRank() const
	{
		return m_strRank;
	}
	string GetContract() const
	{
		return m_strContract;
	}

	virtual void ShowEmpInfo() const;
};




#endif // !__EMPLOYEE_H_

