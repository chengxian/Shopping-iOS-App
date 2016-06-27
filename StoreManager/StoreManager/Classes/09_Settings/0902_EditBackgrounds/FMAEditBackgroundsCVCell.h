//
//  FMAEditBackgroundsCVCell.h
// StoreManager
//
//  Created by Cheng Xian on 8/31/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FMAEditBackgroundsCVCell : UICollectionViewCell

// -----------------------------------------------------------------------------------
@property (weak, nonatomic) IBOutlet UILabel     *labelBack;
@property (weak, nonatomic) IBOutlet PFImageView *imageview;
@property (weak, nonatomic) IBOutlet UILabel     *labelTitle;

// -----------------------------------------------------------------------------------
#pragma mark - Main Functions
- (void)configureCellWithData:(id)data;

@end
