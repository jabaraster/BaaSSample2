//
//  SignUpViewController.h
//  BaaSSample2
//
//  Created by 河野 智遵 on 13/10/23.
//  Copyright (c) 2013年 河野 智遵. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignUpViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *userNameText;
@property (weak, nonatomic) IBOutlet UITextField *passwordText;
@property (weak, nonatomic) IBOutlet UITextField *passwordConfirmationText;

- (IBAction)onBack:(id)sender;
- (IBAction)onRegister:(id)sender;

@end
