//
//  FMAImageCaptionCVCell.h
// StoreManager
//
//  Created by Cheng Xian on 8/20/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FMAImageCaptionCVCell : UICollectionViewCell

// -----------------------------------------------------------------------------------
@property (weak, nonatomic) IBOutlet UILabel    *labelIconContainer;
@property (weak, nonatomic) IBOutlet UIButton   *btnImage;
@property (weak, nonatomic) IBOutlet UILabel    *labelTitle;

// -----------------------------------------------------------------------------------
#pragma mark - Main Functions
- (void)configureCellWithData:(id)data;

@end
