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
	string Name;	//이름
	string Gender;	//성별
	string Birth;	//생년월일
	string Phone;	//연락처
	string Rank;	//직급
public:
	virtual int GetMoney() const;
};




#endif // !__EMPLOYEE_H_

