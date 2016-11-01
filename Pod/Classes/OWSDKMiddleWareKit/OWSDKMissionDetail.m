//
//  OWSDKMissionDetail.m
//  OWSDKCoreKitObjectC
//
//  Created by fukun xing on 16/10/11.
//  Copyright © 2016年 fukun xing. All rights reserved.
//

#import "OWSDKMissionDetail.h"

@implementation OWSDKMissionDetail
+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return @{
             @"program_introduction"  : @"program_introduction",
             @"end_date"              : @"end_date",
             @"program_logo"          : @"program_logo",
             @"program_name"          : @"program_name",
             @"task_reward"           : @"task_reward",
             @"task_progress"         : @"task_progress",
             @"category_name"         : @"category_name",
             @"program_description"   : @"program_description",
             @"program_difficulty"    : @"program_difficulty",
             @"prize"                 : @"prize",
             @"participate_number"    : @"participate_number",
             @"effective"             : @"effective",
             @"memberInfoFlag"        : @"memberInfoFlag"
             };
}
@end


@implementation OWSDKMissionDetailEffects
+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return @{
             @"effect_description"  : @"effect_description",
             @"finished_status"     : @"finished_status",
             @"effectId"            : @"effectId",
             @"endTime"             : @"endTime",
             @"effectModuleCode"    : @"effectModuleCode",
             @"effect_reward"       : @"effect_reward",
             };
}
@end


@implementation OWSDKMissionDetailImages

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return @{
             @"screenshotPath"    : @"screenshotPath",
             };
}

@end