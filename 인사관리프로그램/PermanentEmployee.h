#ifndef __PERMANENT_EMPLOYEE_H_
#define __PERMANENT_EMPLOYEE_H_

#include "Employee.h"

class PermanentEmployee : Employee
{
private:
	int Salary;	//����
public:
	int GetMoney() const;
};

#endif // !__PERMANENT_EMPLOYEE_H_
