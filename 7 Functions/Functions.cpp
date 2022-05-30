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

// ��������� �������, �� �� ������� ��������
void ConsoleOut(std::string line, int quantity)   // ��������������� ��� ����� void. �����, ����� ����, ����������� ������ ���������� ��������� ������� 
{
	  while (quantity>0) {
		  std::cout<<line<<std::endl;   // ³�������� ����� line, ��������� � ������� ��������. ʳ������ ������� ��������� ������������ ������ ���������� quantity
		  quantity--;
	  }
	  
}

// ��������� �������, �� ������� ��������
int SumElementsMassive(int massive[10]) // �������� ��� ��������, �� ���� �����������, ��'� �������, ������ ���������� ��������� ����� ���� (� ������ ������� ���� ��������)
{
	int summa = 0;
	for (int i = 0; i < 10; i++) {
		summa += massive[i];
	}
	return summa;   // � ������� �������� ����������� �������� ���� �������� ������ (��� ����� ����� ������� ��������� ��������� ���� ��������, �� ����������� ��������)
}

int _tmain(int argc, _TCHAR* argv[]) 
{
	SetConsoleOutputCP(1251);

	// ������ �������, �� �� ������� ��������
	ConsoleOut("������� ������ �������, �� �� ������� ��������", 3); // � ������� ����������� �������� ���������: ��������� ����� � ������� ������� ���������
																	  // (������������ ��������� ��������� �������� ������� ��������� ����������� ����������)

	// ������� ������������ �������, �� ������� �������� ���� �������� ������
	int mas[10];
	randomize();
	std::wcout<<std::endl<<"\n������������ �����\n";
	for (int i = 0; i < 10; i++) {
		mas[i]=random(100);
		std::wcout<<mas[i]<<"\t";
	}
	
	std::wcout<<"\n���� �������� ������: "<<SumElementsMassive(mas); // ������ ������� � ��� ���������� ������������ ����� � ������������ ����� ���� ��������
	getch();
	return 0;
}
