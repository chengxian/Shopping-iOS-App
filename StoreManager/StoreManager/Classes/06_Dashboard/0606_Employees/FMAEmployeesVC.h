//
//  FMAEmployeesVC.h
// StoreManager
//
//  Created by Cheng Xian on 8/25/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"
#import "FMAEmployeesUtil.h"
#import "FMAMessageBoardVC.h"
#import "FMAEmployeeMessageVC.h"
#import "FMABackgroundUtil.h"

@interface FMAEmployeesVC : UIViewController<UICollectionViewDataSource, UICollectionViewDelegate,FMAEmployeesUtilDelegate, FMABackgroundUtilDelegate>

// --------------------------------------------------------------------------------------
@property (strong, 	nonatomic)      PFImageView *imageviewBackground;

// ----------------------------------------------------------------------------------
@property (strong,  nonatomic)      MBProgressHUD *hud;
@property (strong,  nonatomic)      UILabel       *labelEmpty;

// ----------------------------------------------------------------------------------
@property (weak,    nonatomic)     IBOutlet    UICollectionView     *collectionview;
@property (weak,    nonatomic)     IBOutlet    UIView               *viewBottom;

@end
