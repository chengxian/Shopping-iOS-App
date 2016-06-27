//
//  FMAShareUtil.h
// StoreManager
//
//  Created by Cheng Xian on 9/28/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <MessageUI/MessageUI.h>

// ------------------------------------------------------------------------------
// FMAShareUtilDelegate Protocol
// ------------------------------------------------------------------------------
@protocol FMAShareUtilDelegate<NSObject>

- (void)shareUtilDelegateDidCompleteShare;

@end

// ------------------------------------------------------------------------------
// FMAShareUtil Class
// ------------------------------------------------------------------------------
@interface FMAShareUtil : NSObject

// ------------------------------------------------------------------------------
#pragma mark - Facebook Share Functions
+ (void)shareViaFacebookWithProduct:(PFObject *)product
                           delegate:(id<FMAShareUtilDelegate>)delegate;

// ------------------------------------------------------------------------------
#pragma mark - Email Share Functions
+ (MFMailComposeViewController *)shareViaEmailWithProduct:(PFObject *)product delegate:(id)delgate;

@end
