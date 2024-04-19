#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{


	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "Продам квіти." << endl;
	cout << "Вид Фіалка" << endl;
	system("pause");
	return 0;
}