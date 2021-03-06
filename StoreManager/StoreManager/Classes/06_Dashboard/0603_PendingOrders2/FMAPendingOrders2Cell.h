//
//  FMAPendingOrders2Cell.h
// StoreManager
//
//  Created by Cheng Xian on 10/20/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FMAPendingOrders2Cell : UITableViewCell

// ----------------------------------------------------------------------------------------
@property (weak,    nonatomic) IBOutlet UILabel          *labelDate;
@property (weak,    nonatomic) IBOutlet UILabel          *labelNumberOfOrders;
@property (weak,    nonatomic) IBOutlet UILabel          *labelTotalPrice;

// ----------------------------------------------------------------------------------------
#pragma mark - Main Functions
- (void)configureCellWithData:(id)data;

@end
