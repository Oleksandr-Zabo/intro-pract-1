#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{


	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "������ ����." << endl;
	cout << "��� Գ����" << endl;
	system("pause");
	return 0;
}