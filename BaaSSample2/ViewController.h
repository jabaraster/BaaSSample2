//
//  ViewController.h
//  BaaSSample2
//
//  Created by 河野 智遵 on 13/10/23.
//  Copyright (c) 2013年 河野 智遵. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *userNameText;
@property (weak, nonatomic) IBOutlet UITextField *passwordText;

- (IBAction)onSignIn:(id)sender;

@end
