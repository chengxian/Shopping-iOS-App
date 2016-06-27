//
//  FMAChooseCategoryVC.h
// StoreManager
//
//  Created by Cheng Xian on 9/3/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "MBProgressHUD.h"

@class FMAChooseCategoryVC;
// ------------------------------------------------------------------------------------
// FMAChooseCategoryVCDelegate Protocol
// ------------------------------------------------------------------------------------
@protocol FMAChooseCategoryVCDelegate <NSObject>

- (void)chooseCategoryVCDidCancel;
- (void)chooseCategoryVC:(FMAChooseCategoryVC *)controller didSelectCategory:(PFObject *)category;

@end

// ------------------------------------------------------------------------------------
// FMAChooseCategoryVC Class
// ------------------------------------------------------------------------------------
@interface FMAChooseCategoryVC : UIViewController<UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

// ------------------------------------------------------------------------------------
@property (weak,    nonatomic) id<FMAChooseCategoryVCDelegate> delegate;
@property (strong,  nonatomic) MBProgressHUD    *hud;
@property (strong,  nonatomic) PFObject         *category;

// ------------------------------------------------------------------------------------
@property (weak,    nonatomic) IBOutlet UICollectionView   *collectionview;

@end
