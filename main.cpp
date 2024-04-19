#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x07);

	cout << "Продам квіти." << endl;
	cout << "Вид: Фіалка.\n" << endl;

	cout << "(...)Фіалка – чи не найпопулярніша кімнатна квітка. \nДля фіалки підійдуть вікна, \nякі \"дивляться\" на північний схід, \nпівніч та північний захід." << endl;

	cout << "\nТел.: 222-22-22" << endl;

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

	cout << "і т.д."<<endl;

	system("pause");
	return 0;
}