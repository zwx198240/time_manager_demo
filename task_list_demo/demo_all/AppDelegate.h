//
//  AppDelegate.h
//  demo_all
//
//  Created by 庄云智 on 2017/3/6.
//  Copyright © 2017年 庄云智. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

