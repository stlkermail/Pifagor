#include <iostream> 
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;
using std::cout;
HANDLE hConsole;
void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef TABL_1
	//system("color 06");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "\n\t\t\t\t\t     Таблица умножения: \n" << endl;
	SetConsoleTextAttribute(hConsole, 6);
	int a = 1, z = 1, k = 0;
	for (int x = 1; x <= 1; x++)
	{
		for (int i = 1; i <= 10; i++)
		{
			cout << x << " * " << i << " = " << x * i << "\t\t"; k = x + 1; cout << k << " * " << i << " = " << k * i << "\t\t"; k = x + 2; cout << k << " * " << i << " = " << k * i << "\t\t"; k = x + 3; cout << k << " * " << i << " = " << k * i << "\t\t"; k = x + 4; cout << k << " * " << i << " = " << k * i << "\n";
		}
		cout << "\n\n";
		for (int i = 1; i <= 10; i++)
		{
			k = x + 5; cout << k << " * " << i << " = " << k * i << "\t\t"; k = x + 6; cout << k << " * " << i << " = " << k * i << "\t\t"; k = x + 7; cout << k << " * " << i << " = " << k * i << "\t\t"; k = x + 8; cout << k << " * " << i << " = " << k * i << "\t\t"; k = x + 9; cout << k << " * " << i << " = " << k * i << "\n";
		}
	}
	SetConsoleTextAttribute(hConsole, 7);
#endif // TABL_1

#ifdef TAB_2
	//system("COLOR 04");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int a = 0;
	SetConsoleTextAttribute(hConsole, 4);
	cout << "Esc для выхода!\n\n\n";
	while (a != 49 || a != 50 /*a != 27*/)
	{
		SetConsoleTitle(L"Пифагор");
		SetConsoleTextAttribute(hConsole, 8);
		cout << "Выберите каким цветом хотите отразить Таблицу Пифагора: \n";
		SetConsoleTextAttribute(hConsole, 2);
		cout << "\n1. Зеленый \n";
		SetConsoleTextAttribute(hConsole, 5);
		cout << "2. Лиловый \n\n";
		a = _getch();
		//cout << (char) a << " " << a;
		if (a == 49 || a == 50)                                             // Зеленый
		{
			//hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			if (a == 49)
			{
				SetConsoleTextAttribute(hConsole, 2);
			}
			else if (a == 50)
			{
				SetConsoleTextAttribute(hConsole, 5);                       // Лиловый
			}
			cout << "\n\t  Таблица пифагора: \n\n";
			for (int i = 1; i <= 10; i++)
			{
				for (int j = 1; j <= 10; j++)
				{
					cout << setw(3) << i * j << " ";
				}
				cout << "\n";
			}
			cout << "\n";
		}
		else if (a == 27)
		{
			SetConsoleTextAttribute(hConsole, 7);
			break;
		}
	}
#endif // TAB_2
}