=========================================================================
          Epson ePOS SDK for iOS Version 2.20.0

          Copyright (C) Seiko Epson Corporation 2015 - 2021. All rights reserved.
=========================================================================

1. About this software

The Epson ePOS SDK for iOS is an SDK aimed at development engineers who 
are developing iOS applications for printing on an EPSON TM printer and 
an EPSON TM Intelligent printer.
Applications are developed using the APIs provided by Epson ePOS SDK.
Epson ePOS SDK for Android for Android devices is also provided in 
Epson ePOS SDK.
For detailed information, please see Epson ePOS SDK for iOS User's Manual.

iOS/iPadOS Versions
  iOS 12.5.5
  iOS 13 to 13.7
  iOS 14 to 14.6
  iOS 15 to 15.0.2
  iPadOS 13.1 to 13.7
  iPadOS 14 to 14.6
  iPadOS 15 to 15.0.2

Confirmation XCode Version
  XCode13

Supported TM Printers
  For detailed information, please see Epson ePOS SDK for iOS User's Manual.

Supported Interfaces
  TM Printer
    Wired LAN
    Wireless LAN
    Bluetooth
    USB
  TM Intelligent Printer
    Wired LAN
  Network Printers
    Wired LAN
    Wireless LAN

2. Supplied Files

- ePOS2.h
  Header file that includes class definitions and error value / device type 
  constant definitions.

- ePOSEasySelect.h
  Header file for selecting a printer easily

- libepos2.a
  Library for function execution 
    (armv7, armv7s, arm64, i386, x86_64 supported)

- libeposeasyselect.a
  Library for selecting a printer easily
    (armv7, armv7s, arm64, i386, x86_64 supported)

- ePOS_SDK_Sample_iOS.zip
  A sample program file

- DeviceControlProgram_Sample.zip
  This file contains sample device control programs

- EULA.en.txt
  Contains the SOFTWARE LICENSE AGREEMENT

- EULA.ja.txt
  Contains the SOFTWARE LICENSE AGREEMENT (The Japanese-language edition)

- ePOS_SDK_iOS_um_en_revx.pdf
  A user's manual

- ePOS_SDK_iOS_um_ja_revx.pdf
  A user's manual (The Japanese-language edition)

- ePOS_SDK_iOS_Migration_Guide_en_revx.pdf
  A migration guide

- ePOS_SDK_iOS_Migration_Guide_ja_revx.pdf
  A migration guide (The Japanese-language edition)

- TM-DT_Peripherals_en_revx.pdf
  This is the TM-DT Series Peripheral Device Control Guide

- TM-DT_Peripherals_ja_revx.pdf
  This is the TM-DT Series Peripheral Device Control Guide (The Japanese-language edition)

- JSON_Spec_sheet_revx.pdf
  JSON specification sheet

- README.en.txt
  This file

- README.ja.txt
  The Japanese-language edition of this file

- OPOS_CCOs_1.14.001.msi
  This is the OPOS CCO installer package

3. Remarks

- For detailed information, please see Epson ePOS SDK for iOS User's Manual.

- Under TCP/IP connection at iOS9.x, set the default gateway address to the
  network router.

- When printing process is repeated, create and destroy the instance of Printer class
  outside the iteration process and do not repeat it at short intervals.

- Call addTextLang API in first on each print data.

4. Restriction

- Discovery function of the following TM Intelligent printer doesn't support.

    TM-DT series (TM-DT software version 3.01 or earlier)
    TM-i  series (TM-i firmware version 4.30 or earlier)

  If you turn on the TM Intelligent printer after starting the search, the TM Intelligent
  printer may not be detected. In that case, leave enough time for the TM Intelligent printer
  to become printable, then start the search again.

- BluetoothConnection function of the following iOS Version execute connectDevice API,
  the application may crash in a state in which to disable the Bluetooth settings.

    iOS 10.0.1

- In iOS 11, if the application fails to connect API via Bluetooth connection, please wait
  about 100 msec before executing connect API.

5. Version History
  Version 2.20.0
    - Added support iOS/iPadOS versions
      - iOS 12.5.5, 15.0 - 15.0.2
      - iPadOS 15.0 - 15.0.2
    - Removed support iOS/iPadOS versions
      - iOS 11.x
      - iOS 12 - 12.4.3
    - Added TM printer support
      - TM-L100

  Version 2.19.0
    - Added support iOS/iPadOS versions
      - iOS 14.5, 14.6
      - iPadOS 14.5, 14.6
    - Added TM printer support
      - TM-L90 Liner-Free Label Printer Model

  Version 2.18.0
    - Added support iOS/iPadOS versions
      - iOS 14.4
      - iPadOS 14.4
    - Added TM printer support
      - TM-T88VII
    - Improved printer search speed.
    - Bug fix
      - Fixed a rare crash when using multiple classes at the same time with the printer turned off.

  Version 2.17.1
    - Added support iOS/iPadOS versions
      - iOS 14.2
      - iPadOS 14.2
    - Improved printer search function on iOS 14
    - Bug fix
      - Fixed issue that the print layout is broken when page mode is used on TM-m30II(during ESC/POS control)

  Version 2.17.0
    - Added support iOS/iPadOS versions
      - iOS 14.1
      - iPadOS 14.1
    - iOS 10.x was removed from support OS
    - Removed support iOS/iPadOS Devices
      - iPhone 5 / 5c
      - iPad 4th generation
    - Added customer display support
      - DM-D70
    - Added new functions
      - Added GetPrinterInformation API in Printer Class. 
    - Improved performance of operate API in GermanyFiscalElement class. 

  Version 2.16.0
    - Added support iOS/iPadOS versions
      - iOS 13.3.1 - 13.6
      - iPadOS 13.3.1 - 13.6
    - Added TM printer support
      - TM-m30II-S
      - TM-m30II-NT
      - TM-m50
    - Bug fix
      - Fixed issue that the ePOS SDK's reconnecting process doesn't end rarely　when the iOS device go into sleep mode during the ePOS SDK's reconnecting process. 
    - Added new functions
      - Added "CODE128 auto" parameter on addBarcode API. 

  Version 2.14.0
    - Added support iOS/iPadOS versions
      - iOS 13 to 13.3
      - iPadOS 13.1 to 13.3
    - Added TM printer support
      - TM-m30II
      - TM-m30II-H
    - Added new functions
      - Batch rotate printing
      - UTF-8 printing

  Version 2.13.0
    - Added support iOS/iPadOS versions
      - iOS 12.3 to 12.4.3
      - iOS 13 to 13.2.3
      - iPadOS 13.1 to 13.2.3
    - iOS 9.x was removed from support OS
    - Removed support iOS/iPadOS Devices
      - iPhone 4S
      - iPod touch 5th generation
      - iPad2 / iPad 3rd generation
      - iPad mini
    - Added new functions
      - GermanyFiscalElement class
      - FirmwareUpdate method in Epos2Printer class

  Version 2.12.2
    - Bug fix
      - Fixed issue where endTransaction API rarely causes an application to hang up. 

  Version 2.12.1
    - Bug fix
      - Fixed issue parameter error is rarely returned when call start API in Discovery class.
      - Fixed issue application hang up rarely when calling several API continuously.

  Version 2.12.0
    - Added iOS version support
      - iOS 12.2
    - Added TM printer support
      - TM-T20III
      - TM-T82III
    - Barcode scanner can now be connected to TM-T88VI.
    - Added the following to the package
      - Sample of simple POS application
    - Bug fix
      - Fixed issue where wrong printing when connect/disconnect API is continuously in TM-U220.
      - Fixed rarely crash when multiple responses are received from the printer at the same time.
      - Fixed issue where tablet CPU usage will be 100% when returning from sleeping after executing connect API.
      - Fixed issue where connect API takes long time depending on environment.

  Version 2.11.0
    - Added iOS version support
      - iOS 12.1
    - Added TM printer support
      - TM-T20IIIL
      - TM-T20X
      - TM-T81III
      - TM-T82X
      - TM-T82IIIL
      - TM-T83III
      - TM-T100
    - AddTextSize API and addLogo API can use in TM-U330.
    - GetAdmin API and getLocation API can use other than TM-DT series and TM-i series.
    - Bug fix
      - Fixed issue where callback of sendData API takes more than 30 seconds when the printer is offline or printer become off-line during printing.
      - Fixed crash when SimpleSerial class is used.
      - Fixed crash when sendData API is sent several times without waiting a callback of sendData API.
      - Fixed issue where parameter error is returned when addLayout API is used in TM-P80.
      - Fixed issue where connect API rarely causes an application to hang up.

  Version 2.9.2a
    - The library is the same as Ver.2.9.2.
    - Added TM printer support
      - TM-T70II-DT2
      - TM-T88VI-DT2
    - Added iOS Devices
      - iPhone 8 / 8 Plus / X
      - iPad 5th generation / 6th generation
      - iPad Pro 12.9-inch 2nd / 10.5-inch
    - Added iOS versions support
      - iOS 12 to 12.0.1
    - iOS 8.x was removed from support OS.

  Version 2.9.2
    - Bug fix
      - Fixed the TM-U330 cannot print second color at addTextStyle() and addImage().

  Version 2.9.0
    - Added iOS versions support
      - iOS 11.2.2 to 11.2.6
      - iOS 11.3 to 11.3.1
      - iOS 11.4 to 11.4.1
    - Barcode scanner can now be connnected to TM-m30.
    - Added peripheral devices support to TM-DT series
      - POSKeyboard class
      - OtherPeripheral class
      - MSR class
    - Added the following to the package
      - Sample of device control programs
      - TM-DT Series Peripheral Device Control Guide
      - OPOS CCO installer package
    - The disconnection detection time can be set on the TM-DT side.
    - Status update events other than EPOS2_EVENT_POWER_OFF are now notified immediately,
      regardless of the value of interval, only when the device ID is not added to
      the target parameter of connect () of the Printer class.
    - Updated the OpenSSL embedded in the library from version 1.0.2k to version 1.0.2o.
    - Bug fix
      - Fixed the Printer class does not correctly notify errors during printing.
      - Fixed the application hangs up when disconnect is executed after transitioning
        the application to the background with the Printer connected by Bluetooth connection,
        returning it to the foreground.
      - Fixed causes link error with some third party libraries.
      - Fixed a phenomenon in which a TM printer that does not support LineDisplay connection
        executes connect when the printer is in the offline state and executes sendData after that,
        no offline factor error is returned and a TIMEOUT error is returned.
      - Fixed printing of Printer or display of LineDisplay might be delayed by the monitoring
        interval of status monitor.
      - Fixed the application may be forcibly terminated if a physical communication disconnection
        (disconnection of the LAN cable, etc.) occurs during execution of the connect API on
        TCP connection.
      - Fixed parseNFC() may fail in the network environment where UB-E03 exists.

  Version 2.7.0
    - Added TM printer support
      - TM-H6000V
    - Added support device
      - DM-D210
    - Added devices class support
      - HybridPrinter class
    - Added iOS versions support
      - iOS 11.0.1 to 11.0.3
      - iOS 11.1 to 11.1.2
      - iOS 11.2 to 11.2.1
    - Keep the TCP connection even though no data transmitted.
    - Using TM-U330, QR Code, Code 39, Code 128 can be printed.
    - Bug fix
      - Fixed the stop API of Epos2Discovery class may take time to execute.
      - Fixed a phenomenon that the application may be forcibly terminated when
        physical communication disconnection (disconnection of LAN cable, etc.)
        occurs while connecting with TCPS.
      - Fixed the application may be forcibly terminated when searching for a
        network-connected printer.

  Version 2.6.0
    - Added TM printer support
      - TM-T88VI Japanese model
    - Added iOS versions support
      - iOS 11
    - iOS 7.x was removed from support OS.
    - Added NFC support
    - Added sample program of Swift 3.1.

  Version 2.5.2
    - Added iOS versions support
      - iOS 10.3 to 10.3.2
    - Bug Fixed
      - Fixed the application may hang up,
        when disconnect () is executed on another thread immediately after onPtrReceive () is called.

  Version 2.5.1a
    - Corrected the mistake of user's manual (The Japanese-language edition).

  Version 2.5.1
    - Added iOS versions support
      - iOS 10.2 to 10.2.1
    - If the customer display is connected to the TM printer and communication is disconnected
      due to the printer's power OFF / ON, etc., communication will be restored by reconnecting
      with either the printer or the customer display.
    - Added "EPOS2_COVER_OPEN" to autoRecoverError of PrinterStatusInfo.
    - Added "EPOS2_CODE_ERR_REQUEST_ENTITY_TOO_LARGE" that returns when print job data with the size
      exceeding the capacity of the printer firmware was transmitted.
    - Updated the OpenSSL embedded in the library from version 1.0.2h to version 1.0.2k.
    - Bug Fixed
      - Fixed "EPOS2_ERR_NOT_FOUND" may be returned when executing the disconnect API of LineDisplay.
      - Fixed the initial value of the status monitor update interval may be 1 second.
      - Fixed the application may be terminated if status monitor is enabled for TM intelligent
        printer with SSL enabled.
      - Fixed in case of TCP/IP connection, the application may be terminated when search start
        and stop repeatedly.
      - Fixed the application be terminated when getCommHistory API and disconnect API
        are executed sequentially when CommBox has transmission history.

  Version 2.5.0
    - Added TM printer support
      - TM-P80 Japanese model
    - Bug Fixed
      - Fixed the application may hang up when turning off the printer at disconnect API execution.
      - Fixed the sendData API callback may not be notified when offline occurs while printing with TM-P series.

  Version 2.4.2
    - Bug Fixed
      - Fixed printable width of addImage API, when the printer supports 42 columns mode.

  Version 2.4.0
    - iOS 6.x was removed from support OS.
    - Added TM printer support
      - TM-T88VI-iHUB
      - TM-T81II Vietnam model
      - TM-m30 South Asia model
    - Added iOS versions support
      - iOS 10.0.1
    - Added iOS device support
      - iPhone SE
      - iPhone 7
      - iPhone 7 Plus
    - Added iBeacon support
    - Added SSL communication support
    - Added multi-lingual keyboard support
    - Changed of sample program constitution
    - Bug Fixed
      - Fixed a secondary connection I/F may fail printing.
      - Fixed printing notification may takes time when printing from a secondary connection I/F.
      - Fixed incorrect information may be returned by getPrefix API.
      - Fixed the search result for a peripheral device of intelligent printer.
         (The contents of the DeviceInfo structure might not be correct.)
      - Fixed the next sendData API may fail even though printer is online when previous sendData API
        was called while printer was offline.
      - Fixed in case of TCP/IP connection, application may hang up when you execute disconnect API,
        when the sendData API became the error of transmission failure.
    - Added "EPOS2_CODE_ERR_TOO_MANY_REQUESTS" that returns when the number of print jobs or data to be displayed
      on a display has exceeded the allowable limit of the printer's firmware.

  Version 2.3.0
    - iOS 9.3.x was removed from support OS.
    - Added TM printer support
      - TM-T60
      - TM-m30 Korean model
    - Bug Fixed
      - Fixed disconnect API may not returned when the API is called.
        * This situation only happen with TM Intelligent Printers.

  Version 2.2.0
    - Added iOS versions support
      - iOS 9.3.2
    - Added iOS device support
      - iPad Pro ( 9.7-inch )
    - Added support for the following requirements of the App Store.
      - All apps submitted to the App Store must support IPv6-only networking.

  Version 2.1.0
    - Added TM printer support
      - TM-T88VI
    - Added iOS versions support
      - iOS 9.1 to 9.3.1
    - Added iOS device support
      - iPad Pro ( 12.9-inch )
    - Added Bitcode support
    - Added a Swift sample program(ePOS2_Printer_Swift)
    - Added a function getSdkVersion to retlieve SDK version in Epos2Log class
    - Improved TM-U220 functions.
      - Added double density of addImageAsync API in Printer class
      - Added second color of addTextStyle API in Printer class
      - Added addTextSize API in Printer class
      - Added addLogo API in Printer class
    - Bug Fixed
      - Fixed the rest of data is printed when OFFLINE condition happened
        while printing and then the OFFLINE condition is resolved.
      - Fixed printer status is "Connected" even though turn off printer
        while printing.
        * This situation only happen with TM-P20/TM-P60II/TM-m10/TM-m30/TM-T90II.
      - Fixed disconnection event may not occur when disconnect API is called.
      - Fixed the addFeedPosition API can not feed paper correctly.

  Version 2.0.0
    - New release

