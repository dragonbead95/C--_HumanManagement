#include "EmployeeHandler.h"
Employee * input();

EmployeeHandler::EmployeeHandler() : empNum(0)
{
	
}

EmployeeHandler::~EmployeeHandler()
{
	for (int i = 0;i < empNum;i++)
	{
		delete[] empList[i];
	}
}

void EmployeeHandler::Employee_Add()
{
	empList[empNum++] = input();
}

void EmployeeHandler::Employee_Search()
{
	cout << "이름" << '\t' << "성별" << '\t' << "생년월일" << '\t' << "연락처" << '\t'<<'\t' << "직급" << '\t'<< "계약형태" <<'\t'<<"월급"<<'\t'<<"시급"<<endl;
	for (int i = 0;i < empNum;i++)
	{
		empList[i]->ShowEmpInfo();
	}
}

void EmployeeHandler::Employee_Update()
{

}

void EmployeeHandler::Employee_Delete()
{

}

Employee * input()
{
	string m_strName;	//이름
	string m_strGender;	//성별
	string m_strBirth;	//생년월일
	string m_strPhone;	//연락처
	string m_strRank;	//직급
	string m_strContract;	//계약형태
	int salary;	//월급
	int timeWork;	//시급
	cout << "직원의 개인정보를 입력해주세요(이름, 성별, 생년월일, 연락처, 직급, 계약형태)" << endl;
	cout << "생년월일 예시)1995-11-07, 연락처 예시)010-1234-4567 직급 예시)사장,부장,과장,대리,사원" << endl;
	cout << "계약형태 예시)정규직, 비정규직" << endl;
	cin >> m_strName >> m_strGender >> m_strBirth >> m_strPhone >> m_strRank >> m_strContract;
	
	if (m_strContract == "정규직")
	{
		cout << "월급을 입력해주세요" << endl;
		cin >> salary;
		cout << "정규직 사원의 입력이 완료되었습니다." << endl;
		return (Employee*)(new PermanentEmployee(m_strName, m_strGender, m_strBirth,m_strPhone, m_strRank, m_strContract, salary));
	}
	else if (m_strContract == "비정규직")
	{
		cout << "시급을 입력해주세요" << endl;
		cin >> timeWork;
		cout << "비정규직 사원의 입력이 완료되었습니다." << endl;
		return (Employee*)(new TemporaryEmployee(m_strName, m_strGender, m_strBirth, m_strPhone, m_strRank, m_strContract, timeWork));
	}
}