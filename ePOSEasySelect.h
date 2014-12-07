//
//  Copyright Seiko Epson Corporation 2014 All rights reserved.
//
//  Ver.1.0.0

#ifdef __OBJC__
#import <Foundation/Foundation.h>

@interface EposEasySelectInfo : NSObject

@property (assign, nonatomic, readonly) int deviceType;
@property (strong, nonatomic, readonly) NSString *printerName;
@property (strong, nonatomic, readonly) NSString *macAddress;

@end

@interface EposEasySelect : NSObject

- (EposEasySelectInfo *)parseQR:(NSString *)data;
- (NSString *)createQR:(NSString *)printerName DeviceType:(int)deviceType MacAddress:(NSString*)macAddress;

@end
#endif  /*__OBJC__*/