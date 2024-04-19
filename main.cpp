#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	cout << "/Bjarne Stroustrup/" << endl;
	system("pause");
	return 0;
}