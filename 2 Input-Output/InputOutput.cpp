#include <iostream>
#include <windows.h> // ������� ��� ������� ������������ ������ �������
#include <conio.h> // ������� ��� ������� getch()
#include <string>  // ������� ��� ���������� ���� ����� string
using namespace std; // ��� �� ����� ���� ������ � ��� ������: std::cin..., std::cout..., std::string...
                     // ��� ���� �� ������� ���� ���� ������� ���� - �� �� ���� ��������� �������
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
	SetConsoleOutputCP(1251); // ��� ���������� ����������� ������� ��������� ��� ���������

	int varinteger;
	std::string varstring;
	float varfloat;

	// �������� ��������-��������� �����
	cout<<"������� �������� ������������ �����: ";
	cin>>varinteger;
	cout<<"������� �������� �������� �����: ";
	cin>>varstring;
	cout<<"������� �������� ������� ����� (� \"���������\" ������): "; /* �������� ����� �� ������������ ������������ ������� \
																				  ��� "����������" ����������� 䳿 ����� */
	std::cin>>varfloat;

	// �������� ����������� ��������� �����
	cout << "\n�������� ����� varinteger = " << varinteger;  //��������� ������ \n ������������ ��� �������� �� ���� ������ (���� ������� ������)
	cout << endl << "�������� �������� �����: " << varstring;
	cout << endl; // ������� ������������ ������ ������� ��� ����������� ������� �� ���� ������
	cout << "�������� ������� ����� varfloat = " << varfloat << " (���������� ���������)";

	getch();
	return 0;
}
