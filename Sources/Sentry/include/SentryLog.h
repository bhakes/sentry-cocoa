//
//  SentryLog.h
//  Sentry
//
//  Created by Daniel Griesser on 02/05/2017.
//  Copyright © 2017 Sentry. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SentryLogLevel) {
    kNone = 1,
    kError,
    kDebug,
    kVerbose
};

@interface SentryLog : NSObject

+ (void)logWithMessage:(NSString *)message andLevel:(SentryLogLevel)level;

@end

NS_ASSUME_NONNULL_END
