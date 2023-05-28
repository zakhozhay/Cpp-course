#include <iostream>
#include <windows.h>
#include <conio.h>
#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

int fibonacci(int n)
{
	int result;
	int fibonacci1;
	int fibonacci2;
	std::wcout << std::endl << "Виклик функції fibonacci(" << n << ")...";
	if (n < 3) {
		result = 1;
	}
	else {
		fibonacci1 = fibonacci(n - 1);
		fibonacci2 = fibonacci(n - 2);
		result = fibonacci1 + fibonacci2;
	}
	std::wcout << std::endl << "Результат виконання функції fibonacci(" << n << ") = " << result;
	return result;
}

int _tmain(int argc, _TCHAR* argv[]) 
{
	SetConsoleOutputCP(1251);

	int number;
	std::wcout << "Введіть порядковий номер елемента з ряду Фібоначчі: ";
	std::wcin >> number;
	std::wcout << std::endl << number << "-й елемент ряду Фібоначчі дорівнює: " << fibonacci(number);

	getch();
	return 0;
}
