#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(hConsole, 0x04);
	cout << "Every"<<endl;

	SetConsoleTextAttribute(hConsole, 0x0C);
	cout << "\tHunter" << endl;

	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "\t\tWants" << endl;

	SetConsoleTextAttribute(hConsole, 0x02);
	cout << "\t\t\tTo know" << endl;

	SetConsoleTextAttribute(hConsole, 0x09);
	cout << "\t\t\t\tWhere" << endl;
	
	SetConsoleTextAttribute(hConsole, 0x01);
	cout << "\t\t\t\t\tSits" << endl;
	
	SetConsoleTextAttribute(hConsole, 0x0D);
	cout << "\t\t\t\t\t\tPheasant" << endl;

	SetConsoleTextAttribute(hConsole, 0x0A);
	system("pause");
	return 0;
}