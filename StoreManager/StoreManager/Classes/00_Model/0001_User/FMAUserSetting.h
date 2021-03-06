//
//  FMAUserSetting.h
// StoreManager
//
//  Created by Cheng Xian on 9/14/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FMAUserSetting : NSObject<NSCoding>

// --------------------------------------------------------------------------------------
@property (nonatomic)           CGFloat             price1;
@property (nonatomic)           CGFloat             price2;
@property (strong,  nonatomic)  NSString            *searchString;
@property (strong,  nonatomic)  NSMutableArray      *checkedCategoryIdList;
@property (strong,  nonatomic)  NSMutableDictionary *balance;
@property (nonatomic)           int                 browseMode;
@property (nonatomic)           BOOL                bChanged;

// --------------------------------------------------------------------------------------
#pragma mark - Singleton Mehtod
+ (id)sharedInstance;

// --------------------------------------------------------------------------------------
#pragma mark - Utility Functions
- (void)store;

@end
