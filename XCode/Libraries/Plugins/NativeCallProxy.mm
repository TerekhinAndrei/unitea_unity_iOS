//
//  NativeCallProxy.m
//  unitea-ios
//
//  Created by Slehyder Martinez on 2/08/22.
//  Copyright © 2022 Unitea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NativeCallProxy.h"

@implementation FrameworkLibAPI

id<NativeCallsProtocol> api = NULL;
+(void) registerAPIforNativeCalls:(id<NativeCallsProtocol>) aApi
{
    api = aApi;
}

@end

extern "C"
{
    void sendMessageToMobileApp(const char* message)
    {
        return [api sendMessageToMobileApp:[NSString stringWithUTF8String:message]];
    }
}

extern "C"
{
    void onDismissCamera()
    {
        return [api onDismissCamera];
    }
}

extern "C"
{
    void onStartRecording()
    {
        return [api onStartRecording];
    }
}

extern "C"
{
    void onRewardNotificationTap(const char* message)
    {
        return [api onRewardNotificationTap:[NSString stringWithUTF8String:message]];
    }
}
