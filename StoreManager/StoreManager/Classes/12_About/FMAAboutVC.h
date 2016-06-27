//
//  FMAAboutVC.h
// StoreManager
//
//  Created by Cheng Xian on 10/18/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FMABackgroundUtil.h"
#import <MapKit/MapKit.h>

@interface FMAAboutVC : UITableViewController<FMABackgroundUtilDelegate>

// --------------------------------------------------------------------------------------
@property (strong, 	nonatomic)      PFImageView *imageviewBackground;

// --------------------------------------------------------------------------------------
@property (weak,    nonatomic) IBOutlet UILabel     *labelCompanyName;
@property (weak,    nonatomic) IBOutlet UILabel     *labelCompanySlogan;
@property (weak,    nonatomic) IBOutlet UITextView  *textviewCompanyDescription;
@property (weak,    nonatomic) IBOutlet UILabel     *labelOpenHour;
@property (weak,    nonatomic) IBOutlet UILabel     *labelCloseHour;

@end