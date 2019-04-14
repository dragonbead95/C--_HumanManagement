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
	cout << "�̸�" << '\t' << "����" << '\t' << "�������" << '\t' << "����ó" << '\t'<<'\t' << "����" << '\t'<< "�������" <<'\t'<<"����"<<'\t'<<"�ñ�"<<endl;
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
	string m_strName;	//�̸�
	string m_strGender;	//����
	string m_strBirth;	//�������
	string m_strPhone;	//����ó
	string m_strRank;	//����
	string m_strContract;	//�������
	int salary;	//����
	int timeWork;	//�ñ�
	cout << "������ ���������� �Է����ּ���(�̸�, ����, �������, ����ó, ����, �������)" << endl;
	cout << "������� ����)1995-11-07, ����ó ����)010-1234-4567 ���� ����)����,����,����,�븮,���" << endl;
	cout << "������� ����)������, ��������" << endl;
	cin >> m_strName >> m_strGender >> m_strBirth >> m_strPhone >> m_strRank >> m_strContract;
	
	if (m_strContract == "������")
	{
		cout << "������ �Է����ּ���" << endl;
		cin >> salary;
		cout << "������ ����� �Է��� �Ϸ�Ǿ����ϴ�." << endl;
		return (Employee*)(new PermanentEmployee(m_strName, m_strGender, m_strBirth,m_strPhone, m_strRank, m_strContract, salary));
	}
	else if (m_strContract == "��������")
	{
		cout << "�ñ��� �Է����ּ���" << endl;
		cin >> timeWork;
		cout << "�������� ����� �Է��� �Ϸ�Ǿ����ϴ�." << endl;
		return (Employee*)(new TemporaryEmployee(m_strName, m_strGender, m_strBirth, m_strPhone, m_strRank, m_strContract, timeWork));
	}
}