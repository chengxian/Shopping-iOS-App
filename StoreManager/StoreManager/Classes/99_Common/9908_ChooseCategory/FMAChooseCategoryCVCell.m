//
//  FMAChooseCategoryCVCell.m
// StoreManager
//
//  Created by Cheng Xian on 9/3/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import "FMAChooseCategoryCVCell.h"
#import "FMAData.h"
#import "FMAConstants.h"
#import "FMAUtil.h"
#import "FMAThemeManager.h"

@implementation FMAChooseCategoryCVCell

// --------------------------------------------------------------------------------------------------------------------------
#pragma mark - Basic Functions
- (void)printLogWith:(NSString *)logMessage
{
    if (!debug || !debugFMAChooseCategoryCVCell) return;
    
    NSString *logString = [NSString stringWithFormat:@"%@ %@", self.class, logMessage];
    
    NSLog(@"%@", logString);
}

- (void)setSelected:(BOOL)selected
{
}

// --------------------------------------------------------------------------------------------------------------------------
#pragma mark - Main Functions
- (void)configureCellWithData:(id)data
{
    [self printLogWith:@"configureCellWithData"];
    
    [self initTheme];
    
    if (data)
    {
        _labelTitle.text = data[kFMCategoryNameKey];
    }
}

- (void)initTheme
{ 
    [FMAThemeManager makeCircleWithView:_btnImage
                            borderColor:RGBHEX(0xffffff, 1.f)
                            borderWidth:COMMON_WIDTH_FOR_CIRCLE_BORDER];
    
    _btnChecked.hidden = YES;
}

@end
