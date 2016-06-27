//
//  FMAFilterCategoryCVCell.h
// StoreManager
//
//  Created by Cheng Xian on 8/20/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FMAFilterCategoryCVCell : UICollectionViewCell

// -----------------------------------------------------------------------------------
@property (weak, nonatomic) IBOutlet UIButton    *btnImage;
@property (weak, nonatomic) IBOutlet UILabel     *labelTitle;
@property (weak, nonatomic) IBOutlet UIButton    *btnChecked;

// -----------------------------------------------------------------------------------
#pragma mark - Main Functions
- (void)configureCellWithData:(id)data;

@end
