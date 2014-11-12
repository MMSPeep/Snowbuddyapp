//
//  DetailViewController.h
//  Snowbuddies
//
//  Created by Javier Coindreau on 11/12/14.
//  Copyright (c) 2014 Millburn Middle School. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

