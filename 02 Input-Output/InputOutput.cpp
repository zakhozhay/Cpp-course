#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleOutputCP(1251);

	string line = "����� �������";
	cout<<line.append("!");
	getch();
	return 0;
}
