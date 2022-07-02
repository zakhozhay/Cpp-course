//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "SentenceParsingUnit.h"
#include "InterpretationUnit.h"
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
void __fastcall TMainForm::SentenceParsingButtonClick(TObject *Sender)
{
	SentenceForm -> ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::InterpretationButtonClick(TObject *Sender)
{
	InterpretationForm -> ShowModal();
}
//---------------------------------------------------------------------------

