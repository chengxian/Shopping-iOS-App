//
//  FMATabView.h
// StoreManager
//
//  Created by Cheng Xian on 8/22/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FMATabView;
// -----------------------------------------------------------------------------------------
// FMATabViewDelegate Protocol
// -----------------------------------------------------------------------------------------
@protocol FMATabViewDelegate <NSObject>

- (void)tabView:(FMATabView *)tabView didSelectItemAtIndex:(NSInteger)index;

@end

// -----------------------------------------------------------------------------------------
// FMATabView Class
// -----------------------------------------------------------------------------------------
@interface FMATabView : UIView

// -----------------------------------------------------------------------------------------
@property (weak, nonatomic)   id<FMATabViewDelegate> delegate;

// -----------------------------------------------------------------------------------------
@property (strong, nonatomic) IBOutletCollection(UILabel)   NSArray *labelButtonContainers;
@property (strong, nonatomic) IBOutletCollection(UIButton)  NSArray *btnButtons;

// -----------------------------------------------------------------------------------------
@property (nonatomic)           NSInteger   selectedIndex;
@property (strong, nonatomic)   UIColor     *colorSelected;
@property (strong, nonatomic)   UIColor     *colorNormal;

@end
