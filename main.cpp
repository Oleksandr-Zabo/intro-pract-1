#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{
	system("chcp 1251>nul");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "�� ����, �� ���������" <<endl;
	cout << "���� �� �����," << endl;
	cout << "����� ����� ��������," << endl;
	cout << "�� ����� ����," << endl;
	cout << "��� ���� ���������," << endl;
	cout << "� �����, � �����" << endl;
	cout << "���� �����, ���� ����," << endl;
	cout << "�� ���� �������." << endl;
	cout << "\n����� ��������\n" << endl;
	system("pause");
	return 0;
}