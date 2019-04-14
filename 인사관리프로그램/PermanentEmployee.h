#ifndef __PERMANENT_EMPLOYEE_H_
#define __PERMANENT_EMPLOYEE_H_

#include "Employee.h"

class PermanentEmployee : Employee
{
private:
	int m_nSalary;	//ПљБо
public:
	PermanentEmployee(string strName, string strGender, string strBirth, string strPhone,
		string strRank, string strContract, int nSalary);
	int GetSalary() const
	{
		return m_nSalary;
	}
	virtual void ShowEmpInfo() const;
};

#endif // !__PERMANENT_EMPLOYEE_H_
