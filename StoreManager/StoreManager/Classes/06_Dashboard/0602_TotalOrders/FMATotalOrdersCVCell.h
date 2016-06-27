//
//  FMATotalOrdersCVCell.h
// StoreManager
//
//  Created by Cheng Xian on 9/23/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@class FMATotalOrdersCVCell;
// -----------------------------------------------------------------------------------
// FMATotalOrdersCVCellDelegate Protocol
// -----------------------------------------------------------------------------------
@protocol FMATotalOrdersCVCellDelegate <NSObject>

- (BOOL)totalOrdersCVCellCheckViewModeGrid;

@end

// -----------------------------------------------------------------------------------
// FMATotalOrdersCVCell Class
// -----------------------------------------------------------------------------------
@interface FMATotalOrdersCVCell : UICollectionViewCell

// -----------------------------------------------------------------------------------
@property (weak, nonatomic) id<FMATotalOrdersCVCellDelegate> delegate;

// -----------------------------------------------------------------------------------
@property (weak, nonatomic) IBOutlet PFImageView        *imageview;
@property (weak, nonatomic) IBOutlet UILabel            *labelProductTitles;
@property (weak, nonatomic) IBOutlet UILabel            *labelTotalPrice;
@property (weak, nonatomic) IBOutlet UILabel            *labelStatus;
@property (weak, nonatomic) IBOutlet UILabel            *labelOrderedPeriod;

// -----------------------------------------------------------------------------------
#pragma mark - Main Functions
- (void)configureCellWithData:(id)data;

@end
