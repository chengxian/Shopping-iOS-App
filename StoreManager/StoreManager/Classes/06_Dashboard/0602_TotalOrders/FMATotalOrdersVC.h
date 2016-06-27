//
//  FMATotalOrdersVC.h
// StoreManager
//
//  Created by Cheng Xian on 8/23/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"
#import "FMATotalOrdersUtil.h"
#import "FMATotalOrdersCVCell.h"
#import "FMAReceiptVC.h"
#import "FMABackgroundUtil.h"

@interface FMATotalOrdersVC : UIViewController<UISearchBarDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, FMATotalOrdersUtilDelegate, FMATotalOrdersCVCellDelegate, FMABackgroundUtilDelegate>
{
    BOOL bViewModeGrid;
}

// --------------------------------------------------------------------------------------
@property (strong, 	nonatomic)      PFImageView *imageviewBackground;

// ----------------------------------------------------------------------------------
@property (strong,  nonatomic)      MBProgressHUD *hud;
@property (strong,  nonatomic)      UILabel       *labelEmpty;

// --------------------------------------------------------------------------------------
@property (weak,    nonatomic)     IBOutlet    UICollectionView     *collectionview;
@property (weak,    nonatomic)     IBOutlet    UISearchBar          *searchBar;
@property (weak,    nonatomic)     IBOutlet    UIButton             *btnViewMode;

@end