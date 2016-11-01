//
//  OWSDKMissionDetail.h
//  OWSDKCoreKitObjectC
//
//  Created by fukun xing on 16/10/11.
//  Copyright © 2016年 fukun xing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>


@interface OWSDKMissionDetail : MTLModel <MTLJSONSerializing>
@property (nonatomic,copy,readonly) NSString *program_introduction;
@property (nonatomic,copy,readonly) NSString *end_date;
@property (nonatomic,copy,readonly) NSString *program_logo;
@property (nonatomic,copy,readonly) NSString *program_name;
@property (nonatomic,copy,readonly) NSString *task_reward;
@property (nonatomic,copy,readonly) NSString *task_progress;
@property (nonatomic,copy,readonly) NSString *category_name;
@property (nonatomic,copy,readonly) NSString *program_description;
@property (nonatomic,copy,readonly) NSString *program_difficulty;
@property (nonatomic,copy,readonly) NSString *prize;
@property (nonatomic,copy,readonly) NSString *participate_number;
@property (nonatomic,assign,readonly) BOOL   *effective;
@property (nonatomic,assign,readonly) BOOL   *memberInfoFlag;
@end


@interface OWSDKMissionDetailImages : MTLModel <MTLJSONSerializing>
@property (nonatomic,copy,readonly)     NSString *effect_description;
@property (nonatomic,copy,readonly)     NSString *finished_status;
@property (nonatomic,copy,readonly)     NSString *endTime;
@property (nonatomic,copy,readonly)     NSString *effect_reward;
@property (nonatomic,strong,readonly)   NSNumber *effectModuleCode;
@property (nonatomic,strong,readonly)   NSNumber *effectId;

@end

@interface OWSDKMissionDetailEffects : MTLModel <MTLJSONSerializing>
@property (nonatomic,copy,readonly) NSString *screenshotPath;
@end
