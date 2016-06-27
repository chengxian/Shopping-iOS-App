//
//  FMADeliveryMethodsCVCell.h
// StoreManager
//
//  Created by Cheng Xian on 9/23/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FMADeliveryMethodsCVCell : UICollectionViewCell

// -----------------------------------------------------------------------------------
@property (weak, nonatomic) IBOutlet UILabel     *labelTitle;

// -----------------------------------------------------------------------------------
#pragma mark - Main Functions
- (void)configureCellWithData:(id)data;
- (void)changeColorWithSelected:(BOOL)bSelected;

@end
