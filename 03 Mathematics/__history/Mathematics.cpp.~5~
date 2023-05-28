#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <math.h> // Підключення маьематичної бібліотеки для доступу до математичних функцій
#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleOutputCP(1251);

	int x, y, z;
	std::wcout<<"Введіть аргументи x y z: ";
	std::wcin>>x>>y>>z;
	double result = (45-x)/34+x/(pow(y,3)-z)+sin(x+z); //Рядковий запиз математичного вираза з використанням математичних фуекцій
	std::wcout<<"Результат розрахунку дорівнює: "<<result;
	
	getch();
	return 0;
}
