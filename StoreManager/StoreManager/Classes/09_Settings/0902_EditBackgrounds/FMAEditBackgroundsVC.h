//
//  FMAEditBackgroundsVC.h
// StoreManager
//
//  Created by Cheng Xian on 8/31/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import "FMAImagePickerAM.h"
#import "MBProgressHUD.h"
#import "FMABackgroundUtil.h"

@interface FMAEditBackgroundsVC : UIViewController<UICollectionViewDataSource, UICollectionViewDelegate, FMAImagePickerAMDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, FMABackgroundUtilDelegate>

// --------------------------------------------------------------------------------------
@property (strong, 	nonatomic)      PFImageView *imageviewBackground;

// --------------------------------------------------------------------------------------
@property (strong,  nonatomic)      MBProgressHUD *hud;

// --------------------------------------------------------------------------------------
@property (weak,    nonatomic)      IBOutlet    UICollectionView *collectionview;

@end
