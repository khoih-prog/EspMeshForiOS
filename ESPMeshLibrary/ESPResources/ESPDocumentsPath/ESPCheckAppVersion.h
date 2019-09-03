//
//  ESPCheckAppVersion.h
//  ESPMeshLibrary
//
//  Created by fanbaoying on 2019/1/4.
//  Copyright © 2019年 zhaobing. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum
{
    ESPVersionSame,
    ESPVersionAscending,
    ESPVersionDescending,
}ESPVersionStatus;

@interface ESPCheckAppVersion : NSObject

+ (ESPCheckAppVersion *)sharedInstance;
- (ESPVersionStatus)checkAppVersion:(NSString *)appId;
- (NSDictionary *)checkAppVersionNumber:(NSString *)appId;
- (BOOL)appVersionUpdate;

// 跳转系统设置页
- (void)gotoSystemSetting;
@end

NS_ASSUME_NONNULL_END
