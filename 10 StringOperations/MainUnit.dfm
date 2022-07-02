object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = #1054#1087#1077#1088#1072#1094#1110#1111' '#1079#1110' '#1089#1090#1088#1086#1082#1086#1074#1080#1084#1080' '#1076#1072#1085#1080#1084#1080
  ClientHeight = 433
  ClientWidth = 622
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  PixelsPerInch = 96
  TextHeight = 15
  object SentenceParsingButton: TButton
    Left = 8
    Top = 8
    Width = 97
    Height = 25
    Caption = #1056#1086#1079#1073#1110#1088' '#1088#1077#1095#1077#1085#1085#1103
    TabOrder = 0
    OnClick = SentenceParsingButtonClick
  end
  object InterpretationButton: TButton
    Left = 111
    Top = 8
    Width = 97
    Height = 25
    Caption = #1030#1085#1090#1077#1088#1087#1088#1077#1090#1072#1094#1110#1103
    TabOrder = 1
    OnClick = InterpretationButtonClick
  end
end
