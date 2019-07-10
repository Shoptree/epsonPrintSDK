Pod::Spec.new do |s|
  s.name         = 'epsonPrintSDK'
  s.version      = '2.12.0'
  s.summary      = 'Epson ePOS_SDK_iOS_v2.12.0 for iOS'
  s.description  = <<-DESC
                    The Epson ePOS SDK for iOS is an SDK aimed at development engineers who 
                    are developing iOS applications for printing on an EPSON TM printer and 
                    an EPSON TM Intelligent printer.
                    Applications are developed using the APIs provided by Epson ePOS SDK.
                    Epson ePOS SDK for Android for Android devices is also provided in 
                    Epson ePOS SDK.
                    For detailed information, please see Epson ePOS SDK for iOS User's Manual.
                   DESC
  s.homepage     = 'https://download.epson-biz.com/modules/pos/index.php?page=soft&scat=58'
  s.license      = { :type => 'Commercial', :file => 'LICENSE' }
  s.author       = { 'SEIKO EPSON CORPORATION' => 'contact@epson.com' }
  s.platform     = :ios, '5.0'
  s.source       = { :git => 'https://github.com/Shoptree/epsonPrintSDK.git', :tag => s.version.to_s }
  s.source_files  = '*.h'
  s.preserve_paths = 'libepos2.a'
  s.frameworks = 'UIKit', 'CoreGraphics', 'ExternalAccessory'
  s.library   = 'epos2', 'z', 'xml2.2'
  s.xcconfig  =  { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/epsonPrintSDK"' }
end