#include "EmployeeHandler.h"

int main(void)
{
	EmployeeHandler handler;
	int number;

	while (1)
	{
		cout << "1.직원추가" << endl;
		cout << "2.직원정보검색" << endl;
		cout << "3.직원수정" << endl;
		cout << "4.직원삭제" << endl;
		cout << "5.종료" << endl;

		cin >> number;
		switch (number)
		{
		case 1:
			handler.Employee_Add();
			break;
		case 2:
			handler.Employee_Search();
			break;
		case 3:
			handler.Employee_Update();
			break;
		case 4:
			handler.Employee_Delete();
			break;
		case 5:
			exit(1);
		default:
			continue;
		}
	}

	system("pause");
	return 0;
	
}