//
//  main.m
//  EssentialWax
//
//  Created by strongtu on 26/1/15.
//  Copyright (c) 2015年 strongtu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "Wax/wax.h"
#import "Wax/LuaSocket/lualoadexts.h"

/*
int main(int argc, charchar *argv[])
{
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
    
    wax_start("WoodyPlusWax", luaopen_wax_http, luaopen_wax_json, luaopen_wax_xml, nil);
    
    int retVal = UIApplicationMain(argc, argv, nil, @"WoodyPlusWax");
    
    [pool release];
    
    return retVal;
}
*/
int main(int argc, char * argv[]) {
    @autoreleasepool {
        wax_start("EssentialWax", luax_loadexts, nil);

        //return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
        return UIApplicationMain(argc, argv, nil, @"EssentialWax");
    }
}
