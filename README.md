==========================================================================
          ePOS-Print SDK for iOS  Version 1.3.4

                                  Copyright(C) 2013 Seiko Epson Corp.
==========================================================================

1. About this software

The ePOS-Print SDK for iOS is an SDK aimed at development engineers who 
are developing iOS applications for printing on an EPSON TM printer.
Applications are developed using the APIs provided by ePOS-Print SDK.
ePOS-Print SDK for Android for Android devices is also provided in 
ePOS-Print SDK.
For detailed information, please see ePOS-Print SDK for iOS User's Manual.

iOS Versions
  iOS 4.2 to 4.3.5
  iOS 5.0 to 5.1.1
  iOS 6.0 to 6.1.4
  iOS 7.0 to 7.0.3

iOS Devices
  iPhone ( 3G / 3GS / 4 / 4S / 5 / 5c / 5s )
  iPod touch ( 2nd generation / 3rd generation / 4th generation / 5th generation )
  iPad / iPad2 / iPad ( 3rd generation / 4th generation )
  iPad mini

Supported Printers
  EPSON TM-T88V
  EPSON TM-T70
  EPSON TM-T70II
  EPSON TM-T20
  EPSON TM-T82
  EPSON TM-T81II
  EPSON TM-T82II
  EPSON TM-U220 series
  EPSON TM-P60
  EPSON TM-P60II
  EPSON TM-T90II
  EPSON TM-T20II
  EPSON TM-P80

Supported Interfaces
  Wired LAN
  Wireless LAN


2. Supplied Files

- ePOS-Print.h
  Header file that includes class definitions and error value / device type 
  constant definitions.
- libeposprint.a
  Library for function execution. (armv6, armv7, armv7s, arm64, i386 supported)
- ePOS-Print_Sample_iOS.zip
  A sample program file.
- EULA.en.txt
  Contains the SOFTWARE LICENSE AGREEMENT.
- EULA.jp.txt
  Contains the SOFTWARE LICENSE AGREEMENT. (The Japanese-language edition)
- ePOS-Print_SDK_iOS_E_RevI.pdf
  A user's manual.
- ePOS-Print_SDK_iOS_J_RevI.pdf
  A user's manual. (The Japanese-language edition)
- README.en.txt
  This file.
- README.jp.txt
  The Japanese-language edition of this file.

3. Remarks

- For detailed information, please see ePOS-Print SDK for iOS User's Manual.

4. Modification from the old version

  Version 1.3.4
    - Added the support iOS version.
      - iOS 7.0 to 7.0.3
    - Added the support iOS Devices.
      - iPhone 5c
      - iPhone 5s
    - Bug Fixed.
      - The closePriner method may fail during printer status monitoring.
      - When printer is offline, the openPrinter method may not return 
        the correct printer status under Bluetooth connection.

  Version 1.3.3
    - Improved the text printing speed.

  Version 1.3.2
    - Added the support printers.
      - TM-T20II
      - TM-P80

  Version 1.3.1
    - Added the support printers.
      - TM-T90II

  Version 1.3.0
    - Added the log output function.
    - Added the support printers.
      - TM-T70II
    - Added the support iOS version.
      - iOS 6.0.2 to 6.1.4

  Version 1.2.0
    - Added a command generation API for controlling the label.
    - Added a command generation API to set the paper layout.
    - Added the support printers.
      - TM-T82II
    - Added the support iOS version.
      - iOS 6.0.1
    - Added the support iOS Devices.
      - iPad ( 4th generation )
      - iPad mini

  Version 1.1.0
    - Added the printer status monitoring function.
    - Added the halftone method for raster graphic printing.
    - Support multiple tone printing.
    - Added the support languages.
      - Simplified Chinese
      - Traditional Chinese
      - Korean
      - Thai
      - Vietnamese
    - Added the battery status monitoring function.
    - Added the support printers.
      - TM-T20
      - TM-T82
      - TM-T81II
      - TM-P60II
      - TM-P60 (Wireless LAN)

  Version 1.0.1
    - Added the support iOS version.
      - iOS 6.0
    - Added the support iOS Devices.
      - iPhone 5
      - iPod touch ( 5th generation )
      - iPad ( 3rd generation )

  Version 1.0.0
    - New release. 
