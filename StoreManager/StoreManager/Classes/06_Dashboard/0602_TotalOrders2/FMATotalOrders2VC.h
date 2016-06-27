//
//  FMATotalOrders2VC.h
// StoreManager
//
//  Created by Cheng Xian on 10/20/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"
#import "FMATotalOrders2Cell.h"
#import "FMATotalOrdersUtil.h"
#import "FMABackgroundUtil.h"

@interface FMATotalOrders2VC : UITableViewController<UITableViewDataSource, UITableViewDelegate, FMABackgroundUtilDelegate, FMATotalOrdersUtilDelegate>

// --------------------------------------------------------------------------------------
@property (strong, 	nonatomic)      PFImageView *imageviewBackground;

// ----------------------------------------------------------------------------------
@property (strong,  nonatomic)  MBProgressHUD   *hud;
@property (strong,  nonatomic)  UILabel         *labelEmpty;

@end
