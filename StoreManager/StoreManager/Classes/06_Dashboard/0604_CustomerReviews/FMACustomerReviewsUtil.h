//
//  FMACustomerReviewsUtil.h
// StoreManager
//
//  Created by Cheng Xian on 9/26/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

// -----------------------------------------------------------------------------------------
// FMACustomerReviewsUtilDelegate Protocol
// -----------------------------------------------------------------------------------------
@protocol FMACustomerReviewsUtilDelegate<NSObject>

- (void)requestGetOrdersInCustomerReviewsPageDidRespondWithOrders:(NSArray *)orders;

@end

// -----------------------------------------------------------------------------------------
// FMACustomerReviewsUtil Class
// -----------------------------------------------------------------------------------------
@interface FMACustomerReviewsUtil : NSObject

// -----------------------------------------------------------------------------------------
#pragma mark - Utility Functions
+ (void)setFirstProductImageFromOrder:(PFObject *)order toImageView:(PFImageView *)imageview;
+ (void)setProductTitlesFromOrder:(PFObject *)order toLabel:(UILabel *)label;

// -----------------------------------------------------------------------------------------
#pragma mark - Request Functions
+ (void)requestGetOrdersInCustomerReviewsPage:(NSInteger)skip searchString:(NSString *)searchString
                                     delegate:(id<FMACustomerReviewsUtilDelegate>)delegate;

@end
