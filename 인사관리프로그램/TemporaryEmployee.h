#ifndef __TEMPORARY_EMPLOYEE_
#define __TEMPORARY_EMPLOYEE_

#include "Employee.h"

class TemporaryEmployee : Employee
{
private:
	int TimeWork;	//�ñ�
public:
	int GetMoney() const;
};

#endif // !__TEMPORARY_EMPLOYEE_
