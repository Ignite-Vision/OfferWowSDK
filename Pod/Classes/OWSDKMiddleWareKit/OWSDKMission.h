//
//  OWSDKMission.h
//  OWSDKCoreKitObjectC
//
//  Created by fukun xing on 16/10/11.
//  Copyright © 2016年 fukun xing. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Mantle/Mantle.h>

@interface OWSDKMission : MTLModel <MTLJSONSerializing>

@property (nonatomic,copy)      NSString *detail_url;
@property (nonatomic,strong)    NSNumber *effect_type_id;
@property (nonatomic,copy)      NSString *type_name;
@property (nonatomic,copy)      NSString *leaveSignDay;
@property (nonatomic,copy)      NSString *pro_detail;
@property (nonatomic,copy)      NSString *prompt;
@property (nonatomic,copy)      NSString *startTime;
@property (nonatomic,strong)    NSNumber *task_id;
@property (nonatomic,strong)    NSNumber *task_integral;
@property (nonatomic,copy)      NSString *task_logo;
@property (nonatomic,copy)      NSString *task_title;
@property (nonatomic,strong)    NSNumber *task_type_id;
@property (nonatomic,copy)      NSString *task_unit;
@property (nonatomic,assign)    NSInteger task_status;
@property (nonatomic,assign)    BOOL is_sign;

@end
