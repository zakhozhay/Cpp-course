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

	wcout<<"������� ������ � ����������� �������"<<endl;
	int massive1[10]; // ���� ������������ �������������� ������ �� 10 ��������
	randomize(); // �������, �� �������� ���������� �������������� �����
	for (int i=0; i < 10; i++) {
	   massive1[i] = random(50); //���������� i-�� �������� ������ ���������������� ��������� � �������� �� 0 �� 49 
	   wcout<<massive1[i]<<"\t";  // ��������� ���������� ������
	}
	// ����� ����������� �������� ������
	int minimum = massive1[0], maximum = massive1[0]; // ��������, �� ���������� � ������������ ������ - �� ������ ������� ������
	
	for (int i = 1; i < 10; i++) {    // ��������� ���������� �� �������� ������ ��������� � �������
	   if (massive1[i]<minimum) {      // ���� �������� ������� ����� ��������� �������� minimum
		  minimum = massive1[i];       // minimum ���������� ����� ��������
	   }
	   if (massive1[i]>maximum) {      // ���� �������� ������� ������ �� ������� �������� maximum
		  maximum = massive1[i] ;	  // maximum ���������� ���� ��������
	   }
	}
	wcout<<endl<<"̳��������� �������: "<<minimum<<"\t������������ �������: "<<maximum;
	wcout<<endl<<endl;

	wcout<<"������� ������ � ���������� �������"<<endl;
	int massive2[5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
	// ��������� �������� �������
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			wcout<<massive2[i][j]<<"\t";  // ��������� �������� ����� ������
		}
		wcout<<endl; // ϳ��� ���������� ��������� ������ ����������� ������� �� ����� �����
	}

	// ���������� ���� ������� (���� �������� ������� �������)
	int sled = 0; // ���� ������, �� ���� �������� �������� ���� �������
	for (int i = 0; i < 5; i++) {
		 sled += massive2[i][i]; // ������� ������� ��� ����� �� ����� sled �������� �������� �������� �������� ������, � ����� ������� ������� [0][0] [1][1] [2][2] [3][3] [4][4]
	}
	wcout<<"��� �������: "<<sled;
	
	getch();
	return 0;
}
