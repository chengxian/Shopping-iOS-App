//
//  FMACustomerMessageUtil.h
// StoreManager
//
//  Created by Cheng Xian on 9/26/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

// -----------------------------------------------------------------------------------------
// FMACustomerMessageUtilDelegate Protocol
// -----------------------------------------------------------------------------------------
@protocol FMACustomerMessageUtilDelegate<NSObject>

- (void)requestGetMessagesInCustomerMessagePageDidRespondWithMessages:(NSArray *)messages;
- (void)requestGetLatestMessagesInCustomerMessagePageDidRespondWithMessages:(NSArray *)messages;

@end

// -----------------------------------------------------------------------------------------
// FMACustomerMessageUtil Class
// -----------------------------------------------------------------------------------------
@interface FMACustomerMessageUtil : NSObject
// -----------------------------------------------------------------------------------------
#pragma mark - Utility Functions
+ (NSString *)otherUserObjectIDFromMessage:(PFObject *)message;
+ (NSString *)senderIDFromMessage:(PFObject *)message;

// -----------------------------------------------------------------------------------------
#pragma mark - Request Functions
+ (void)requestGetMessagesInCustomerMessagePage:(NSInteger)skip
                                          other:(PFUser *)other
                                       delegate:(id<FMACustomerMessageUtilDelegate>)delegate;
+ (void)requestGetLatestMessagesInCustomerMessagePage:(NSDate *)lastDate
                                                other:(PFUser *)other
                                             delegate:(id<FMACustomerMessageUtilDelegate>)delegate;

@end
