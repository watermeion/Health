//
//  GYBDetialView.h
//  TableView
//
//  Created by Mac on 5/17/14.
//  Copyright (c) 2014 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DPMeterView.h"
#import "UIBezierPath+BasicShapes.h"
@interface GYBDetialView : UIView
@property (weak, nonatomic) IBOutlet UINavigationBar *navigationBar;
@property (strong, nonatomic) IBOutlet DPMeterView *statusView;
- (void)updateProgressWithDelta:(CGFloat)delta animated:(BOOL)animated ;
@end
