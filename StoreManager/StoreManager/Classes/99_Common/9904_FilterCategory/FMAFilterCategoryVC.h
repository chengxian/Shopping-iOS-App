//
//  FMAFilterCategoryVC.h
// StoreManager
//
//  Created by Cheng Xian on 8/20/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"

@class FMAFilterCategoryVC;
// ----------------------------------------------------------------------------------------
// FMAFilterCategoryVCDelegate Protocol
// ----------------------------------------------------------------------------------------
@protocol FMAFilterCategoryVCDelegate <NSObject>

- (void)filterCategoryVCDidCancel;
- (void)filterCategoryVCDidSearch;

@end

// ----------------------------------------------------------------------------------------
// FMAFilterCategoryVC Class
// ----------------------------------------------------------------------------------------
@interface FMAFilterCategoryVC : UIViewController

// ----------------------------------------------------------------------------------------
@property (weak,    nonatomic) id<FMAFilterCategoryVCDelegate> delegate;

@property (strong,  nonatomic) MBProgressHUD               *hud;

// ----------------------------------------------------------------------------------------
@property (weak,    nonatomic) IBOutlet UIButton           *btnCheckAll;
@property (weak,    nonatomic) IBOutlet UICollectionView   *collectionview;

@end
