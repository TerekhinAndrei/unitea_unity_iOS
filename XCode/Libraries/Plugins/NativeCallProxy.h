//
//  NativeCallProxy.m
//  unitea-ios
//
//  Created by Slehyder Martinez on 2/08/22.
//  Copyright © 2022 Unitea. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol NativeCallsProtocol
@required
- (void) sendMessageToMobileApp:(NSString*)message;
- (void) onDismissCamera;
- (void) onStartRecording;
- (void) onRewardNotificationTap:(NSString*)idReward;
// other methods
@end

__attribute__ ((visibility("default")))
@interface FrameworkLibAPI : NSObject
+(void) registerAPIforNativeCalls:(id<NativeCallsProtocol>) aApi;

@end
