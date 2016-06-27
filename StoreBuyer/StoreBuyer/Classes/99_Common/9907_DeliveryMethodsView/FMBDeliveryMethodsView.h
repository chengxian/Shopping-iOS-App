//
//  FMBDeliveryMethodsView.h
//  StoreBuyer
//
//  Created by Cheng Xian on 9/25/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "MBProgressHUD.h"

@class FMBDeliveryMethodsView;
// ----------------------------------------------------------------------------------------
// FMBDeliveryMethodsViewDelegate Protocol
// ----------------------------------------------------------------------------------------
@protocol FMBDeliveryMethodsViewDelegate <NSObject>

- (void)deliveryMethodsView:(FMBDeliveryMethodsView *)view selectDeliveryMethod:(PFObject *)deliveryMethod;

@end

// ----------------------------------------------------------------------------------------
// FMBDeliveryMethodsView Class
// ----------------------------------------------------------------------------------------
@interface FMBDeliveryMethodsView : UIView<UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

// ----------------------------------------------------------------------------------------
@property (weak,    nonatomic) id<FMBDeliveryMethodsViewDelegate> delegate;

// ----------------------------------------------------------------------------------------
@property (strong,  nonatomic)                  MBProgressHUD           *hud;
@property (strong,  nonatomic)                  UILabel                 *labelEmpty;

// ----------------------------------------------------------------------------------------
@property (weak,    nonatomic)      IBOutlet    UICollectionView        *collectionview;

// ----------------------------------------------------------------------------------------
#pragma mark - Utility Functions
- (PFObject *)selectedDeliveryMethod;

@end
