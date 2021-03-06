//
//  FMAEmployeeMessageUtil.m
// StoreManager
//
//  Created by Cheng Xian on 9/22/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import "FMAEmployeeMessageUtil.h"
#import "FMAData.h"
#import "FMAConstants.h"
#import "FMAUtil.h"

@implementation FMAEmployeeMessageUtil

// -------------------------------------------------------------------------------------------------------------------
#pragma mark - Basic Functions
+ (void)printLogWith:(NSString *)logMessage
{
    if (!debug || !debugFMAEmployeeMessageUtil) return;
    
    NSString *logString = [NSString stringWithFormat:@"%@ %@", self.class, logMessage];
    
    NSLog(@"%@", logString);
}

// -------------------------------------------------------------------------------------------------------------------
#pragma mark - Utility Functions
+ (NSString *)otherUserObjectIDFromMessage:(PFObject *)message
{
    PFUser *from = message[kFMMessageFromKey], *to = message[kFMMessageToKey];
    PFUser *user = [PFUser currentUser];
    
    if ([from.objectId isEqualToString:user.objectId])
    {
        return to.objectId;
    }
    
    return from.objectId;
}

+ (NSString *)senderIDFromMessage:(PFObject *)message
{
    PFUser *from = message[kFMMessageFromKey];
    
    return from.objectId;
}

// -------------------------------------------------------------------------------------------------------------------
#pragma mark - Request Params Functions
+ (NSDictionary *)requestParamsForGetMessagesInEmployeeMessagePageWithFilterParams:(NSInteger)skip other:(PFUser *)other
{
    NSMutableDictionary *params = [NSMutableDictionary dictionary];
    
    [params setObject:[NSNumber numberWithInteger:skip] forKey:@"skip"];
    [params setObject:other.objectId                    forKey:@"other"];
    
    return params;
}

+ (NSDictionary *)requestParamsForGetLatestMessagesInEmployeeMessagePageWithFilterParams:(NSDate *)lastDate other:(PFUser *)other
{
    NSMutableDictionary *params = [NSMutableDictionary dictionary];
    
    [params setObject:lastDate          forKey:@"lastDate"];
    [params setObject:other.objectId    forKey:@"other"];
    
    return params;
}

// -------------------------------------------------------------------------------------------------------------------
#pragma mark - Request Functions
+ (void)requestGetMessagesInEmployeeMessagePageWithFilterParams:(NSInteger)skip
                                                          other:(PFUser *)other
                                                         delegate:(id<FMAEmployeeMessageUtilDelegate>)delegate
{
    [self printLogWith:@"requestGetMessagesInEmployeeMessagePageWithFilterParams"];
    
    NSDictionary *params = [self requestParamsForGetMessagesInEmployeeMessagePageWithFilterParams:skip other:other];
    
    [PFCloud callFunctionInBackground:@"getMessagesInEmployeeMessagePageWithFilterParams"
                       withParameters:params
                                block:^(id object, NSError *error)
     {
         [self printLogWith:@"- PFCloud call finished."];
         
         if (error)
         {
             [self printLogWith:[FMAUtil errorStringFromParseError:error WithCode:YES]];
         }
         
         [delegate requestGetMessagesInEmployeeMessagePageWithFilterParamsDidRespondWithMessages:object];
     }];
}

+ (void)requestGetLatestMessagesInEmployeeMessagePageWithFilterParams:(NSDate *)lastDate
                                           other:(PFUser *)other
                                        delegate:(id<FMAEmployeeMessageUtilDelegate>)delegate
{
    [self printLogWith:@"requestGetLatestMessagesInEmployeeMessagePageWithFilterParams"];
    
    NSDictionary *params = [self requestParamsForGetLatestMessagesInEmployeeMessagePageWithFilterParams:lastDate other:other];
    
    [PFCloud callFunctionInBackground:@"getLatestMessagesInEmployeeMessagePageWithFilterParams"
                       withParameters:params
                                block:^(id object, NSError *error)
     {
         [self printLogWith:@"- PFCloud call finished."];
         
         if (error)
         {
             [self printLogWith:[FMAUtil errorStringFromParseError:error WithCode:YES]];
         }
         
         [delegate requestGetLatestMessagesInEmployeeMessagePageWithFilterParamsDidRespondWithMessages:object];
     }];
}

@end
