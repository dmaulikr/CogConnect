//
//  CogConnectAppDelegate.h
//  CogConnect
//
//  Created by Edward O'Meara on 3/29/11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface CogConnectAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
	int _difficulty;
}

@property (nonatomic, retain) UIWindow *window;

@end
