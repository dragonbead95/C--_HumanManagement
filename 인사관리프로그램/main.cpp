#include "EmployeeHandler.h"

int main(void)
{
	EmployeeHandler handler;
	int number;

	while (1)
	{
		cout << "1.�����߰�" << endl;
		cout << "2.���������˻�" << endl;
		cout << "3.��������" << endl;
		cout << "4.��������" << endl;
		cout << "5.����" << endl;

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