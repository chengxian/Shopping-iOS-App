//
//  FMBMessageEmployeesUtil.h
//  StoreBuyer
//
//  Created by Cheng Xian on 9/26/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

// -----------------------------------------------------------------------------------------
// FMBMessageEmployeesUtilDelegate Protocol
// -----------------------------------------------------------------------------------------
@protocol FMBMessageEmployeesUtilDelegate<NSObject>

- (void)requestGetEmployeesInMessageEmployeesPageWithFilterParamsDidRespondWithEmployees:(NSArray *)employees;

@end

// -----------------------------------------------------------------------------------------
// FMBMessageEmployeesUtil Class
// -----------------------------------------------------------------------------------------
@interface FMBMessageEmployeesUtil : NSObject

// -----------------------------------------------------------------------------------------
#pragma mark - Utility Functions
+ (void)setDistanceLabel:(UILabel *)labelDistance withUser:(PFUser *)other;

// -----------------------------------------------------------------------------------------
#pragma mark - Request Functions
+ (void)requestGetEmployeesInMessageEmployeesPageWithFilterParams:(NSInteger)skip
                                                         delegate:(id<FMBMessageEmployeesUtilDelegate>)delegate;

@end
