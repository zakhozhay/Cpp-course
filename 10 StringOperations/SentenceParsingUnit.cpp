//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SentenceParsingUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSentenceForm *SentenceForm;
//---------------------------------------------------------------------------
__fastcall TSentenceForm::TSentenceForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString SentenceNormalizing(AnsiString str)
{
	while (str.Pos("  ") != 0) {
		str = str.Delete(str.Pos("  "), 1);
    }

	return str;
}
//---------------------------------------------------------------------------
AnsiString WordProcessing(AnsiString str)
{
	str = str.Trim();
	for (int i = 1; i <= str.Length() ; i++) {
		if (str[i] == ',' || str[i] == '.' || str[i] == ':' || str[i] == ';') {   
			str = str.Delete(i, 1);    
		}
	}
	return str;
}
//---------------------------------------------------------------------------
void __fastcall TSentenceForm::ParsingButtonClick(TObject *Sender)
{
	Memo1 -> Lines -> Clear();
	NormalizedSentenceEdit -> Text =  SentenceNormalizing(IsueSentenceEdit -> Text);
	AnsiString word, line = NormalizedSentenceEdit -> Text;	 
											 
	line = line.Trim();
	
	while(line.Pos(" ") != 0) {
		word = line.SubString(1, line.Pos(" "));
		word = WordProcessing(word);
		if (word != "-") {
			Memo1->Lines->Add(word);    
		}
		line.Delete(1, line.Pos(" "));
		
	} 
		Memo1->Lines->Add(line);	
}
//---------------------------------------------------------------------------
