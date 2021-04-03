#include <iostream>
#include <windows.h> // Потрібна для функції переключення кодової сторінки
#include <conio.h> // Потрібна для функції getch()
#include <string>  // Потрібна дл строкового типу даних string
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
	SetConsoleOutputCP(1251); // для коректного відображення символів кириллиці
	// Приклади опису змінних різних типів (значення може не задаватися)
	int i = 10; // Цілочисельний тип (довжина 4 байти)
	float k = 1.4E+3; // Річовий тип
	double n = 1.5E-105; // Річовий тип подвійної довжини
	char sumbol = 'g'; // Символьний тип
	std::string line = "Стрічка символів"; // Строковий тип
	bool logic = true; // Логічний тип (приймає значення тільки true або false)

	std::cout<<line;
	getch(); // Функція, що очікує введення будь-якого символу (натискання будь-якої кнопки)
	return 0;
}
