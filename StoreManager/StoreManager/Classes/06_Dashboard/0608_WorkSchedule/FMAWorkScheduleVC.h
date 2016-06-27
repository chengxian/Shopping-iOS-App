//
//  FMAWorkScheduleVC.h
// StoreManager
//
//  Created by Cheng Xian on 8/26/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FMABackgroundUtil.h"

@interface FMAWorkScheduleVC : UIViewController<FMABackgroundUtilDelegate>

// --------------------------------------------------------------------------------------
@property (strong, 	nonatomic)      PFImageView *imageviewBackground;

// --------------------------------------------------------------------------------------
@property (weak,    nonatomic)     IBOutlet    UIView           *viewBack1;
@property (weak,    nonatomic)     IBOutlet    UIView           *viewBack2;
@property (weak,    nonatomic)     IBOutlet    UIView           *viewBack3;
@property (weak,    nonatomic)     IBOutlet    UIView           *viewBack4;

@end
