//
//  OWSDKMission.m
//  OWSDKCoreKitObjectC
//
//  Created by fukun xing on 16/10/11.
//  Copyright © 2016年 fukun xing. All rights reserved.
//

#import "OWSDKMission.h"




@implementation OWSDKMission
+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return @{
             @"detail_url"      : @"detail_url",
             @"effect_type_id"  : @"effect_type_id",
             @"type_name"       : @"type_name",
             @"is_sign"         : @"is_sign",
             @"leaveSignDay"    : @"leaveSignDay",
             @"pro_detail"      : @"pro_detail",
             @"prompt"          : @"prompt",
             @"startTime"       : @"startTime",
             @"task_id"         : @"task_id",
             @"task_integral"   : @"task_integral",
             @"task_logo"       : @"task_logo",
             @"task_status"     : @"task_status",
             @"task_title"      : @"task_title",
             @"task_type_id"    : @"task_type_id",
             @"task_unit"       : @"task_unit",
             @"task_unit"       : @"task_unit",
             };
}
@end
