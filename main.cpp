#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x07);

	cout << "������ ����." << endl;
	cout << "���: Գ����.\n" << endl;

	cout << "(...)Գ���� � �� �� ������������� ������� �����. \n��� ������ ������� ����, \n�� \"���������\" �� ������� ����, \n���� �� ������� �����." << endl;

	cout << "\n���.: 222-22-22" << endl;

	cout <<"222\t";
	cout <<"|\t";

	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "222\t";

	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "|\n";

	cout << "22 \t";
	cout << "|\t";

	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "22 \t";

	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "|\n";

	cout << "22 \t";
	cout << "|\t";

	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "22 \t";

	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "|\n";

	cout << "� �.�."<<endl;

	system("pause");
	return 0;
}