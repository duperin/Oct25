//
//  Oct25AppDelegate.h
//  Oct25
//
//  Created by Eduardo Perin on 10/24/12.
//  Copyright (c) 2012 Eduardo Perin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class View;

@interface Oct25AppDelegate : UIResponder <UIApplicationDelegate> {
    View *view;
    UIWindow *_window;
}

@property (strong, nonatomic) UIWindow *window;

@end
