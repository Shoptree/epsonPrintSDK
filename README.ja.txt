=========================================================================
          Epson ePOS SDK for iOS Version 2.14.0

          Copyright (C) Seiko Epson Corporation 2015 - 2020. All rights reserved.
=========================================================================

1.本ソフトウェアについて

Epson ePOS SDK for iOS は、EPSON TMプリンターおよびEPSON TMインテリジェン
トプリンターに印刷するためのiOSアプリケーションを開発する開発者向けSDKです。
Epson ePOS SDK で提供するAPIを使用してアプリケーションを開発します。Epson 
ePOS SDK には、Androidデバイス向けの Epson ePOS SDK for Android も用意され
ています。
詳細は Epson ePOS SDK for iOS ユーザーズマニュアル を参照ください。

対応iOS/iPadOSバージョン
  iOS 10.0.1
  iOS 10.2 - 10.3.2
  iOS 11 - 11.4.1
  iOS 12 - 12.4.3
  iOS 13 - 13.3
  iPadOS 13.1 - 13.3

対応iOS/iPadOS端末
  iPhone ( 5 / 5c / 5s / 6 / 6 Plus / 6s / 6s Plus / SE / 7 / 7 Plus / 8 / 8 Plus / X )
  iPod touch ( 第6世代 )
  iPad ( 第4世代 / 第5世代 / 第6世代 )
  iPad Pro ( 12.9-inch / 9.7-inch / 12.9-inch 2nd / 10.5-inch)
  iPad Air / iPad Air 2
  iPad mini 2 (iPad mini with Retina display) / iPad mini 3 / iPad mini 4

動作確認XCodeバージョン
  XCode11.3

サポートTMプリンター
  EPSON TM-T100（海外モデルのみ）
  EPSON TM-T20（海外モデルのみ）
  EPSON TM-T20II
  EPSON TM-T20III
  EPSON TM-T20IIIL（海外モデルのみ）
  EPSON TM-T20X
  EPSON TM-T60（海外モデルのみ）
  EPSON TM-T70
  EPSON TM-T70II
  EPSON TM-T81II（海外モデルのみ）
  EPSON TM-T81III（海外モデルのみ）
  EPSON TM-T82（海外モデルのみ）
  EPSON TM-T82X（海外モデルのみ）
  EPSON TM-T82II（海外モデルのみ）
  EPSON TM-T82III（海外モデルのみ）
  EPSON TM-T82IIIL（海外モデルのみ）
  EPSON TM-T83III（海外モデルのみ）
  EPSON TM-T88V
  EPSON TM-T88VI
  EPSON TM-T90II
  EPSON TM-P20
  EPSON TM-P60（海外モデルのみ）
  EPSON TM-P60II
  EPSON TM-P80
  EPSON TM-U220 シリーズ（海外モデルのみ）
  EPSON TM-U330 シリーズ（海外モデルのみ）
  EPSON TM-m10
  EPSON TM-m30
  EPSON TM-m30II
  EPSON TM-m30II-H
  EPSON TM-H6000V（海外モデルのみ）

サポートTMインテリジェントプリンター
  EPSON TM-T20II-i
  EPSON TM-T70-i
  EPSON TM-T82II-i（海外モデルのみ）
  EPSON TM-T83II-i（海外モデルのみ）
  EPSON TM-T88V-i
  EPSON TM-T88VI-iHUB（海外モデルのみ）
  EPSON TM-U220-i（海外モデルのみ）
  EPSON TM-T70II-DT
  EPSON TM-T88V-DT
  EPSON TM-H6000IV-DT（海外モデルのみ）
  EPSON TM-T70II-DT2
  EPSON TM-T88VI-DT2

サポートネットワークプリンター
  EPSON TM-L90
  EPSON TM-T88IV
  EPSON TM-T90
  EPSON TM-T90KP

サポートインターフェイス
  TMプリンター
    有線LAN
    無線LAN
    Bluetooth
    USB
  TMインテリジェントプリンター
    有線LAN
  ネットワークプリンター
    有線LAN
    無線LAN

2.提供ファイル

・ePOS2.h
  クラス定義、エラー値／デバイスタイプの定数定義を含むヘッダーファイルです。

・ePOSEasySelect.h
  簡単にプリンターを選択するためのヘッダーファイルです。

・libepos2.a
  機能実行用ライブラリーです。（ARMv7, ARMv7s, ARM64, i386, x86_64 に対応）

・libeposeasyselect.a
  簡単にプリンターを選択するためのライブラリーです。
  （ARMv7, ARMv7s, ARM64, i386, x86_64 に対応）

・ePOS_SDK_Sample_iOS.zip
  サンプルプログラムファイルです。

・DeviceControlProgram_Sample.zip
  デバイス制御プログラム用のサンプルプログラムファイルです。

・EULA.ja.txt
  SOFTWARE LICENSE AGREEMENT が記載されています。

・EULA.en.txt
  SOFTWARE LICENSE AGREEMENT（英語版）が記載されています。

・ePOS_SDK_iOS_um_ja_revx.pdf
  ユーザーズマニュアルです。

・ePOS_SDK_iOS_um_en_revx.pdf
  ユーザーズマニュアル（英語版）です。

・ePOS_SDK_iOS_Migration_Guide_ja_revx.pdf
  マイグレーションガイドです。

・ePOS_SDK_iOS_Migration_Guide_en_revx.pdf
  マイグレーションガイド（英語版）です。

・TM-DT_Peripherals_ja_revx.pdf
  TM-DT シリーズ周辺機器制御ガイドです。

・TM-DT_Peripherals_en_revx.pdf
  TM-DT シリーズ周辺機器制御ガイド（英語版）です。

・README.ja.txt
  本書です。

・README.en.txt
  本書（英語版）です。

・OPOS_CCOs_1.14.001.msi
  OPOS CCO インストーラーパッケージです。

3.その他留意点

・使用方法、使用上の注意、等の詳細は、ユーザーズマニュアルを参照し、
  ご使用ください。

・iOS9.xでTCP/IP接続を使用する場合、ネットワークのルーターに
  デフォルトゲートウェイを設定してください。

・印刷処理を繰り返し行う場合、Printerクラスのインスタンスの生成と破棄は繰り返し処理の外で行い、
  短い間隔で繰り返さないようにしてください。

4.制限事項

・以下のTMインテリジェントプリンターでは検索機能(Discoveryクラス)
  をサポートしていません。

    TM-DT シリーズ (TM-DT ソフトウェア Ver. 3.01 以前)
    TM-i  シリーズ（TM-i ファームウェア Ver. 4.30 以前）

  検索開始してからTMインテリジェントプリンターの電源を入れた場合、TMインテリジェントプリンターが
  検出されないことがあります。その場合は、TMインテリジェントプリンターが印刷可能になるまで時間を空けてから、
  再度検索を開始してください。

・以下のiOSバージョンでは、Bluetooth設定を無効にしている状態で、
  BluetoothConnectionクラスのconnectDevice APIを実行すると
  アプリケーションがクラッシュすることがあります。
    iOS 10.0.1

・iOS11で、Bluetooth接続でアプリケーションがconnect APIに失敗する場合は、
  connectを実行する前に100msec程度のWaitを入れてください。

5.バージョン履歴

  Version 2.14.0
    ・対応iOS/iPadOSバージョンを追加
      ・iOS 13.3
      ・iPadOS 13.3
    ・サポートTMプリンターを追加
      ・TM-m30II
      ・TM-m30II-H
    ・新機能追加
      ・まとめ反転印刷に対応
      ・UTF-8の印刷に対応

  Version 2.13.0
    ・対応iOS/iPadOSバージョンを追加
      ・iOS 12.3 - 12.4.3
      ・iOS 13 - 13.2.3
      ・iPadOS 13.1 - 13.2.3
    ・対応iOSバージョンからiOS9.xを削除
    ・対応iOS/iPadOS端末から以下を削除
      ・iPhone 4S
      ・iPod touch 5th generation
      ・iPad2 / iPad 3rd generation
      ・iPad mini

  Version 2.12.2
    ・不具合修正
      ・endTransaction APIを実行すると、極めて低い確率でフリーズする現象を修正

  Version 2.12.1
    ・不具合修正
      ・Discoveryクラスのstart APIを実行すると、稀にパラメータエラーを返す現象を修正
      ・連続してAPIを実行すると稀にフリーズする現象を修正

  Version 2.12.0
    ・対応iOSバージョンを追加
        ・iOS 12.2
    ・サポートＴＭプリンターを追加
        ・TM-T20III
        ・TM-T82III
    ・TM-T88VIにバーコードスキャナが接続できるようになりました。
    ・パッケージに以下を追加
        ・簡易的なPOSアプリのサンプルプログラム
    ・不具合修正
        ・TM-U220でconnect/disconnect APIを連続して実行すると、不正な印字を行う現象を修正
        ・同時にプリンターから複数のレスポンスを受信すると、稀にクラッシュする現象を修正
        ・自動釣銭機をDisconnect中に、getStatus APIを実行するとクラッシュする現象を修正
        ・connect API実行後、端末をsleepして復帰するとCPUが100%になる現象を修正
        ・環境によって、稀にconnect APIに時間がかかる現象を修正

  Version 2.11.0
    ・サポートＴＭプリンターを追加
        ・TM-T20IIIL
        ・TM-T20X
        ・TM-T81III
        ・TM-T82X
        ・TM-T82IIIL
        ・TM-T83III
        ・TM-T100
    ・TM-U330で、addTextSizeおよびaddLogo APIが使用できるようになりました
    ・TM-DTシリーズ、TM-iシリーズ以外でもgetAdmin、getLocation APIが使用できるようになりました
    ・不具合修正
        ・Printerがオフライン状態の時に印刷する（あるいは印刷中にPrinterがオフライン状態になる）と、コールバックが３０秒以上返ってこないことがある現象を修正
        ・SimpleSerialクラスを使用するとクラッシュする現象を修正
        ・PrinterクラスでSendData APIのコールバックを待たずにsendDataを複数回送ると、クラッシュする場合がある現象を修正
        ・TM-P80でaddLayout APIを呼ぶと、パラメータエラーを返す現象を修正
        ・Connect APIで稀にフリーズする現象を修正

  Version 2.9.2a
    ・ライブラリはVer.2.9.2と同一です。
    ・サポートTMプリンターを追加
      ・TM-T70II-DT2
      ・TM-T88VI-DT2
    ・対応iOS端末を追加
      ・iPhone 8 / 8 Plus / X
      ・iPad 5th generation / 6th generation
      ・iPad Pro 12.9-inch 2nd / 10.5-inch
    ・対応iOSバージョンを追加
      ・iOS 12 - 12.0.1
    ・対応iOSバージョンからiOS8.xを削除

  Version 2.9.2
    ・不具合修正
      ・TM-U330（海外モデルのみ）のaddTextStyle()とaddImage()で、2色印字が行えない現象を修正

  Version 2.9.0
    ・対応iOSバージョンを追加
      ・iOS 11.2.2 - 11.2.6
      ・iOS 11.3 - 11.3.1
      ・iOS 11.4 - 11.4.1
    ・TM-m30にバーコードスキャナが接続できるようになりました。
    ・TM-DTシリーズにサポート周辺機器を追加
      ・CashChangerクラス
      ・POSKeyboardクラス
      ・CATクラス
      ・OtherPeripheralクラス
      ・MSRクラス
    ・パッケージに以下を追加
      ・デバイス制御プログラム用のサンプルプログラム
      ・TM-DT シリーズ周辺機器制御ガイド
      ・OPOS CCO インストーラーパッケージ
    ・CATクラスにおけるVer.2.6.0_Aからの変更点
      ・API追加
        ・getOposErrorCode：OPOS拡張エラーコード取得
        ・sendDirectIOCommand：任意DirectIOコマンド送信
      ・イベント追加
        ・setDirectIOCommandReplyEventDelegate：DirectIOコマンドの実行結果受信
        ・setStatusUpdateEventDelegate：OPOSの StatusUpdateEventを通知
      ・コールバックコード追加
        ・EPOS2_CAT _CODE_ERR_OPOSCODE：OPOS拡張エラーが発生した
    ・切断検知時間をTM-DT側で設定できるようにしました。
    ・Printerクラスのconnect()のtargetパラメータにデバイスIDを付加しない場合に限り、
      EPOS2_EVENT_POWER_OFF以外のステータス更新イベントが、intervalの値によらず、
      すぐに通知されるようになりました。
    ・ライブラリに組み込んでいるOpenSSLをバージョン1.0.2kからバージョン1.0.2oに更新
    ・不具合修正
      ・CashChangerのbeginDeposit()直後にrestartDeposit()を実行するとコールバックの
        statusがPauseになる現象を修正
      ・CashChangerサンプルプログラムのcashCount画面で、Clearボタンを押してもクリアされない現象を修正
      ・LineDisplay接続をサポートしていないTMプリンターで、プリンターがオフライン状態の時に
        connectを実行し、その後にsendDataを実行するとオフライン要因のエラーが返らず、
        TIMEOUTエラーが返る現象を修正
      ・Printerの印刷またはLineDisplayの表示がステータスモニターの監視間隔だけ遅延することがある現象を修正
      ・TCP接続でconnect()実行中に、物理的な通信切断（LANケーブルを抜くなど）が発生すると
        アプリケーションが強制終了することがある現象を修正
      ・UB-E03が存在するネットワーク環境で、parseNFC()が失敗することがある現象を修正

  Version 2.7.0
    ・サポートTMプリンターを追加
      ・TM-H6000V（海外モデルのみ）
    ・対応iOSバージョンを追加
      ・iOS 11.0.1 - 11.0.2
      ・iOS 11.1 - 11.1.2
      ・iOS 11.2 - 11.2.1
    ・TCP通信において一定時間送受信が無くても切断されないようにしました
    ・不具合修正
      ・Epos2Discoveryクラスのstop APIの実行に時間がかかることがある現象を修正
      ・ネットワーク接続されたプリンターを検索するとアプリケーションが強制終了する
        ことがある現象を修正

  Version 2.6.0
    ・サポートTMプリンターを追加
      ・TM-T88VI
    ・対応iOSバージョンを追加
      ・iOS 11
    ・対応iOSバージョンからiOS7.xを削除
    ・iBeaconに対応
    ・NFCに対応
    ・Swift3.1のサンプルプログラムを追加
    ・不具合修正
      ・Printerの印刷またはLineDisplayの表示がステータスモニターの監視間隔だけ遅延することがある現象を修正

  Version 2.5.2
    ・対応iOSバージョンを追加
      ・iOS 10.3 - 10.3.2
    ・不具合修正
      ・onPtrReceive()が呼ばれた直後に別スレッドでdisconnect()を実行すると、
        アプリケーションがハングアップすることがある現象を修正
        
  Version 2.5.1a
    ・ユーザーズマニュアルの誤記を修正しました

  Version 2.5.1
    ・対応iOSバージョンを追加
      ・iOS 10.2 - 10.2.1
    ・TMプリンターにカスタマーディスプレイを接続して使用していて、プリンターの電源OFF/ONなどによって
      通信が切断された場合、プリンターかカスタマーディスプレイのどちらかで接続し直すことで、
      通信が復帰するようにしました
    ・PrinterStatusInfoのautoRecoverErrorに“EPOS2_COVER_OPEN”を追加しました
    ・プリンターファームウェアの許容量を超えるデータサイズの印刷ジョブが送信された場合に
      返すコールバックコード“EPOS2_CODE_ERR_REQUEST_ENTITY_TOO_LARGE”を追加しました
    ・ライブラリに組み込んでいるOpenSSLをバージョン1.0.2hからバージョン1.0.2kに更新
    ・不具合修正
      ・LineDisplayのdisconnect APIを実行すると、“EPOS2_ERR_NOT_FOUND”が返ることがある現象を修正
      ・ステータスモニターの更新間隔の初期値が1秒になることがある現象を修正
      ・SSLを有効にしたTMインテリジェントプリンターに対して、ステータスモニターを有効にすると
        アプリケーションが強制終了することがある現象を修正
      ・TCP/IP接続時、検索の開始と終了を繰り返すとアプリケーションが強制終了することがある現象を修正
      ・CommBoxに送信履歴があるときに、getCommHistory APIとdisconnect APIを続けて実行するとアプリケーションが
        強制終了する現象を修正

  Version 2.5.0
    ・サポートTMプリンターを追加
      ・TM-P80
    ・不具合修正
      ・disconnect API実行時にプリンターの電源をOFFすると
        ハングアップすることがある現象を修正
      ・ポータブル(TM-P)系プリンターで印刷中にオフラインが発生すると
        sendData APIのコールバックが通知されないことがある現象を修正

  Version 2.4.2
    ・不具合修正
      ・42桁モードをサポートしているプリンターに対してaddImage APIを実行した場合、
        通常桁数モードで最大幅まで画像が印刷ができない現象を修正

  Version 2.4.0
    ・対応iOSバージョンからiOS6.xを削除
    ・サポートTMプリンターを追加
      ・TM-T88VI-iHUB（海外モデルのみ）
    ・対応iOSバージョンを追加
      ・iOS 10.0.1
    ・対応iOS端末を追加
      ・iPhone SE
      ・iPhone 7
      ・iPhone 7 Plus
    ・サンプルプログラムの構成変更
    ・不具合修正
      ・副接続I/Fからの印刷が、失敗する場合がある現象を修正
      ・副接続I/Fからの印刷結果通知に時間がかかる現象を修正
      ・getPrefix APIで取得される情報が正しくない場合がある現象を修正
      ・インテリジェントプリンターの周辺機器検索結果（DeviceInfo構造体の内容）が正しくない現象を修正
      ・プリンターがオフラインの状態でsendData APIを実行した後、オフライン要因を取り除いても、
        次回以降のsendData APIがエラーになる場合がある現象を修正
      ・TCP/IP接続で、印刷結果通知がエラーとなった時に、disconnect APIを実行すると
        ハングアップすることがある現象を修正
    ・印刷データもしくはディスプレイ表示データがプリンターファームウェアの許容量を超えて送信された場合に
      返すコールバックコード“EPOS2_CODE_ERR_TOO_MANY_REQUESTS”を追加しました。

  Version 2.3.0
    ・対応iOSバージョンからiOS9.3.xを削除
    ・サポートTMプリンターを追加
      ・TM-T60（海外モデルのみ）
    ・不具合修正
      ・TM-インテリジェントプリンターに対してdisconnect APIを実行した場合、関数が返答しないことがある現象を修正

  Version 2.2.0
    ・対応iOSバージョンを追加
      ・iOS 9.3.2
    ・対応iOS端末を追加
      ・iPad Pro ( 9.7-inch )
    ・App Storeの以下の要件に対応
      ・App Storeに申請されるすべてのアプリケーションは、IPv6のネットワークを
        サポートしている必要があります。

  Version 2.1.0
    ・サポートTMプリンターを追加
      ・TM-T88VI（海外モデルのみ）
    ・対応iOSバージョンを追加
      ・iOS 9.1 - 9.3.1
    ・対応iOS端末を追加
      ・iPad Pro ( 12.9-inch )
    ・Epos2LogクラスにSDKのバージョンを取得するためのgetSdkVersion APIを追加
    ・Bitcodeに対応
    ・Swift向けにePOS2_Printer_Swiftサンプルを追加
    ・不具合修正
      ・印刷中にOFFLINEが発生した場合、OFFLINE要因を取り除くと残りのデータが
        印刷される現象を修正
      ・TM-P20/TM-P60II/TM-m10/TM-m30/TM-T90IIで印刷中に電源OFFした場合、プリ
        ンターステータスの接続状態が"接続中"になる現象を修正
      ・disconnect API実行時に、切断イベントが発生しない現象を修正
      ・addFeedPosition APIで、正しく紙送りが行われない現象を修正

  Version 2.0.0
    ・新規リリース

