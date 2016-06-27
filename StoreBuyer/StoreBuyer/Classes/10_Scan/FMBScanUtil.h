//
//  FMBScanUtil.h
//  StoreBuyer
//
//  Created by Cheng Xian on 9/24/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

// --------------------------------------------------------------------------------------------
// FMBScanUtilDelegate Protocol
// --------------------------------------------------------------------------------------------
@protocol FMBScanUtilDelegate<NSObject>

- (void)requestGetProductByBarcodeDidRespondWithProduct:(id)product;

@end

// --------------------------------------------------------------------------------------------
// FMBScanUtil Class
// --------------------------------------------------------------------------------------------
@interface FMBScanUtil : NSObject

// --------------------------------------------------------------------------------------------
#pragma mark - Utility Functions
+ (CGFloat)totalPriceFromProducts:(NSArray *)products;

// --------------------------------------------------------------------------------------------
#pragma mark - Request Functions
+ (void)requestGetProductByBarcode:(NSString *)barcode delegate:(id<FMBScanUtilDelegate>)delegate;

@end
