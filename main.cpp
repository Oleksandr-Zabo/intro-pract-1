#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "To be,! ";

	SetConsoleTextAttribute(hConsole, 0x0C);
	cout << "or not ";

	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "to be: that is the question: "<<endl<< "Whether ";

	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "\'tis nobler in the mind to suffer " << endl;
	cout << "The slings and arrows of outrageous fortune," << endl;
	cout << "Or to take arms against a sea of troubles," << endl;
	cout << "And by opposing end them?" << endl;
	cout << "William Shakespeare" << endl;
	
	system("pause");
	return 0;
}