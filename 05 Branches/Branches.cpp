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

	// Приклад використання розгалуження if для визначення букви оцінки за шкалою ECTS за кількістю балів
	double credits; // Змінна, що буде містити кількість балів
	char flag;
convert:
	std::cout<<"Введіть кількість балів:";
	std::cin>>credits;
	if (credits >=90 && credits <=100) {
				std::wcout<<"Бал "<<credits<<" відповідає букві A за шкалою ECTS";
	}
	else if (credits >= 82 && credits <=89) {
					std::wcout<<"Бал "<<credits<<" відповідає букві B за шкалою ECTS";	 
		 }
		 else if (credits >= 74 && credits <= 81) {
						std::wcout<<"Бал "<<credits<<" відповідає букві C за шкалою ECTS";    
			  }            
			  else if (credits >= 64 && credits <= 73) {
							  std::wcout<<"Бал "<<credits<<" відповідає букві D за шкалою ECTS"; 
				   }
				   else if (credits >= 60 && credits <= 63) {
									std::wcout<<"Бал "<<credits<<" відповідає букві E за шкалою ECTS";    
						}
						else if (credits >= 35 && credits <= 59) {
										std::wcout<<"Бал "<<credits<<" відповідає букві Fx за шкалою ECTS";    

							 }
							 else if (credits >= 0 && credits <= 34) {
											 std::wcout<<"Бал "<<credits<<" відповідає букві F за шкалою ECTS";
								  }
								  else std::wcout<<"Введене значення балу не відповідає шкалі ECTS";


	std::wcout<<std::endl<<"Бажаєте повторити запит? (y/n): ";
	
quary:
		std::cin>>flag;
		switch (flag) {
			case 'y': goto convert; break;
			case 'n': goto next;
			default: {
					   std::wcout<<"Помилка! Повторити запит? (y/n): ";
					   goto quary;
					 }
		}
next:		 
	std::wcout<<"Натисніть будь-яку кнопку...";
	getch();
	return 0;
}
