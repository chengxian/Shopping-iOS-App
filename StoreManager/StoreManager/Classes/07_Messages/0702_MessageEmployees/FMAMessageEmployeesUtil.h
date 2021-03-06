//
//  FMAMessageEmployeesUtil.h
// StoreManager
//
//  Created by Cheng Xian on 9/22/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

// -----------------------------------------------------------------------------------------
// FMAMessageEmployeesUtilDelegate Protocol
// -----------------------------------------------------------------------------------------
@protocol FMAMessageEmployeesUtilDelegate<NSObject>

- (void)requestGetEmployeesInMessageEmployeesPageWithFilterParamsDidRespondWithEmployees:(NSArray *)employees;

@end

// -----------------------------------------------------------------------------------------
// FMAMessageEmployeesUtil Class
// -----------------------------------------------------------------------------------------
@interface FMAMessageEmployeesUtil : NSObject

// -----------------------------------------------------------------------------------------
#pragma mark - Utility Functions
+ (void)setDistanceLabel:(UILabel *)labelDistance withUser:(PFUser *)other;

// -----------------------------------------------------------------------------------------
#pragma mark - Request Functions
+ (void)requestGetEmployeesInMessageEmployeesPageWithFilterParams:(NSInteger)skip
                                                         delegate:(id<FMAMessageEmployeesUtilDelegate>)delegate;

@end
