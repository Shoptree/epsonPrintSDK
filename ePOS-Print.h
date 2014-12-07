//
//  Copyright Seiko Epson Corporation 2012-2014 All rights reserved.
//
//  Ver.1.6.0

#ifdef __OBJC__
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#endif  /*__OBJC__*/

#define EPOS_OC_FALSE (0)
#define EPOS_OC_TRUE (1)
#define EPOS_OC_PARAM_UNSPECIFIED (-1)
#define EPOS_OC_PARAM_DEFAULT (-2)

#define EPOS_OC_ST_NO_RESPONSE (0x00000001)
#define EPOS_OC_ST_PRINT_SUCCESS (0x00000002)
#define EPOS_OC_ST_DRAWER_KICK (0x00000004)
#define EPOS_OC_ST_BATTERY_OFFLINE (0x00000004)
#define EPOS_OC_ST_OFF_LINE (0x00000008)
#define EPOS_OC_ST_COVER_OPEN (0x00000020)
#define EPOS_OC_ST_PAPER_FEED (0x00000040)
#define EPOS_OC_ST_WAIT_ON_LINE (0x00000100)
#define EPOS_OC_ST_PANEL_SWITCH (0x00000200)
#define EPOS_OC_ST_MECHANICAL_ERR (0x00000400)
#define EPOS_OC_ST_AUTOCUTTER_ERR (0x00000800)
#define EPOS_OC_ST_UNRECOVER_ERR (0x00002000)
#define EPOS_OC_ST_AUTORECOVER_ERR (0x00004000)
#define EPOS_OC_ST_RECEIPT_NEAR_END (0x00020000)
#define EPOS_OC_ST_RECEIPT_END (0x00080000)
#define EPOS_OC_ST_BUZZER (0x01000000)

#define EPOS_OC_SDK_NAME        "ePOS-Print SDK for iOS"
#define EPOS_OC_SDK_VERSION     "1.6.0"

enum EposOcErrorStatus {
	EPOS_OC_SUCCESS = 0,		/* Success */
	EPOS_OC_ERR_PARAM,			/* Invalid parameter */
	EPOS_OC_ERR_OPEN,			/* Open error */
	EPOS_OC_ERR_CONNECT,		/* Connection error */
	EPOS_OC_ERR_TIMEOUT,		/* Timeout */
	EPOS_OC_ERR_MEMORY,		/* Memory allocate error */
	EPOS_OC_ERR_ILLEGAL,		/* Illegal error */
	EPOS_OC_ERR_PROCESSING,	/* Processing error */
	EPOS_OC_ERR_UNSUPPORTED,	/* Unsupported model */
    EPOS_OC_ERR_OFF_LINE,       /* Printer Off-line */
	EPOS_OC_ERR_FAILURE = 255	/* Undefined or Unknown error */
};

enum EposOcModel {
	EPOS_OC_MODEL_ANK = 0,
	EPOS_OC_MODEL_JAPANESE,
	EPOS_OC_MODEL_CHINESE,
	EPOS_OC_MODEL_TAIWAN,
	EPOS_OC_MODEL_KOREAN,
	EPOS_OC_MODEL_THAI,
	EPOS_OC_MODEL_SOUTHASIA
};

enum EposOcAlign {
	EPOS_OC_ALIGN_LEFT = 0,
	EPOS_OC_ALIGN_CENTER,
	EPOS_OC_ALIGN_RIGHT
};

enum EposOcLang {
	EPOS_OC_LANG_EN = 0,
	EPOS_OC_LANG_JA,
	EPOS_OC_LANG_ZH_CN,
	EPOS_OC_LANG_ZH_TW,
	EPOS_OC_LANG_KO,
	EPOS_OC_LANG_TH,
	EPOS_OC_LANG_VI
};

enum EposOcFont {
	EPOS_OC_FONT_A = 0,
	EPOS_OC_FONT_B,
	EPOS_OC_FONT_C,
	EPOS_OC_FONT_D,
	EPOS_OC_FONT_E,
};

enum EposOcColor {
	EPOS_OC_COLOR_NONE = 0,
	EPOS_OC_COLOR_1,
	EPOS_OC_COLOR_2,
	EPOS_OC_COLOR_3,
	EPOS_OC_COLOR_4
};

enum EposOcMode {
	EPOS_OC_MODE_MONO = 0,
	EPOS_OC_MODE_GRAY16
};

enum EposOcHalftone {
	EPOS_OC_HALFTONE_DITHER = 0,
	EPOS_OC_HALFTONE_ERROR_DIFFUSION,
	EPOS_OC_HALFTONE_THRESHOLD
};

enum EposOcCompress {
    EPOS_OC_COMPRESS_NONE = 0,
    EPOS_OC_COMPRESS_DEFLATE
};

enum EposOcBarcode {
	EPOS_OC_BARCODE_UPC_A = 0,
	EPOS_OC_BARCODE_UPC_E,
	EPOS_OC_BARCODE_EAN13,
	EPOS_OC_BARCODE_JAN13,
	EPOS_OC_BARCODE_EAN8,
	EPOS_OC_BARCODE_JAN8,
	EPOS_OC_BARCODE_CODE39,
	EPOS_OC_BARCODE_ITF,
	EPOS_OC_BARCODE_CODABAR,
	EPOS_OC_BARCODE_CODE93,
	EPOS_OC_BARCODE_CODE128,
	EPOS_OC_BARCODE_GS1_128,
	EPOS_OC_BARCODE_GS1_DATABAR_OMNIDIRECTIONAL,
	EPOS_OC_BARCODE_GS1_DATABAR_TRUNCATED,
	EPOS_OC_BARCODE_GS1_DATABAR_LIMITED,
	EPOS_OC_BARCODE_GS1_DATABAR_EXPANDED
};

enum EposOcHri {
	EPOS_OC_HRI_NONE = 0,
	EPOS_OC_HRI_ABOVE,
	EPOS_OC_HRI_BELOW,
	EPOS_OC_HRI_BOTH
};

enum EposOcSymbol {
	EPOS_OC_SYMBOL_PDF417_STANDARD = 0,
	EPOS_OC_SYMBOL_PDF417_TRUNCATED,
	EPOS_OC_SYMBOL_QRCODE_MODEL_1,
	EPOS_OC_SYMBOL_QRCODE_MODEL_2,
	EPOS_OC_SYMBOL_MAXICODE_MODE_2,
	EPOS_OC_SYMBOL_MAXICODE_MODE_3,
	EPOS_OC_SYMBOL_MAXICODE_MODE_4,
	EPOS_OC_SYMBOL_MAXICODE_MODE_5,
	EPOS_OC_SYMBOL_MAXICODE_MODE_6,
	EPOS_OC_SYMBOL_GS1_DATABAR_STACKED,
	EPOS_OC_SYMBOL_GS1_DATABAR_STACKED_OMNIDIRECTIONAL,
	EPOS_OC_SYMBOL_GS1_DATABAR_EXPANDED_STACKED,
	EPOS_OC_SYMBOL_AZTECCODE_FULLRANGE,
	EPOS_OC_SYMBOL_AZTECCODE_COMPACT,
	EPOS_OC_SYMBOL_DATAMATRIX_SQUARE,
	EPOS_OC_SYMBOL_DATAMATRIX_RECTANGLE_8,
	EPOS_OC_SYMBOL_DATAMATRIX_RECTANGLE_12,
	EPOS_OC_SYMBOL_DATAMATRIX_RECTANGLE_16
};

enum EposOcLevel {
	EPOS_OC_LEVEL_0 = 0,
	EPOS_OC_LEVEL_1,
	EPOS_OC_LEVEL_2,
	EPOS_OC_LEVEL_3,
	EPOS_OC_LEVEL_4,
	EPOS_OC_LEVEL_5,
	EPOS_OC_LEVEL_6,
	EPOS_OC_LEVEL_7,
	EPOS_OC_LEVEL_8,
	EPOS_OC_LEVEL_L,
	EPOS_OC_LEVEL_M,
	EPOS_OC_LEVEL_Q,
	EPOS_OC_LEVEL_H,
	EPOS_OC_LEVEL_DEFAULT
};

enum EposOcLine {
	EPOS_OC_LINE_THIN = 0,
	EPOS_OC_LINE_MEDIUM,
	EPOS_OC_LINE_THICK,
	EPOS_OC_LINE_THIN_DOUBLE,
	EPOS_OC_LINE_MEDIUM_DOUBLE,
	EPOS_OC_LINE_THICK_DOUBLE
};

enum EposOcDirection {
	EPOS_OC_DIRECTION_LEFT_TO_RIGHT = 0,
	EPOS_OC_DIRECTION_BOTTOM_TO_TOP,
	EPOS_OC_DIRECTION_RIGHT_TO_LEFT,
	EPOS_OC_DIRECTION_TOP_TO_BOTTOM
};

enum EposOcCut {
	EPOS_OC_CUT_NO_FEED = 0,
	EPOS_OC_CUT_FEED,
	EPOS_OC_CUT_RESERVE
};

enum EposOcDrawer {
	EPOS_OC_DRAWER_1 = 0,
	EPOS_OC_DRAWER_2
};

enum EposOcPulse {
	EPOS_OC_PULSE_100 = 0,
	EPOS_OC_PULSE_200,
	EPOS_OC_PULSE_300,
	EPOS_OC_PULSE_400,
	EPOS_OC_PULSE_500
};

enum EposOcPattern {
	EPOS_OC_PATTERN_A = 0,
	EPOS_OC_PATTERN_B,
	EPOS_OC_PATTERN_C,
	EPOS_OC_PATTERN_D,
	EPOS_OC_PATTERN_E,
	EPOS_OC_PATTERN_ERROR,
	EPOS_OC_PATTERN_PAPER_END,
	EPOS_OC_PATTERN_1,
	EPOS_OC_PATTERN_2,
	EPOS_OC_PATTERN_3,
	EPOS_OC_PATTERN_4,
	EPOS_OC_PATTERN_5,
	EPOS_OC_PATTERN_6,
	EPOS_OC_PATTERN_7,
	EPOS_OC_PATTERN_8,
	EPOS_OC_PATTERN_9,
	EPOS_OC_PATTERN_10
};

enum EposOcFeedPosition {
	EPOS_OC_FEED_PEELING = 0,
	EPOS_OC_FEED_CUTTING,
	EPOS_OC_FEED_CURRENT_TOF,
	EPOS_OC_FEED_NEXT_TOF,
};

enum EposOcLayout {
	EPOS_OC_LAYOUT_RECEIPT = 0,
	EPOS_OC_LAYOUT_LABEL,
	EPOS_OC_LAYOUT_LABEL_BM,
	EPOS_OC_LAYOUT_RECEIPT_BM,
};

enum EposOcDevtype {
	EPOS_OC_DEVTYPE_TCP = 0,
	EPOS_OC_DEVTYPE_BLUETOOTH,
};

enum EposOcLogPeriod {
    EPOS_OC_LOG_TEMPORARY = 0,
    EPOS_OC_LOG_PERMANENT,
};

enum EposOcLogEnabled {
    EPOS_OC_LOG_DISABLE = 0,
    EPOS_OC_LOG_STORAGE,
    EPOS_OC_LOG_TCP,
};

enum EposOcLogLevel {
    EPOS_OC_LOG_LOW = 0,
};

#ifdef __OBJC__

@interface EposBuilder : NSObject {
@private
    void* handle_;
}

- (id) initWithPrinterModel:(NSString *)printerModel Lang:(int)lang;
- (void) dealloc;
- (int) clearCommandBuffer;
- (int) addTextAlign:(int)align;
- (int) addTextLineSpace:(long)linespc;
- (int) addTextRotate:(int)rotate;
- (int) addText:(NSString *)data;
- (int) addTextLang:(int)lang;
- (int) addTextFont:(int)font;
- (int) addTextSmooth:(int)smooth;
- (int) addTextDouble:(int)dw Dh:(int)dh;
- (int) addTextSize:(long)width Height:(long)height;
- (int) addTextStyle:(int)reverse Ul:(int)ul Em:(int)em Color:(int)color;
- (int) addTextPosition:(long)x;
- (int) addFeedUnit:(long)unit;
- (int) addFeedLine:(long)line;
- (int) addImage:(UIImage *)data X:(long)x Y:(long)y Width:(long)width Height:(long)height Color:(int)color;
- (int) addImage:(UIImage *)data X:(long)x Y:(long)y Width:(long)width Height:(long)height Color:(int)color Mode:(int)mode Halftone:(int)halftone Brightness:(double)brightness;
- (int) addImage:(UIImage *)data X:(long)x Y:(long)y Width:(long)width Height:(long)height Color:(int)color Mode:(int)mode Halftone:(int)halftone Brightness:(double)brightness Compress:(int)compress;
- (int) addLogo:(long)key1 Key2:(long)key2;
- (int) addBarcode:(NSString *)data Type:(int)type Hri:(int)hri Font:(int)font Width:(long)width Height:(long)height;
- (int) addSymbol:(NSString *)data Type:(int)type Level:(int)level Width:(long)width Height:(long)height Size:(long)size;
- (int) addHLine:(long)x1 X2:(long)x2 Style:(int)style;
- (int) addVLineBegin:(long)x Style:(int)style;
- (int) addVLineEnd:(long)x Style:(int)style;
- (int) addPageBegin;
- (int) addPageEnd;
- (int) addPageArea:(long)x Y:(long)y Width:(long)width Height:(long)height;
- (int) addPageDirection:(int)dir;
- (int) addPagePosition:(long)x Y:(long)y;
- (int) addPageLine:(long)x1 Y1:(long)y1 X2:(long)x2 Y2:(long)y2 Style:(int)style;
- (int) addPageRectangle:(long)x1 Y1:(long)y1 X2:(long)x2 Y2:(long)y2 Style:(int)style;
- (int) addCut:(int)type;
- (int) addPulse:(int)drawer Time:(int)time;
- (int) addSound:(int)pattern Repeat:(long)repeat;
- (int) addSound:(int)pattern Repeat:(long)repeat Cycle:(long)cycle;
- (int) addCommand:(NSData *)data;
- (int) addFeedPosition:(int)position;
- (int) addLayout:(int)type Width:(long)width Height:(long)height MarginTop:(long)marginTop MarginBottom:(long)marginBottom OffsetCut:(long)offsetCut OffsetLabel:(long)offsetLabel;

@end

@interface EposPrint : NSObject {
@private
    void* handle_;

    /* Callback methods. */
    SEL onStatusChange_;
    NSObject* targetOfOnStatusChange_;
    SEL onOnline_;
    NSObject* targetOfOnOnline_;
    SEL onOffline_;
    NSObject* targetOfOnOffline_;
    SEL onPowerOff_;
    NSObject* targetOfOnPowerOff_;
    SEL onCoverOk_;
    NSObject* targetOfOnCoverOk_;
    SEL onCoverOpen_;
    NSObject* targetOfOnCoverOpen_;
    SEL onPaperOk_;
    NSObject* targetOfOnPaperOk_;
    SEL onPaperNearEnd_;
    NSObject* targetOfOnPaperNearEnd_;
    SEL onPaperEnd_;
    NSObject* targetOfOnPaperEnd_;
    SEL onDrawerClosed_;
    NSObject* targetOfOnDrawerClosed_;
    SEL onDrawerOpen_;
    NSObject* targetOfOnDrawerOpen_;
    SEL onBatteryLow_;
    NSObject* targetOfOnBatteryLow_;
    SEL onBatteryOk_;
    NSObject* targetOfOnBatteryOk_;
    SEL onBatteryStatusChange_;
    NSObject* targetOfOnBatteryStatusChange_;
}

- (id) init;
- (void) dealloc;
- (int) openPrinter:(int)deviceType DeviceName:(NSString *)deviceName;
- (int) openPrinter:(int)deviceType DeviceName:(NSString *)deviceName Enabled:(int)enabled Interval:(long)interval;
- (int) openPrinter:(int)deviceType DeviceName:(NSString *)deviceName Enabled:(int)enabled Interval:(long)interval Timeout:(long)timeout;
- (int) closePrinter;
- (int) sendData:(EposBuilder *)builder Timeout:(long)timeout Status:(unsigned long *)status;
- (int) sendData:(EposBuilder *)builder Timeout:(long)timeout Status:(unsigned long *)status Battery:(unsigned long *)battery;
- (void) setStatusChangeEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setOnlineEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setOfflineEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setPowerOffEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setCoverOkEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setCoverOpenEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setPaperOkEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setPaperNearEndEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setPaperEndEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setDrawerClosedEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setDrawerOpenEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setBatteryLowEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setBatteryOkEventCallback: (SEL) method Target: (NSObject*) target;
- (void) setBatteryStatusChangeEventCallback: (SEL) method Target: (NSObject*) target;

@end

@interface EposLog : NSObject

+ (int) setLogSettings:(int)period Enabled:(int)enabled IpAddress:(NSString *)ipAddress Port:(int)port LogSize:(int)logSize LogLevel:(int)logLevel;

@end

/* EPSONIo */
#define EPSONIO_OC_PARAM_DEFAULT (-2)

enum EPSONIoOcErrType {
    EPSONIO_OC_SUCCESS = 0,         /* Success */
    EPSONIO_OC_ERR_PARAM,               /* Invalid parameter */
    EPSONIO_OC_ERR_OPEN,                /* Open error */
    EPSONIO_OC_ERR_CONNECT,             /* Connection error */
    EPSONIO_OC_ERR_TIMEOUT,             /* Timeout */
    EPSONIO_OC_ERR_MEMORY,              /* Memory allocate error */
    EPSONIO_OC_ERR_ILLEGAL,             /* Illegal error */
    EPSONIO_OC_ERR_PROCESSING,          /* Processing error */
    EPSONIO_OC_ERR_FAILURE = 255        /* Undefined or Unknown error */
};

enum EPSONIoOcDevType {
    EPSONIO_OC_DEVTYPE_TCP       = (0x00101),
    EPSONIO_OC_DEVTYPE_BLUETOOTH = (0x00102),
};

enum EPSONIoOcFilterOption {
    EPSONIO_OC_FILTER_NONE = 0,
    EPSONIO_OC_FILTER_NAME
};

@interface EpsonIo : NSObject {
@private
    void *handle_;
}

- (id) init;

- (void) dealloc;

- (int) open:(int)deviceType DeviceName:(NSString *)deviceName DeviceSettings:(NSString *)deviceSettings;

- (int) close;

- (int) write:(NSData *)data Offset:(size_t)offset Size:(size_t)size Timeout:(long)timeout SizeWritten:(size_t *)sizeWritten;

- (int) read:(NSMutableData *)data Offset:(size_t)offset Size:(size_t)size Timeout:(long)timeout SizeRead:(size_t *)sizeRead;

@end

@interface EpsonIoDeviceInfo : NSObject {
@private
}

@property (nonatomic, readonly) int deviceType;
@property (nonatomic, copy, readonly) NSString *printerName;
@property (nonatomic, copy, readonly) NSString *deviceName;
@property (nonatomic, copy, readonly) NSString *ipAddress;
@property (nonatomic, copy, readonly) NSString *macAddress;

@end

@interface EpsonIoFinder : NSObject {
@private
}

+ (int) start:(int)deviceType FindOption:(NSString *)findOption;

+ (NSArray *) getResult:(int *)errorStatus;

+ (NSArray *) getDeviceInfoList:(int *)errorStatus FilterOption:(int)filterOption;

+ (int) stop;

@end

#endif  /*__OBJC__*/