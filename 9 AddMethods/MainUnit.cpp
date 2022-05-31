// � �������, �� ������� �������� � ��������, ����������� ��������� ���������
// ������������ � ������ � ��� ������� �����. � ������ ������� - �� ����� ����� MainForm
// ��� ����� � ������������� ���� ������������ ��� ���������� � �������� ������.
// ��� �� ���������� � ������������ ����, �� ��������� �����. ������� ���� MainUnit.h
// ϳ��� ������ � ������������ ����, � ����� ���� ����� ���������� �� ����� ������������ �����,
// � ����� ���������� ��������� ������ �� ��������� ���� � ����-���� ��������� ����.
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
// ��������� ��������� ������ ������ ���� ������ ��� ��������� � �����,
// �������� ����� ��� ���������� � ������������� ���� MainUnit.h
// � ����� ��������� ���������� ��� �����, �� ������ �������,
// �� ������� ��: min - ����� ������, max - ����� ���������
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
	return result;   // ��������� ������ ������ ��� ��������� ����������� � ������
}
//---------------------------------------------------------------------------
// �������� ��䳿 ���� �� CheckBox, �� �������� ����� ���������� ������
void __fastcall TMainForm::InputModeCheckBoxClick(TObject *Sender)
{
	if (InputModeCheckBox->Checked) {
			GenerateButton -> Enabled = true;       // ���������� �� ������������� ������,
			ManualInputButton -> Enabled = false;   // �� ���������������� ��� ����� ������ �������� ������
			MassiveAStringGrid->Options>>goEditing; // ���������� Option ����� ����� ������� ���������
			// >> - ���� ����� ���������� ����� (�������� true), � << - �������, ��� ������� (false)
			// � ������ �������� ����� �������� ������� ������������ ������� Options,
			// ���������: ... ->Options>>��������1>>���������2<<��������3>>��������4; 
			MassiveBStringGrid->Options>>goEditing;
	}
	else {
			GenerateButton -> Enabled = false;      // ��� ������ ������ ����� ������������
			ManualInputButton -> Enabled = true;    // ��������� ������
			MassiveAStringGrid->Options<<goEditing; // �� ���������� ����� ����������� 
			MassiveBStringGrid->Options<<goEditing; // ��� TStringGrid
	}

	MultiplicateButton -> Enabled = false; // ���������� ������ ��, ��� �� ����
	MinMaxButton -> Enabled = false;       // �� �� �����
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
{ 	// �����, � ���� ��������� ������, ������������ ������ �� ���������
	// ����������� � ��������� MassiveCStringGrid
	for (int i = 0; i < 3; i++) { 
		MassiveC[i]=0;
		for (int j = 0; j < 3; j++) {
			MassiveC[i] += MassiveA[i][j]*MassiveB[j];
		}
		MassiveCStringGrid -> Cells[0][i]= IntToStr(MassiveC[i]);
	}
	MultiplicateButton -> Enabled = false; // ���������� ������ ���������� (��� �� �� � ��������� ������ ����� ��������)
	MinMaxButton -> Enabled = true;	       // ������������� ������ ������ ������/��������� ��� ����� ��������� ������� MassiveCStringGrid
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::MinMaxButtonClick(TObject *Sender)
{
	MinimumEdit->Text = IntToStr(MassiveMinMax(MassiveC, "min"));  // ������ ����� ���������� ������ � ������ ������ ������
	MaximumEdit->Text = IntToStr(MassiveMinMax(MassiveC, "max"));  // ������ ����� ���������� ������ � ������ ������ ��������
	MinMaxButton -> Enabled = false; // ���������� ������ MinMaxButton ��� �� �������� ����� ��������	
}
//---------------------------------------------------------------------------

