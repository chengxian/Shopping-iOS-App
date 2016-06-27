//
//  FMAChooseColorCVCell.h
// StoreManager
//
//  Created by Cheng Xian on 9/3/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FMAChooseColorCVCell : UICollectionViewCell

// -----------------------------------------------------------------------------------
@property (weak, nonatomic) IBOutlet UILabel     *labelTitle;
@property (weak, nonatomic) IBOutlet UILabel     *labelBack;
@property (weak, nonatomic) IBOutlet UIButton    *btnChecked;

// -----------------------------------------------------------------------------------
#pragma mark - Main Functions
- (void)configureCellWithData:(id)data;

@end
