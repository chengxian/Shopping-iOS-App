//
//  FMAItemBarcodeScanVC.h
// StoreManager
//
//  Created by Cheng Xian on 9/15/14.
//  Copyright (c) 2014 Cheng Xian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "RMScannerView.h"

// ----------------------------------------------------------------------------------------
// FMAItemBarcodeScanVCDelegate Protocol
// ----------------------------------------------------------------------------------------
@protocol FMAItemBarcodeScanVCDelegate<NSObject>

- (void)itemBarcodeScanVCDidScanCode:(NSString *)scannedCode onCodeType:(NSString *)codeType;

@end

// ----------------------------------------------------------------------------------------
// FMAItemBarcodeScanVC Class
// ----------------------------------------------------------------------------------------
@interface FMAItemBarcodeScanVC : UIViewController<RMScannerViewDelegate>

// ----------------------------------------------------------------------------------------
@property (weak,    nonatomic) id<FMAItemBarcodeScanVCDelegate> delegate;

// ----------------------------------------------------------------------------------------
@property (strong,  nonatomic) PFImageView *imageviewBackground;

// ----------------------------------------------------------------------------------------
@property (weak,    nonatomic) IBOutlet     UIView          *viewBack1;
@property (strong,  nonatomic) IBOutlet     RMScannerView   *scannerView;
@property (weak,    nonatomic) IBOutlet     UILabel         *statusText;

@end
