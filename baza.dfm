object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 361
  ClientWidth = 990
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 648
    Top = 56
    Width = 11
    Height = 13
    Caption = 'ID'
    FocusControl = DBEdit1
  end
  object Label3: TLabel
    Left = 648
    Top = 96
    Width = 18
    Height = 13
    Caption = 'OIB'
    FocusControl = DBEdit2
  end
  object Label4: TLabel
    Left = 648
    Top = 136
    Width = 38
    Height = 13
    Caption = 'Cijepivo'
    FocusControl = DBEdit3
  end
  object Label5: TLabel
    Left = 648
    Top = 176
    Width = 31
    Height = 13
    Caption = 'Datum'
    FocusControl = DBEdit4
  end
  object Label1: TLabel
    Left = 161
    Top = 203
    Width = 81
    Height = 13
    Caption = 'Vrijeme pristupa:'
  end
  object DBGrid1: TDBGrid
    Left = 248
    Top = 8
    Width = 320
    Height = 120
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Width = 30
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'OIB'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Cijepivo'
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Datum'
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 248
    Top = 134
    Width = 240
    Height = 25
    DataSource = DataSource1
    TabOrder = 1
  end
  object DateTimePicker1: TDateTimePicker
    Left = 248
    Top = 176
    Width = 186
    Height = 21
    Date = 44374.000000000000000000
    Time = 0.635920243053988100
    TabOrder = 2
    Visible = False
  end
  object ListView1: TListView
    Left = 248
    Top = 203
    Width = 209
    Height = 150
    Columns = <
      item
        Caption = 'Time'
        Width = 100
      end
      item
        Caption = 'Date'
        Width = 100
      end>
    TabOrder = 3
    ViewStyle = vsReport
  end
  object DBEdit1: TDBEdit
    Left = 648
    Top = 72
    Width = 134
    Height = 21
    DataField = 'ID'
    DataSource = DataSource1
    TabOrder = 4
  end
  object DBEdit2: TDBEdit
    Left = 648
    Top = 112
    Width = 134
    Height = 21
    DataField = 'OIB'
    DataSource = DataSource1
    TabOrder = 5
  end
  object DBEdit3: TDBEdit
    Left = 648
    Top = 152
    Width = 100
    Height = 21
    DataField = 'Cijepivo'
    DataSource = DataSource1
    TabOrder = 6
  end
  object DBEdit4: TDBEdit
    Left = 648
    Top = 192
    Width = 100
    Height = 21
    DataField = 'Datum'
    DataSource = DataSource1
    TabOrder = 7
  end
  object IdTCPServer1: TIdTCPServer
    Active = True
    Bindings = <>
    DefaultPort = 44444
    OnExecute = IdTCPServer1Execute
    Left = 712
    Top = 248
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.ACE.OLEDB.12.0;User ID=Admin;Data Source=C:\U' +
      'sers\fpodg\Desktop\Projekt\SOAP\cijepiva.accdb;Mode=Share Deny N' +
      'one;Persist Security Info=False;Jet OLEDB:System database="";Jet' +
      ' OLEDB:Registry Path="";Jet OLEDB:Database Password="";Jet OLEDB' +
      ':Engine Type=6;Jet OLEDB:Database Locking Mode=1;Jet OLEDB:Globa' +
      'l Partial Bulk Ops=2;Jet OLEDB:Global Bulk Transactions=1;Jet OL' +
      'EDB:New Database Password="";Jet OLEDB:Create System Database=Fa' +
      'lse;Jet OLEDB:Encrypt Database=False;Jet OLEDB:Don'#39't Copy Locale' +
      ' on Compact=False;Jet OLEDB:Compact Without Replica Repair=False' +
      ';Jet OLEDB:SFP=False;Jet OLEDB:Support Complex Data=False;Jet OL' +
      'EDB:Bypass UserInfo Validation=False'
    Mode = cmShareDenyNone
    Provider = 'Microsoft.ACE.OLEDB.12.0'
    Left = 64
    Top = 40
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'cijepljenje'
    Left = 32
    Top = 160
    object ADOTable1ID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object ADOTable1OIB: TIntegerField
      FieldName = 'OIB'
    end
    object ADOTable1Cijepivo: TWideStringField
      FieldName = 'Cijepivo'
      Size = 255
    end
    object ADOTable1Datum: TDateTimeField
      FieldName = 'Datum'
    end
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 40
    Top = 104
  end
  object IdUDPServer1: TIdUDPServer
    Active = True
    Bindings = <>
    DefaultPort = 22222
    OnUDPRead = IdUDPServer1UDPRead
    Left = 808
    Top = 248
  end
  object XMLDocument1: TXMLDocument
    Active = True
    FileName = 'C:\Users\fpodg\Desktop\Projekt\SOAP\vrijeme.xml'
    Left = 344
    Top = 256
  end
end
