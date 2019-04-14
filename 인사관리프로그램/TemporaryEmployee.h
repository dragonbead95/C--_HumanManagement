#ifndef __TEMPORARY_EMPLOYEE_
#define __TEMPORARY_EMPLOYEE_

#include "Employee.h"

class TemporaryEmployee : Employee
{
private:
	int m_nTimeWork;	//½Ã±Þ
public:
	TemporaryEmployee(string strName, string strGender, string strBirth, string strPhone,
		string strRank, string strContract, int nTimeWork);
	int GetTimeWork() const
	{
		return m_nTimeWork;
	}
	virtual void ShowEmpInfo() const;

};

#endif // !__TEMPORARY_EMPLOYEE_
