#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <math.h>
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
	
	// ������� ������������ ��������������� ��������� ����� for
	// ��������� ������� �������
	char symbol; // �����, �� ���� ������ ��������� ������ �������
	for (byte code = 0; code < 255; code++) {   // ����������� ���� � ����� ���� ���������� �������� code �� 0 �� 255 (����� ������� ���� �������)
		symbol = code;  // ��� ��������� ������� �� ���� ���� ��������������� ������ ������������ ���� ����� byte � char
		std::cout<<"code = "<<code<<"\t"<<"symbol = "<<symbol<<std::endl; // ��������� ���� � ���������� ������� �� ����� ��������� � ����� (�� ���� ��������� ��� �����)
	}

	// ������� ������������ ��������������� ��������� ����� while
	// ��� ��������� ������ ������� ���������� �����
	int quantity; // ���������� �����, �� ���� ��������� ������� ���������� ����� ��� ���������
	std::cout<<"������ ������� ���������� ����� ��� ���������: ";
	std::cin>>quantity; // ����� � ����������� �� ��������� ������� ���������� ����� ��� ���������
	int digit = 1; // ��������� ����� ��� ��������� ��������� ������� ����������� �����, �� ����������
	while (digit <= quantity) { // ���� ���� ������������� �� ��� �� ���� �������� ������ � ������� ��� ������� ������ ������� ���������� �����
		std::cout<<"����� "<<digit<<" = "<<random(65535)<<std::endl; // ��������� ��������� ������� �����, �� ���������� �� ������ �����, �� ����������� � ����������� ������� random, ��� ������ ��������� �����
		digit++;		
	}

	// ������� ������������ ��������������� ��������� ����� while
	// ��� ��������� ������ ������� ���������� �����
	std::cout<<"������ ������� ���������� ����� ��� ���������: ";
	std::cin>>quantity;
	digit = 1;
	do {
		std::cout<<"����� "<<digit<<" = "<<random(65535)<<std::endl;
		digit++; 
	}
	while (digit <= quantity);
	// ��� �������� ������������� �������� �� ���������� � ����������� (while) � ���������� (do while)
	// �������� �������� � ��� ���� ������ �� �������� ������� ���������� ����� ��� ��������� ������ 0.
	// ��� �����, ����� ����������� �����, �� ��������� �����, �� ����������. ���� while ������ ��������
	// ������������� ����� �� �� ������ ������� �����, � ���� do while ��������� ������ ��� ������, � ���� ��� ��������.
	// ����� �����, ������ �� ��� ������������ do while ���� ������ ���� �� ��� ����������.  	
	getch();
	return 0;
}
