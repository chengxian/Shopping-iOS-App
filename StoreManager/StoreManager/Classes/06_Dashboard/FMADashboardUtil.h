//
//  FMADashboardUtil.h
// StoreManager
//
//  Created by Cheng Xian on 9/22/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

// -----------------------------------------------------------------------------------------
// FMADashboardUtilDelegate Protocol
// -----------------------------------------------------------------------------------------
@protocol FMADashboardUtilDelegate<NSObject>

@end

// -----------------------------------------------------------------------------------------
// FMADashboardUtil Class
// -----------------------------------------------------------------------------------------
@interface FMADashboardUtil : NSObject

// -----------------------------------------------------------------------------------------
#pragma mark - Utility Functions
+ (void)initDateBarButtonItem:(UIBarButtonItem *)btnItem;

// -----------------------------------------------------------------------------------------
#pragma mark - Request Functions
+ (void)requestGetTotalRevenueInDashboardPageWithParams:(UILabel *)label;
+ (void)requestGetNumberOfTotalOrdersInDashboardPageWithParams:(UILabel *)label;
+ (void)requestGetNumberOfPendingOrdersInDashboardPageWithParams:(UILabel *)label;
+ (void)requestGetNumberOfEmployeesInDashboardPageWithParams:(UILabel *)label;
+ (void)requestGetTotalNumberOfReviewsInDashboardPage:(UILabel *)label;

@end
