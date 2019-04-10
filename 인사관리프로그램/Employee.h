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
	string Name;	//�̸�
	string Gender;	//����
	string Birth;	//�������
	string Phone;	//����ó
	string Rank;	//����
public:
	virtual int GetMoney() const;
};




#endif // !__EMPLOYEE_H_

