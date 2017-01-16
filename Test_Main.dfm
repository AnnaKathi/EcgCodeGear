object fmMain: TfmMain
  Left = 0
  Top = 0
  Caption = 'Framework ECG'
  ClientHeight = 692
  ClientWidth = 1026
  Color = clMoneyGreen
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnKeyPress = FormKeyPress
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 0
    Top = 33
    Width = 1026
    Height = 8
    Align = alTop
    Shape = bsTopLine
  end
  object splitterMain: TSplitter
    Left = 505
    Top = 41
    Width = 6
    Height = 651
    ExplicitLeft = 608
    ExplicitTop = 47
  end
  object mInfo: TMemo
    Left = 511
    Top = 41
    Width = 515
    Height = 651
    Align = alClient
    ScrollBars = ssBoth
    TabOrder = 0
  end
  object pInfo: TPanel
    Left = 0
    Top = 0
    Width = 1026
    Height = 33
    Align = alTop
    BevelOuter = bvNone
    ParentColor = True
    TabOrder = 1
    DesignSize = (
      1026
      33)
    object mHead: TMemo
      Left = 10
      Top = 7
      Width = 1008
      Height = 17
      Anchors = [akLeft, akTop, akRight, akBottom]
      BorderStyle = bsNone
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = [fsItalic]
      Lines.Strings = (
        
          'Test f'#252'r Framework ECG, simuliert die Authentifizierung mit mehr' +
          'eren Algorithmen anhand einer Csv-Datei')
      ParentColor = True
      ParentFont = False
      ReadOnly = True
      TabOrder = 0
    end
  end
  object pnMain: TPanel
    Left = 0
    Top = 41
    Width = 505
    Height = 651
    Align = alLeft
    BevelOuter = bvNone
    ParentColor = True
    TabOrder = 2
    object Bevel2: TBevel
      Left = 0
      Top = 97
      Width = 505
      Height = 8
      Align = alTop
      Shape = bsTopLine
      ExplicitWidth = 673
    end
    object pnFile: TPanel
      Left = 0
      Top = 0
      Width = 505
      Height = 97
      Align = alTop
      BevelOuter = bvNone
      TabOrder = 0
      object Label2: TLabel
        Left = 8
        Top = 13
        Width = 63
        Height = 13
        Caption = 'ECG Inputfile'
      end
      object Label3: TLabel
        Left = 8
        Top = 40
        Width = 49
        Height = 13
        Caption = 'Von Index'
      end
      object Label5: TLabel
        Left = 8
        Top = 67
        Width = 44
        Height = 13
        Caption = 'Bis Index'
      end
      object Label4: TLabel
        Left = 185
        Top = 40
        Width = 50
        Height = 13
        Caption = 'Von M.Sek'
      end
      object Label6: TLabel
        Left = 185
        Top = 67
        Width = 45
        Height = 13
        Caption = 'Bis M.Sek'
      end
      object Label7: TLabel
        Left = 355
        Top = 40
        Width = 47
        Height = 13
        Caption = 'Min. Wert'
      end
      object Label8: TLabel
        Left = 355
        Top = 67
        Width = 51
        Height = 13
        Caption = 'Max. Wert'
      end
      object btInputfile: TSpeedButton
        Left = 473
        Top = 10
        Width = 23
        Height = 22
        Caption = '...'
        OnClick = btInputfileClick
      end
      object edInputfile: TEdit
        Left = 77
        Top = 10
        Width = 396
        Height = 21
        TabOrder = 0
        Text = 'edInputfile'
      end
      object edBisIdx: TEdit
        Left = 77
        Top = 64
        Width = 60
        Height = 21
        TabOrder = 2
      end
      object edVonIdx: TEdit
        Left = 77
        Top = 37
        Width = 60
        Height = 21
        TabOrder = 1
      end
      object edBisMsec: TEdit
        Left = 248
        Top = 64
        Width = 60
        Height = 21
        TabOrder = 4
      end
      object edVonMsec: TEdit
        Left = 248
        Top = 37
        Width = 60
        Height = 21
        TabOrder = 3
      end
      object edMaxWert: TEdit
        Left = 413
        Top = 64
        Width = 60
        Height = 21
        TabOrder = 6
      end
      object edMinWert: TEdit
        Left = 413
        Top = 37
        Width = 60
        Height = 21
        TabOrder = 5
      end
    end
    object btAlgY: TButton
      Left = -4
      Top = 307
      Width = 75
      Height = 25
      Caption = 'Auth Alg Y'
      TabOrder = 1
      OnClick = btAlgYClick
    end
    object btAuthX: TButton
      Left = -4
      Top = 278
      Width = 75
      Height = 25
      Caption = 'Auth Alg X'
      TabOrder = 2
      OnClick = btAuthXClick
    end
    object pbJob: TProgressBar
      Left = 3
      Top = 103
      Width = 496
      Height = 17
      TabOrder = 3
    end
  end
  object tStartup: TTimer
    Enabled = False
    Interval = 100
    OnTimer = tStartupTimer
    Left = 248
    Top = 24
  end
  object OpenDialog: TOpenDialog
    Filter = 'CSV-Dateien|*.csv'
    Left = 280
    Top = 24
  end
end
