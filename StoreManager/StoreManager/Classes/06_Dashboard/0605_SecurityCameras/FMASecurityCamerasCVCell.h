//
//  FMASecurityCamerasCVCell.h
// StoreManager
//
//  Created by Cheng Xian on 8/25/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FMASecurityCamerasCVCell : UICollectionViewCell

// -----------------------------------------------------------------------------------
@property (weak, nonatomic) IBOutlet UIButton *btnPlay;

// -----------------------------------------------------------------------------------
#pragma mark - Main Functions
- (void)configureCellWithData:(id)data;

@end
