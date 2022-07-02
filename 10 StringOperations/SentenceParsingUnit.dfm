object SentenceForm: TSentenceForm
  Left = 0
  Top = 0
  Caption = #1056#1086#1079#1073#1110#1088' '#1088#1077#1095#1077#1085#1085#1103
  ClientHeight = 433
  ClientWidth = 895
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
    Top = 8
    Width = 93
    Height = 15
    Caption = #1047#1072#1074#1076#1072#1085#1077' '#1088#1077#1095#1077#1085#1085#1103
  end
  object Label2: TLabel
    Left = 8
    Top = 64
    Width = 134
    Height = 15
    Caption = #1053#1086#1088#1084#1072#1083#1110#1079#1086#1074#1072#1085#1077' '#1088#1077#1095#1077#1085#1085#1103
  end
  object Label3: TLabel
    Left = 8
    Top = 120
    Width = 250
    Height = 15
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090' '#1088#1086#1079#1073#1086#1088#1091' '#1085#1086#1088#1084#1072#1083#1110#1079#1086#1074#1072#1085#1086#1075#1086' '#1088#1077#1095#1077#1085#1085#1103
  end
  object IsueSentenceEdit: TEdit
    Left = 8
    Top = 24
    Width = 809
    Height = 23
    BorderStyle = bsNone
    TabOrder = 0
    Text = 
      #1058#1091#1090' '#1084#1086#1078#1085#1072' '#1074#1074#1077#1089#1090#1080' '#1073#1091#1076#1100'-'#1103#1082#1077' '#1088#1077#1095#1077#1085#1085#1085#1103' '#1076#1083#1103' '#1090#1086#1075#1086', '#1097#1086#1073' '#1087#1086#1073#1072#1095#1080#1090#1080' '#1088#1086#1073#1086#1090#1091 +
      ' '#1072#1083#1075#1086#1088#1080#1090#1084#1072' '#1087#1086' '#1074#1110#1076#1110#1083#1077#1085#1085#1102' '#1086#1082#1088#1077#1084#1080#1093' '#1089#1083#1110#1074'.'
  end
  object ParsingButton: TButton
    Left = 440
    Top = 128
    Width = 75
    Height = 25
    Caption = #1056#1086#1079#1110#1073#1088#1072#1090#1080
    TabOrder = 1
    OnClick = ParsingButtonClick
  end
  object Memo1: TMemo
    Left = 8
    Top = 141
    Width = 337
    Height = 265
    ScrollBars = ssBoth
    TabOrder = 2
  end
  object NormalizedSentenceEdit: TEdit
    Left = 8
    Top = 80
    Width = 809
    Height = 23
    Enabled = False
    TabOrder = 3
    StyleName = 'Windows'
  end
end
