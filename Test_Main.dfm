object fmMain: TfmMain
  Left = 0
  Top = 0
  Caption = 'Framework ECG'
  ClientHeight = 515
  ClientWidth = 667
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poScreenCenter
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 48
    Height = 13
    Caption = 'EKG-Datei'
  end
  object btAuthX: TButton
    Left = 16
    Top = 56
    Width = 75
    Height = 25
    Caption = 'Auth Alg X'
    TabOrder = 0
    OnClick = btAuthXClick
  end
  object mInfo: TMemo
    Left = 214
    Top = 0
    Width = 453
    Height = 515
    Align = alRight
    ScrollBars = ssBoth
    TabOrder = 1
    ExplicitLeft = 472
  end
  object edFile: TEdit
    Left = 88
    Top = 13
    Width = 107
    Height = 21
    TabOrder = 2
    Text = 'edFile'
  end
  object btAlgY: TButton
    Left = 120
    Top = 56
    Width = 75
    Height = 25
    Caption = 'Auth Alg Y'
    TabOrder = 3
    OnClick = btAlgYClick
  end
end
