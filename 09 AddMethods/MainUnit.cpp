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
#include <Math.h>
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
// ��������� ��������� ������ ������ ������ ������� ��� ��������� � �����,
// �������� ����� ��� ���������� � ������������� ���� MainUnit.h
// � ����� ��������� ���������� ��� �����, �� ������ �������,
// �� ������� ��: min - ����� �������, max - ����� ���������
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
	return result;   // ��������� ������ ������� ��� ��������� ����������� � ������
}
//---------------------------------------------------------------------------
// ��������� �������� ������� ��� ����� ���� �������, �� ����������� �� ��
// �� ��������� �� �������� ���������. ������������ �������� �������� � ����� ����������
// ��������� ������� ���� ������� ������� (��������� ����� ���� ����). ����� ����� ��������
// �������� ����������� ���������� ���������� ������, �� ������� �� � ����� ������� �� � � �������.
// ��� ��� ��������� ����� ����� �� ���������� � �������, � ������ ��������������� � ��.
// ��� �� ������� ����� �������������.
void  swap (int& x1, int& x2) // ��������� ��������� ��������� �� ��������� �� ��������.
							  // ����� ����� ���� ���������� ��������� ���� ��������� �� ���� ��������� � �������� �������
{
	int temp = x1;
	x1 = x2;    // ������ ��������� ���������� ��������,
	x2 = temp;  // ���� ���������� � �������� ������� 
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

	MultiplicateButton -> Enabled = false; // ���������� ������ ��, ��� �� �����
	MinMaxButton -> Enabled = false;       // �� �� ������
	SortingButton -> Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::GenerateButtonClick(TObject *Sender)
{

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			Randomize();  // ��������� ���� ������� �������� �������� ����������� ��������� ���� �������� ��������� �������� random (range);
			MassiveA[i][j] = random(20);
			MassiveAStringGrid -> Cells[j][i] = IntToStr(MassiveA[i][j]);
		}
			Randomize();
		MassiveB[i] = random(20);
		MassiveBStringGrid -> Cells[0][i] = IntToStr(MassiveB[i]);
		MassiveCStringGrid -> Cells[0][i] = "";
	}
	MinimumEdit -> Clear();
	MaximumEdit -> Clear(); 
	MultiplicateButton -> Enabled = true;
	MinMaxButton -> Enabled = !MultiplicateButton -> Enabled;
	SortingButton -> Enabled = !MultiplicateButton -> Enabled;
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
	MinimumEdit -> Clear();
	MaximumEdit -> Clear(); 
	MultiplicateButton -> Enabled = true;
	MinMaxButton -> Enabled = !MultiplicateButton -> Enabled;
	SortingButton -> Enabled = !MultiplicateButton -> Enabled;	
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
	MinMaxButton -> Enabled = !MultiplicateButton -> Enabled;	       // ������������� ������ ������ �������/��������� ��� ����� ��������� ������� MassiveCStringGrid
	SortingButton -> Enabled = !MultiplicateButton -> Enabled;
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::MinMaxButtonClick(TObject *Sender)
{
	MinimumEdit->Text = IntToStr(MassiveMinMax(MassiveC, "min"));  // ������ ����� ���������� ������ � ������ ������ �������
	MaximumEdit->Text = IntToStr(MassiveMinMax(MassiveC, "max"));  // ������ ����� ���������� ������ � ������ ������ ��������
	MinMaxButton -> Enabled = false; // ���������� ������ MinMaxButton ��� �� �������� ����� ��������	
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SortingButtonClick(TObject *Sender)
{
	int temp;  // ����� ��������� ��� ������������� ������ ���� �������� ������
	for (int i = 0; i < 3; i++) {
		for (int j = i+1; j < 3; j++) {
			if (MassiveC[j] < MassiveC[i]){
				swap(MassiveC[i], MassiveC[j]); //�� �������� ��������� ������ ���'����� � ���������� ����������� ����������� � �������.
											    // ����� �����, ���� ����������� ���������, ���� ����� ���������� �� ���� ���������� ���������. 
			} 
		}
		MassiveCStringGrid -> Cells[0][i] = IntToStr(MassiveC[i]);
	}	
}
//---------------------------------------------------------------------------
