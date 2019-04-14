#ifndef __EMPLOYEE_HANDLER_H_
#define __EMPLOYEE_HANDLER_H_


#include "PermanentEmployee.h"
#include "TemporaryEmployee.h"
class EmployeeHandler
{
private:
	Employee * empList[50];
	int empNum;
public:
	EmployeeHandler();
	~EmployeeHandler();
	void Employee_Add();
	void Employee_Search();
	void Employee_Update();
	void Employee_Delete();
};

#endif // !__EMPLOYEE_HANDLER_H_
