#import <Foundation/Foundation.h>

enum EposBtErrorStatus {
    EPOS_BT_SUCCESS = 0,        /* Success */
    EPOS_BT_ERR_PARAM,          /* Invalid parameter */
    EPOS_BT_ERR_CONNECT,        /* Connection error */
    EPOS_BT_ERR_MEMORY,         /* Memory allocate error */
    EPOS_BT_ERR_ILLEGAL,        /* Illegal error */
    EPOS_BT_ERR_UNSUPPORTED,    /* Unsupported model */
    EPOS_BT_ERR_CANCEL,         /* User canceled */
    EPOS_BT_ERR_ALREADY_CONNECT,/* Already connect */
    EPOS_BT_ERR_ILLEGAL_DEVICE, /* Illegal Device error */
    EPOS_BT_ERR_FAILURE = 255   /* Undefined or Unknown error */
};

@interface EposBluetoothConnection : NSObject {
	@private
		void* handle_;
}

-(id)init;

-(void)dealloc;

-(int)connectDevice : (NSMutableString *)macAddress;

-(int)disconnectDevice : (NSString *)macAddress;

@end
