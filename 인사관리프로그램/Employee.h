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
	string m_strName;	//�̸�
	string m_strGender;	//����
	string m_strBirth;	//�������
	string m_strPhone;	//����ó
	string m_strRank;	//����
	string m_strContract;//�������
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

