// Objective-C API for talking to bt Go package.
//   gobind -lang=objc bt
//
// File is generated by gobind. Do not edit.

#ifndef __Bt_H__
#define __Bt_H__

@import Foundation;
#include "Universe.objc.h"


@protocol BtCallback;
@class BtCallback;

@protocol BtCallback <NSObject>
- (void)callDownloadFlow:(long)p0;
- (void)callStatus:(long)p0;
- (void)callUDPFd:(long)p0;
- (void)callUploadFlow:(long)p0;
@end

FOUNDATION_EXPORT NSString* BtGetPriAndPubKey(void);

FOUNDATION_EXPORT NSString* BtInit(long fd, NSString* jsonFomt);

FOUNDATION_EXPORT NSString* BtMD5Sign(int32_t ts, NSString* allowIp, int32_t mask);

FOUNDATION_EXPORT NSString* BtStart(int32_t rfd, id<BtCallback> cb);

@class BtCallback;

@interface BtCallback : NSObject <goSeqRefInterface, BtCallback> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (void)callDownloadFlow:(long)p0;
- (void)callStatus:(long)p0;
- (void)callUDPFd:(long)p0;
- (void)callUploadFlow:(long)p0;
@end

#endif
