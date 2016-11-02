//
//  OWSDKMiddleWare.h
//  OWSDKCoreKitObjectC
//
//  Created by fukun xing on 16/10/11.
//  Copyright © 2016年 fukun xing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OWSDKModelKit/OWSDKMiddleWareKit.h>

typedef void(^RequestFailedBlock)(id someobject);
typedef void(^RequestMissionsCompletedBlock)(NSArray <OWSDKMission *> *missions);
typedef void(^RequestMissionsDetailCompletedBlock)(OWSDKMissionDetail *missionDetail);
typedef void(^RequestMissionEffectsDetailCompletedBlock)(OWSDKMissionEffectDetail *missionEffectDetail);

@interface OWSDKMiddleWare : NSObject

/**
 *  获取任务列表
 *
 *  @param page    分页;默认:1;
 *  @param type    排序;
 *  @param classid 任务分类;
 *  @param completed <#completed description#>
 *  @param failed    <#failed description#>
 */
-(void)requestMissions:(NSInteger)page sortType:(NSInteger)type classify:(NSInteger)classid CompletedBlock:(RequestMissionsCompletedBlock)completed FailedBlock:(RequestFailedBlock)failed;

/**
 *  获取任务详情
 *
 *  @param mission   <#mission description#>
 *  @param completed <#completed description#>
 *  @param failed    <#failed description#>
 */
-(void)requestMissionsDetail:(OWSDKMission *)mission CompletedBlock:(RequestMissionsDetailCompletedBlock)completed FailedBlock:(RequestFailedBlock)failed;

/**
 *  获取效果详情
 *
 *  @param missionEffect <#missionEffect description#>
 *  @param completed     <#completed description#>
 *  @param failed        <#failed description#>
 */
-(void)requestMissionEffectsDetail:(OWSDKMissionEffect *)missionEffect  CompletedBlock:(RequestMissionEffectsDetailCompletedBlock)completed FailedBlock:(RequestFailedBlock)failed;



/**
 <#Description#>

 @param missionEffect <#missionEffect description#>
 @param parameters    <#parameters description#>
 @param completed     <#completed description#>
 @param failed        <#failed description#>
 */
-(void)requestNextStepEffectsDetail:(OWSDKMissionEffect *)missionEffect otherParameters:(NSMutableDictionary *)parameters CompletedBlock:(RequestMissionEffectsDetailCompletedBlock)completed FailedBlock:(RequestFailedBlock)failed;


/**
 <#Description#>

 @param page   <#page description#>
 @param status <#status description#>
 */
-(void)requestMissionRecords:(NSInteger)page missionStatus:(NSInteger)status;


/**
 <#Description#>

 @param missions <#missions description#>
 */
-(void)requestMissionEffectRecords:(OWSDKMission *)missions;





+(instancetype)shareMiddleWare;


@end
