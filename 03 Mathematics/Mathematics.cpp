#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <math.h> // ϳ��������� ����������� �������� ��� ������� �� ������������ �������
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

	int x, y, z;
	wcout<<"������ ��������� x y z: ";
	wcin>>x>>y>>z;
	double result = (45-x)/34+x/(pow(y,3)-z)+sin(x+z); //�������� ����� ������������� ������ � ������������� ������������ �������
	wcout<<"��������� ���������� �������: "<<result;
	
	getch();
	return 0;
}
