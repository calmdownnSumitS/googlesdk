//
//  ViewController.h
//  googleintegrate
//
//  Created by macserver on 6/13/17.
//  Copyright © 2017 macserver. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Google/SignIn.h>


@interface ViewController : UIViewController <GIDSignInUIDelegate>

@property(weak, nonatomic) IBOutlet GIDSignInButton *signInButton;
- (IBAction)didTapSignOut:(id)sender;


@end

