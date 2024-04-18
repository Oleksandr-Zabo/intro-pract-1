#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 0x0E);

	cout << "\"""Hello, World!""\"" <<endl;
	
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "/Bjarne Stroustrup/" << endl;
	system("pause");
	return 0;
}