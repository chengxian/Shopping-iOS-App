//
//  FMBDealsUtil.h
//  StoreBuyer
//
//  Created by Cheng Xian on 9/26/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

// -----------------------------------------------------------------------------------------
// FMBDealsUtilDelegate Protocol
// -----------------------------------------------------------------------------------------
@protocol FMBDealsUtilDelegate<NSObject>

- (void)requestGetProductsInDealsDidRespondWithProducts:(NSArray *)products;

@end

// -----------------------------------------------------------------------------------------
// FMBDealsUtil Class
// -----------------------------------------------------------------------------------------
@interface FMBDealsUtil : NSObject

// -----------------------------------------------------------------------------------------
#pragma mark - Utility Functions
+ (void)setDistanceLabel:(UILabel *)labelDistance inViewModeGrid:(BOOL)bViewModeGrid forProduct:(PFObject *)object;

// -----------------------------------------------------------------------------------------
#pragma mark - Request Functions
+ (void)requestGetProductsInDeals:(NSInteger)skip searchString:(NSString *)searchString
                         delegate:(id<FMBDealsUtilDelegate>)delegate;

@end
