//
//  FMAMessageBoardUtil.h
// StoreManager
//
//  Created by Cheng Xian on 9/22/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

// -----------------------------------------------------------------------------------------
// FMAMessageBoardUtilDelegate Protocol
// -----------------------------------------------------------------------------------------
@protocol FMAMessageBoardUtilDelegate<NSObject>

- (void)requestGetMessagesInMessageBoardPageWithFilterParamsDidRespondWithMessages:(NSArray *)messages;
- (void)requestGetLatestMessagesInMessageBoardPageWithFilterParamsDidRespondWithMessages:(NSArray*)messages;

@end

// -----------------------------------------------------------------------------------------
// FMAMessageBoardUtil Class
// -----------------------------------------------------------------------------------------
@interface FMAMessageBoardUtil : NSObject

// -----------------------------------------------------------------------------------------
#pragma mark - Utility Functions
+ (NSString *)senderIDFromMessage:(PFObject *)message;
+ (NSString *)userFirstNameFromSenderId:(NSString *)senderId dataSource:(NSArray *)dataSource;

// -----------------------------------------------------------------------------------------
#pragma mark - Request Functions
+ (void)requestGetMessagesInMessageBoardPageWithFilterParams:(NSInteger)skip
                                                    delegate:(id<FMAMessageBoardUtilDelegate>)delegate;
+ (void)requestGetLatestMessagesInMessageBoardPageWithFilterParams:(NSDate *)lastDate
                                        delegate:(id<FMAMessageBoardUtilDelegate>)delegate;

@end
