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

	// ������� ������������ ������������ if ��� ���������� ����� ������ �� ������ ECTS �� ������� ����
	double credits; // �����, �� ���� ������ ������� ����
	char flag;
convert:
	cout<<"������ ������� ����:";
	cin>>credits;
	if (credits >=90 && credits <=100) {
				wcout<<"��� "<<credits<<" ������� ���� A �� ������ ECTS";
	}
	else if (credits >= 82 && credits <=89) {
					wcout<<"��� "<<credits<<" ������� ���� B �� ������ ECTS";
		 }
		 else if (credits >= 74 && credits <= 81) {
						wcout<<"��� "<<credits<<" ������� ���� C �� ������ ECTS";
			  }            
			  else if (credits >= 64 && credits <= 73) {
							  wcout<<"��� "<<credits<<" ������� ���� D �� ������ ECTS";
				   }
				   else if (credits >= 60 && credits <= 63) {
									wcout<<"��� "<<credits<<" ������� ���� E �� ������ ECTS";
						}
						else if (credits >= 35 && credits <= 59) {
										wcout<<"��� "<<credits<<" ������� ���� Fx �� ������ ECTS";

							 }
							 else if (credits >= 0 && credits <= 34) {
											 cout<<"��� "<<credits<<" ������� ���� F �� ������ ECTS";
								  }
								  else wcout<<"������� �������� ���� �� ������� ���� ECTS";


	wcout<<endl<<"������ ��������� �����? (y/n): ";
	
quary:
		cin>>flag;
		switch (flag) {
			case 'y': goto convert; break;
			case 'n': goto next;
			default: {
					   wcout<<"�������! ��������� �����? (y/n): ";
					   goto quary;
					 }
		}
next:		 
	wcout<<"��������� ����-��� ������...";
	getch();
	return 0;
}
