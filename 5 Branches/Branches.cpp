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

int _tmain(int argc, _TCHAR* argv[]) 
{
	SetConsoleOutputCP(1251);

	// ������� ������������ ������������ if ��� ���������� ����� ������ �� ������ ECTS �� ������� ����
	double credits; // �����, �� ���� ������ ������� ����
	char flag;
convert:
	std::cout<<"������ ������� ����:";
	std::cin>>credits;
	if (credits >=90 && credits <=100) {
				std::cout<<"��� "<<credits<<" ������� ���� A �� ������ ECTS";
	}
	else if (credits >= 82 && credits <=89) {
					std::cout<<"��� "<<credits<<" ������� ���� B �� ������ ECTS";	 
		 }
		 else if (credits >= 74 && credits <= 81) {
						std::cout<<"��� "<<credits<<" ������� ���� C �� ������ ECTS";    
			  }            
			  else if (credits >= 64 && credits <= 73) {
							  std::cout<<"��� "<<credits<<" ������� ���� D �� ������ ECTS"; 
				   }
				   else if (credits >= 60 && credits <= 63) {
									std::cout<<"��� "<<credits<<" ������� ���� E �� ������ ECTS";    
						}
						else if (credits >= 35 && credits <= 59) {
										std::cout<<"��� "<<credits<<" ������� ���� Fx �� ������ ECTS";    

							 }
							 else if (credits >= 0 && credits <= 34) {
											 std::cout<<"��� "<<credits<<" ������� ���� F �� ������ ECTS";
								  }
								  else std::cout<<"������� �������� ���� �� ������� ���� ECTS";


	std::cout<<std::endl<<"������ ��������� �����? (y/n): ";
	
quary:
		std::cin>>flag;
		switch (flag) {
			case 'y': goto convert; break;
			case 'n': goto next;
			default: {
					   std::cout<<"�������! ��������� �����? (y/n): ";
					   goto quary;
					 }
		}
next:		 
	std::cout<<"��������� ����-��� ������...";
	getch();
	return 0;
}
