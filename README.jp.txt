==========================================================================
          ePOS-Print SDK for iOS  Version 1.4.2

          Copyright Seiko Epson Corporation 2012-2014 All rights reserved.
==========================================================================

1.本ソフトウェアについて

ePOS-Print SDK for iOS は、EPSON TMプリンターに印刷するための
iOSアプリケーションを開発する、開発者向けSDKです。
ePOS-Print SDK で提供するAPIを使用してアプリケーションを開発します。
ePOS-Print SDK には、Androidデバイス向けの ePOS-Print SDK for Android も
用意されています。
詳細は ePOS-Print SDK for iOS ユーザーズマニュアル を参照ください。

対応iOSバージョン
  iOS 4.2 - 4.3.5
  iOS 5.0 - 5.1.1
  iOS 6.0 - 6.1.4
  iOS 7.0 - 7.0.4

対応iOS端末
  iPhone ( 3G / 3GS / 4 / 4S / 5 / 5c / 5s )
  iPod touch ( 第2世代 / 第3世代 / 第4世代 / 第5世代 )
  iPad / iPad2 / iPad ( 第3世代 / 第4世代 ) / iPad Air
  iPad mini / iPad mini with Retina display

サポートプリンター
  EPSON TM-T88V
  EPSON TM-T70
  EPSON TM-T70II
  EPSON TM-T20（海外モデルのみ）
  EPSON TM-T82（海外モデルのみ）
  EPSON TM-T81II（海外モデルのみ）
  EPSON TM-T82II（海外モデルのみ）
  EPSON TM-U220 シリーズ（海外モデルのみ）
  EPSON TM-P60（海外モデルのみ）
  EPSON TM-P60II
  EPSON TM-T90II
  EPSON TM-T20II
  EPSON TM-P80（海外モデルのみ）

サポートインターフェイス
  有線LAN
  無線LAN
  Bluetooth


2.提供ファイル

・ePOS-Print.h
  クラス定義、エラー値／デバイスタイプの定数定義を含むヘッダーファイルです。
・libeposprint.a
  機能実行用ライブラリーです。（ARMv6, ARMv7, ARMv7s, ARM64, i386 に対応）
・ePOS-Print_Sample_iOS.zip
  サンプルプログラムファイルです。
・EULA.jp.txt
  SOFTWARE LICENSE AGREEMENT が記載されています。
・EULA.en.txt
  SOFTWARE LICENSE AGREEMENT（英語版）が記載されています。
・ePOS-Print_SDK_iOS_J_RevL.pdf
  ユーザーズマニュアルです。
・ePOS-Print_SDK_iOS_E_RevL.pdf
  ユーザーズマニュアル（英語版）です。
・README.jp.txt
  本書です。
・README.en.txt
  本書（英語版）です。


3.その他留意点

・使用方法、使用上の注意、等の詳細は、ユーザーズマニュアルを参照し、
  ご使用ください。


4.旧バージョンからの変更点

  Version 1.4.2
    ・不具合修正。
      ・sendDataメソッド実行時のステータスが正しくないことがある

  Version 1.4.1
    ・不具合修正。
      ・バッテリー非搭載のプリンターでopenPrinterメソッド、sendDataメソッドを
        実行すると、約1秒の遅延が発生する。

  Version 1.4.0
    ・サポートインターフェイスを追加。
      ・Bluetooth

  Version 1.3.5
    ・対応iOSバージョンを追加。
      ・iOS 7.0.4
    ・対応iOS端末を追加。
      ・iPad mini with Retina display
    ・機能改善。
      ・iOS7のiOS端末とTMプリンターをAdhocモードでTCP接続した際の
        プリンター検索機能の改善。

  Version 1.3.4a
    ・対応iOS端末を追加。
      ・iPad Air

  Version 1.3.4
    ・対応iOSバージョンを追加。
      ・iOS 7.0 - 7.0.3
    ・対応iOS端末を追加。
      ・iPhone 5c
      ・iPhone 5s
    ・不具合修正。
      ・プリンターステータスを監視中に、closePrinterメソッドを
        実行すると失敗する場合がある。
      ・Bluetooth接続使用時、オフライン状態でopenPrinterメソッドを
        実行すると正常なプリンターステータスを取得できない。

  Version 1.3.3
    ・テキスト印字の速度改善。

  Version 1.3.2
    ・サポートプリンターを追加。
      ・TM-T20II
      ・TM-P80

  Version 1.3.1
    ・サポートプリンターを追加。
      ・TM-T90II

  Version 1.3.0
    ・ログ出力機能を追加。
    ・サポートプリンターを追加。
      ・TM-T70II
    ・対応iOSバージョンを追加。
      ・iOS 6.0.2 - 6.1.4

  Version 1.2.0
    ・ラベル制御用のコマンド生成APIを追加。
    ・用紙レイアウトを設定するためのコマンド生成APIを追加。
    ・サポートプリンターを追加。
      ・TM-T82II
    ・対応iOSバージョンを追加。
      ・iOS 6.0.1
    ・対応iOS端末を追加
      ・iPad ( 第4世代 ）
      ・iPad mini

  Version 1.1.0
    ・ステータスイベント通知機能を追加。
    ・ラスターイメージハーフトーン処理方法を追加。
    ・多階調印刷に対応。
    ・対応言語を追加。
      ・簡体字中国語
      ・繁体字中国語
      ・韓国語
      ・タイ語
      ・ベトナム語
    ・バッテリーステータス取得・通知機能追加。
    ・サポートプリンターを追加。
      ・TM-T20
      ・TM-T82
      ・TM-T81II
      ・TM-P60II
      ・TM-P60 (Wireless LAN)

  Version 1.0.1
    ・対応iOSバージョンを追加。
      ・iOS 6.0
    ・対応iOS端末を追加。
      ・iPhone 5
      ・iPod touch ( 第5世代 )
      ・iPad ( 第3世代 )

  Version 1.0.0
    ・新規リリース。
