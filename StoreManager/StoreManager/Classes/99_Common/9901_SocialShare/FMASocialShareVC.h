//
//  FMASocialShareVC.h
// StoreManager
//
//  Created by Cheng Xian on 8/19/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FMAData.h"

@class FMASocialShareVC;
// ----------------------------------------------------------------------------------------
// FMASocialShareVCDelegate Protocol
// ----------------------------------------------------------------------------------------
@protocol FMASocialShareVCDelegate <NSObject>

- (void)socialShareVCDidCancel;
- (void)socialShareVCDidClickShareType:(FMAShareType)shareType;

@end

// ----------------------------------------------------------------------------------------
// FMASocialShareVC Class
// ----------------------------------------------------------------------------------------
@interface FMASocialShareVC : UIViewController<UICollectionViewDataSource, UICollectionViewDelegate>

// ----------------------------------------------------------------------------------------
@property (weak, nonatomic) id<FMASocialShareVCDelegate> delegate;

// ----------------------------------------------------------------------------------------
@property (weak, nonatomic) IBOutlet UICollectionView *collectionview;

@end
