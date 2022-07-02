object InterpretationForm: TInterpretationForm
  Left = 0
  Top = 0
  Caption = #1042#1080#1082#1086#1088#1080#1089#1090#1072#1085#1085#1103' '#1110#1085#1090#1077#1088#1087#1088#1077#1090#1072#1094#1110#1111' '#1076#1083#1103' '#1082#1077#1088#1091#1074#1072#1085#1085#1103
  ClientHeight = 525
  ClientWidth = 843
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  PixelsPerInch = 96
  TextHeight = 15
  object Label1: TLabel
    Left = 8
    Top = 111
    Width = 403
    Height = 15
    Caption = 
      #1053#1072#1095#1085#1110#1090#1100'  '#1088#1103#1076#1086#1082' '#1079' '#1089#1080#1084#1074#1086#1083#1091' "?" '#1090#1072' '#1085#1072#1090#1080#1089#1085#1110#1090#1100' <Enter> '#1076#1083#1103' '#1086#1090#1088#1080#1084#1072#1085#1085#1103' ' +
      #1076#1086#1074#1110#1076#1082#1080
  end
  object Panel1: TPanel
    Left = 8
    Top = 8
    Width = 97
    Height = 97
    Caption = '1'
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 0
  end
  object Panel2: TPanel
    Left = 111
    Top = 8
    Width = 98
    Height = 97
    Caption = '2'
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 1
  end
  object Panel3: TPanel
    Left = 215
    Top = 8
    Width = 98
    Height = 97
    Caption = '3'
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 2
  end
  object Panel4: TPanel
    Left = 319
    Top = 8
    Width = 100
    Height = 97
    Caption = '4'
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 3
  end
  object CMDMemo: TMemo
    Left = 8
    Top = 127
    Width = 411
    Height = 250
    TabOrder = 4
    OnKeyPress = CMDMemoKeyPress
  end
end
