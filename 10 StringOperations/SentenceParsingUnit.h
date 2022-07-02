//---------------------------------------------------------------------------

#ifndef SentenceParsingUnitH
#define SentenceParsingUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TSentenceForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *IsueSentenceEdit;
	TLabel *Label1;
	TButton *ParsingButton;
	TMemo *Memo1;
	TLabel *Label2;
	TEdit *NormalizedSentenceEdit;
	TLabel *Label3;
	void __fastcall ParsingButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSentenceForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSentenceForm *SentenceForm;
//---------------------------------------------------------------------------
#endif
