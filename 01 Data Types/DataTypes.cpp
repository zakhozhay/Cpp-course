#include <iostream>
#include <windows.h> // ������� ��� ������� ������������ ������ �������
#include <conio.h> // ������� ��� ������� getch()
#include <string>  // ������� �� ���������� ���� ����� string
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
	SetConsoleOutputCP(1251); // ��� ���������� ����������� ������� ���������
	// �������� ����� ������ ����� ���� (�������� ���� �� ����������)

	int i = 10; // ֳ����������� ��� (������� 4 �����)

	float k = 1.4E-5; // г����� ���

	double n = 1.5E-105; // г����� ��� ������� �������

	char symbol = 'g'; // ���������� ���

	string line = "������ �������"; // �������� ���

	bool logic = true; // ������� ��� (������ �������� ����� true ��� false)

	cout<<"ֳ���������� �����: "<<i<<endl; //��������� ����� i � ������ ���������
	cout<<"г���� �����: "<<k<<endl;
	cout<<"г���� ����� ������� �������: "<<n<<endl;
	cout<<"��������� �����: "<<symbol;
	cout<<endl; // ��������� std::endl � ������ ��������� ���������� ������ �� ����� �����
						  // (��������� "\n" � ����� �������)
	cout<<"������� �����: "<<line; // ��������� ����� line  � ������ ���������
	cout<<endl<<"������ �����: "<<logic;
	getch(); // �������, �� ����� �������� ����-����� ������� (���������� ����-��� ������)
	return 0;
}
