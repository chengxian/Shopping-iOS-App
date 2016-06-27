//
//  FMABrowseUtil.h
// StoreManager
//
//  Created by Cheng Xian on 9/15/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

// --------------------------------------------------------------------------------------------
// FMABrowseUtilDelegate Protocol
// --------------------------------------------------------------------------------------------
@protocol FMABrowseUtilDelegate<NSObject>

- (void)requestGetProductsInBrowsePageWithFilterParamsDidRespondWithProducts:(NSArray *)products;

@end

// --------------------------------------------------------------------------------------------
// FMABrowseUtil Class
// --------------------------------------------------------------------------------------------
@interface FMABrowseUtil : NSObject

// --------------------------------------------------------------------------------------------
#pragma mark - Utility Functions
+ (void)setDistanceLabel:(UILabel *)labelDistance inViewModeGrid:(int)viewMode forProduct:(PFObject *)object;

// --------------------------------------------------------------------------------------------
#pragma mark - Request Functions
+ (void)requestGetProductsInBrowsePageWithFilterParams:(NSInteger)skip
                                              delegate:(id<FMABrowseUtilDelegate>)delegate;

@end
