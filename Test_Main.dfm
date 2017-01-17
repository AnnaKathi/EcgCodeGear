object fmMain: TfmMain
  Left = 0
  Top = 0
  Caption = 'Framework ECG'
  ClientHeight = 967
  ClientWidth = 1036
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
  OnResize = FormResize
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 0
    Top = 130
    Width = 1036
    Height = 4
    Align = alTop
    Shape = bsTopLine
  end
  object splittPreprocessing: TSplitter
    Left = 361
    Top = 134
    Height = 709
    Color = clBackground
    ParentColor = False
    OnMoved = splittPreprocessingMoved
    ExplicitLeft = 248
    ExplicitTop = 184
    ExplicitHeight = 100
  end
  object mInfo: TMemo
    Left = 0
    Top = 843
    Width = 1036
    Height = 124
    Align = alBottom
    ReadOnly = True
    ScrollBars = ssBoth
    TabOrder = 0
    ExplicitTop = 567
  end
  object pInfo: TPanel
    Left = 0
    Top = 0
    Width = 1036
    Height = 33
    Align = alTop
    BevelOuter = bvNone
    ParentColor = True
    TabOrder = 1
    ExplicitWidth = 1026
    DesignSize = (
      1036
      33)
    object mHead: TMemo
      Left = 10
      Top = 7
      Width = 1018
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
      ExplicitWidth = 1008
    end
  end
  object pnFile: TPanel
    Left = 0
    Top = 33
    Width = 1036
    Height = 97
    Align = alTop
    BevelOuter = bvNone
    TabOrder = 2
    ExplicitLeft = 8
    ExplicitTop = 8
    ExplicitWidth = 561
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
  object pnPreprocessing: TPanel
    Left = 0
    Top = 134
    Width = 361
    Height = 709
    Align = alLeft
    BevelOuter = bvNone
    TabOrder = 3
    ExplicitTop = 138
    ExplicitHeight = 423
    object laPreprocessing: TLabel
      Left = 120
      Top = 6
      Width = 92
      Height = 16
      Caption = 'Preprocessing'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold, fsUnderline]
      ParentFont = False
    end
  end
  object pnAlgorithms: TPanel
    Left = 364
    Top = 134
    Width = 672
    Height = 709
    Align = alClient
    BevelOuter = bvNone
    TabOrder = 4
    ExplicitLeft = 436
    ExplicitTop = 178
    ExplicitHeight = 423
    object Bevel2: TBevel
      Left = 0
      Top = 30
      Width = 672
      Height = 4
      Align = alTop
      Shape = bsTopLine
      Visible = False
    end
    object pnAlgHeader: TPanel
      Left = 0
      Top = 0
      Width = 672
      Height = 30
      Align = alTop
      BevelOuter = bvNone
      TabOrder = 0
      object laAlgorithms: TLabel
        Left = 297
        Top = 6
        Width = 70
        Height = 16
        Caption = 'Algorithms'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = [fsBold, fsUnderline]
        ParentFont = False
      end
    end
    object pnAlgLeft: TPanel
      Left = 0
      Top = 34
      Width = 337
      Height = 675
      Align = alLeft
      BevelOuter = bvNone
      TabOrder = 1
      ExplicitHeight = 393
      object pnAlgLeftTop: TPanel
        Left = 0
        Top = 0
        Width = 337
        Height = 361
        Align = alTop
        TabOrder = 0
        object Panel4: TPanel
          Left = 1
          Top = 1
          Width = 335
          Height = 32
          Align = alTop
          BevelOuter = bvNone
          TabOrder = 0
          object laAlg1: TLabel
            Left = 104
            Top = 6
            Width = 85
            Height = 13
            Caption = 'Testalgorithmus X'
          end
        end
        object Panel5: TPanel
          Left = 1
          Top = 33
          Width = 335
          Height = 40
          Align = alTop
          BevelOuter = bvNone
          TabOrder = 1
          object btAlg1Start: TButton
            Left = 5
            Top = 6
            Width = 171
            Height = 25
            Caption = 'Start Algorithmus &1'
            TabOrder = 0
            OnClick = btAlg1StartClick
          end
        end
        object Panel6: TPanel
          Left = 1
          Top = 73
          Width = 335
          Height = 120
          Align = alTop
          BevelOuter = bvNone
          TabOrder = 2
          DesignSize = (
            335
            120)
          object img1: TImage
            Left = 5
            Top = 6
            Width = 325
            Height = 105
            Anchors = [akLeft, akTop, akRight, akBottom]
          end
        end
        object memo1: TMemo
          Left = 1
          Top = 193
          Width = 335
          Height = 150
          Align = alClient
          ReadOnly = True
          ScrollBars = ssBoth
          TabOrder = 3
          ExplicitLeft = 6
          ExplicitTop = 216
          ExplicitWidth = 325
          ExplicitHeight = 74
        end
        object pb1: TProgressBar
          Left = 1
          Top = 343
          Width = 335
          Height = 17
          Align = alBottom
          TabOrder = 4
          ExplicitTop = 296
        end
      end
      object pnAlgLeftBottom: TPanel
        Left = 0
        Top = 361
        Width = 337
        Height = 314
        Align = alClient
        TabOrder = 1
        ExplicitLeft = 104
        ExplicitTop = 192
        ExplicitWidth = 185
        ExplicitHeight = 41
        object Panel1: TPanel
          Left = 1
          Top = 1
          Width = 335
          Height = 32
          Align = alTop
          BevelOuter = bvNone
          TabOrder = 0
          object laAlg2: TLabel
            Left = 104
            Top = 6
            Width = 158
            Height = 13
            Caption = 'Testalgorithmus Y l'#228'ngerer Name'
          end
        end
        object Panel2: TPanel
          Left = 1
          Top = 33
          Width = 335
          Height = 40
          Align = alTop
          BevelOuter = bvNone
          TabOrder = 1
          object btAlg2Start: TButton
            Left = 5
            Top = 6
            Width = 171
            Height = 25
            Caption = 'Start Algorithmus &2'
            TabOrder = 0
            OnClick = btAlg2StartClick
          end
        end
        object Panel3: TPanel
          Left = 1
          Top = 73
          Width = 335
          Height = 120
          Align = alTop
          BevelOuter = bvNone
          TabOrder = 2
          DesignSize = (
            335
            120)
          object img2: TImage
            Left = 5
            Top = 6
            Width = 325
            Height = 105
            Anchors = [akLeft, akTop, akRight, akBottom]
          end
        end
        object pb2: TProgressBar
          Left = 1
          Top = 296
          Width = 335
          Height = 17
          Align = alBottom
          TabOrder = 3
        end
        object memo2: TMemo
          Left = 1
          Top = 193
          Width = 335
          Height = 103
          Align = alClient
          ReadOnly = True
          ScrollBars = ssBoth
          TabOrder = 4
          ExplicitLeft = 6
          ExplicitTop = 216
          ExplicitWidth = 325
          ExplicitHeight = 74
        end
      end
    end
    object pnAlgRight: TPanel
      Left = 337
      Top = 34
      Width = 335
      Height = 675
      Align = alClient
      BevelOuter = bvNone
      TabOrder = 2
      ExplicitLeft = 416
      ExplicitWidth = 256
      ExplicitHeight = 393
      object pnAlgRightTop: TPanel
        Left = 0
        Top = 0
        Width = 335
        Height = 361
        Align = alTop
        TabOrder = 0
        object laAlg3: TLabel
          Left = 80
          Top = 6
          Width = 207
          Height = 13
          Caption = 'Testalgorithmus wei'#223' nicht - mhdfhdhgdfgh'
        end
      end
      object pnAlgRightBottom: TPanel
        Left = 0
        Top = 361
        Width = 335
        Height = 314
        Align = alClient
        TabOrder = 1
        ExplicitLeft = 104
        ExplicitTop = 192
        ExplicitWidth = 185
        ExplicitHeight = 41
        object laAlg4: TLabel
          Left = 168
          Top = 6
          Width = 17
          Height = 13
          Caption = 'xyz'
        end
      end
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
