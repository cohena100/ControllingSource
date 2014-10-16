//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Avi Cohen on 10/16/14.
//  Copyright (c) 2014 Avi Cohen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

