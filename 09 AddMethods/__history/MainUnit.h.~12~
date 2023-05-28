// Усі нові властивості і метод класа MainForm записані в роздід public, 
// для того щоб була змога звертатися до них з інших класів
//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *MassiveAStringGrid;
	TLabel *Label1;
	TStringGrid *MassiveBStringGrid;
	TLabel *Label2;
	TStringGrid *MassiveCStringGrid;
	TLabel *Label3;
	TButton *GenerateButton;
	TButton *MultiplicateButton;
	TButton *MinMaxButton;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *MinimumEdit;
	TEdit *MaximumEdit;
	TButton *ManualInputButton;
	TCheckBox *InputModeCheckBox;
	void __fastcall InputModeCheckBoxClick(TObject *Sender);
	void __fastcall GenerateButtonClick(TObject *Sender);
	void __fastcall ManualInputButtonClick(TObject *Sender);
	void __fastcall MultiplicateButtonClick(TObject *Sender);
	void __fastcall MinMaxButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations

	int MassiveA[3][3], MassiveB[3], MassiveC[3]; // Масиви створюються як властивості класа TMainForm
	int __fastcall MassiveMinMax(int[3], std::string); // Функція створюється як метод класу TMainForm

	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
