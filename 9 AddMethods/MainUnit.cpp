// В програмі, на прикладі операцій з масивами, ілюструється можливість додавання
// властивостей і методів у вже існуючі класи. В даному прикладі - до класу форми MainForm
// Для цього в заголовочному файлі прописуються нові властивості і прототип метода.
// Все це записується у заголовочний файл, де описується класс. Дивіться файл MainUnit.h
// Після запису у заголовочний файл, в цьому файлі можна звертатися до нових властивостей класа,
// а також створювати реалізацію методу та викликати його з будь-яких обробників подій.
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
// Створення реалізації нового метода пошу мінімума або максимума в масиві,
// прототип якого був прописаний в заголовочному файлі MainUnit.h
// В якості параметрів передається сам масив, та строка символів,
// що визначає дію: min - пошук мінімума, max - пошук максимума
int __fastcall TMainForm::MassiveMinMax(int Massive[3], std::string action)
{
	int result = Massive[0];
	for (int i = 0; i < 3; i++) {
		if (action == "min") {
			if (Massive[i] < result) {
				result = Massive[i];    
			}
		}
		if (action == "max" ) {
			if (Massive[i] > result) {
				result = Massive[i];    
			}	
		}
	}
	return result;   // результат пошуку мінімума або максимума повертається з метода
}
//---------------------------------------------------------------------------
// Обробник події кліку на CheckBox, що визначае режим заповнення масивів
void __fastcall TMainForm::InputModeCheckBoxClick(TObject *Sender)
{
	if (InputModeCheckBox->Checked) {
			GenerateButton -> Enabled = true;       // блокування та розблокування кнопок,
			ManualInputButton -> Enabled = false;   // що використовуються для різних режимів введення данних
			MassiveAStringGrid->Options>>goEditing; // Властивість Option являє собою множину параметрів
			// >> - якщо треба встановити опцію (значення true), а << - навпаки, щоб зкинути (false)
			// в одному операторі можна змінювати декілька властивостей множини Options,
			// наприклад: ... ->Options>>параметр1>>парамертр2<<Параметр3>>Параметр4; 
			MassiveBStringGrid->Options>>goEditing;
	}
	else {
			GenerateButton -> Enabled = false;      // Для іншого режиму також налаштування
			ManualInputButton -> Enabled = true;    // візуальних кнопок
			MassiveAStringGrid->Options<<goEditing; // та визначення опції редагування 
			MassiveBStringGrid->Options<<goEditing; // для TStringGrid
	}

	MultiplicateButton -> Enabled = false; // Блокування кнопок дій, так як данні
	MinMaxButton -> Enabled = false;       // ще не задані
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::GenerateButtonClick(TObject *Sender)
{
	Randomize();
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			MassiveA[i][j] = random(20);
			MassiveAStringGrid -> Cells[j][i] = IntToStr(MassiveA[i][j]);
		}
		MassiveB[i] = random(20);
		MassiveBStringGrid -> Cells[0][i] = IntToStr(MassiveB[i]);
		MassiveCStringGrid -> Cells[0][i] = "";
	}
	 
	MultiplicateButton -> Enabled = true;
	MinMaxButton -> Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ManualInputButtonClick(TObject *Sender)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			MassiveA[i][j] = StrToInt(MassiveAStringGrid -> Cells[j][i]);
		}
		MassiveB[i] = StrToInt(MassiveBStringGrid -> Cells[0][i]);
		MassiveCStringGrid -> Cells[0][i] = "";
	}
	 
	MultiplicateButton -> Enabled = true;
	MinMaxButton -> Enabled = false;	
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::MultiplicateButtonClick(TObject *Sender)
{ 	// Надалі, в двох вкладених циклах, перемноження матриц та виведення
	// результуючої в компонент MassiveCStringGrid
	for (int i = 0; i < 3; i++) { 
		MassiveC[i]=0;
		for (int j = 0; j < 3; j++) {
			MassiveC[i] += MassiveA[i][j]*MassiveB[j];
		}
		MassiveCStringGrid -> Cells[0][i]= IntToStr(MassiveC[i]);
	}
	MultiplicateButton -> Enabled = false; // Блокування кнопки помноження (так як дія з поточними даними щойно виконана)
	MinMaxButton -> Enabled = true;	       // Розблокування кнопки пошуку мінімуму/максимуму для щойно отриманих значень MassiveCStringGrid
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::MinMaxButtonClick(TObject *Sender)
{
	MinimumEdit->Text = IntToStr(MassiveMinMax(MassiveC, "min"));  // виклик рагіше створеного методу з опцією пошуку мінімуму
	MaximumEdit->Text = IntToStr(MassiveMinMax(MassiveC, "max"));  // виклик рагіше створеного методу з опцією пошуку максимум
	MinMaxButton -> Enabled = false; // Блокування кнопки MinMaxButton так як операція щойно виконана	
}
//---------------------------------------------------------------------------

