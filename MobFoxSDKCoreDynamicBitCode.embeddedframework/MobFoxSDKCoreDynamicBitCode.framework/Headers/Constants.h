//
//  Constants.h
//  MobFoxSDKCore
//
//  Created by Itamar Nabriski on 11/9/15.
//  Copyright © 2015 Itamar Nabriski. All rights reserved.
//


#import <UIKit/UIKit.h>

/* Versions */
#define SDK_VERSION @"Core_2.2.7"
#define OS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#define FW_VERSION [[NSBundle mainBundle] objectForInfoDictionaryKey: @"CFBundleShortVersionString"]
#define BUILD_VERSION [[NSBundle mainBundle] objectForInfoDictionaryKey: (NSString *)kCFBundleVersionKey]

/* Errors */
#define ERROR_DOMAIN @""

/* Screen Dimentions */
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height








