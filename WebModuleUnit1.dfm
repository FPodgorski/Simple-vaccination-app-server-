object WebModule1: TWebModule1
  OldCreateOrder = False
  Actions = <
    item
      Default = True
      Name = 'DefaultHandler'
      PathInfo = '/'
      OnAction = WebModule1DefaultHandlerAction
    end
    item
      MethodType = mtGet
      Name = 'vrijemeAct'
      PathInfo = '/vrj'
      OnAction = WebModule1vrijemeActAction
    end
    item
      MethodType = mtPost
      Name = 'pristupAct'
      PathInfo = '/pri'
      OnAction = WebModule1pristupActAction
    end>
  Height = 230
  Width = 415
  object HTTPSoapDispatcher1: THTTPSoapDispatcher
    Dispatcher = HTTPSoapCppInvoker1
    WebDispatch.PathInfo = 'soap*'
    Left = 60
    Top = 11
  end
  object HTTPSoapCppInvoker1: THTTPSoapCppInvoker
    Converter.Options = [soSendMultiRefObj, soTryAllSchema, soUTF8InHeader]
    Left = 60
    Top = 67
  end
  object WSDLHTMLPublish1: TWSDLHTMLPublish
    WebDispatch.MethodType = mtAny
    WebDispatch.PathInfo = 'wsdl*'
    PublishOptions = [poUTF8ContentType]
    Left = 60
    Top = 123
  end
end
