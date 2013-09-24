//
//  Tween.h
//  EasingTest
//
//  Created by Takahashi Nobuhiro on 2012/12/19.
//  Copyright (c) 2012年 Takahashi Nobuhiro. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import "TweenObject.h"

#define TWEEN_EASE_NONE @"easeNone"
#define TWEEN_EASE_QUAD_IN @"easeInQuad"
#define TWEEN_EASE_QUAD_OUT @"easeOutQuad"
#define TWEEN_EASE_QUAD_INOUT @"easeInOutQuad"
#define TWEEN_EASE_CUBIC_IN @"easeInCubic"
#define TWEEN_EASE_CUBIC_OUT @"easeOutCubic"
#define TWEEN_EASE_CUBIC_IN_OUT @"easeInOutCubic"
#define TWEEN_EASE_QUART_IN @"easeInQuart"
#define TWEEN_EASE_QUART_OUT @"easeOutQuart"
#define TWEEN_EASE_QUART_INOUT @"easeInOutQuart"
#define TWEEN_EASE_QUINT_IN @"easeInQuint"
#define TWEEN_EASE_QUINT_OUT @"easeOutQuint"
#define TWEEN_EASE_QUINT_IN_OUT @"easeInOutQuint"
#define TWEEN_EASE_SINE_IN @"easeInSine"
#define TWEEN_EASE_SINE_OUT @"easeOutSine"
#define TWEEN_EASE_SINE_INOUT @"easeInOutSine"
#define TWEEN_EASE_EXPO_IN @"easeInExpo"
#define TWEEN_EASE_EXPO_OUT @"easeOutExpo"
#define TWEEN_EASE_EXPO_INOUT @"easeInOutExpo"
#define TWEEN_EASE_CIRC_IN @"easeInCirc"
#define TWEEN_EASE_CIRC_OUT @"easeOutCirc"
#define TWEEN_EASE_CIRC_INOUT @"easeInOutCirc"
#define TWEEN_EASE_ELASTIC_IN @"easeInElastic"
#define TWEEN_EASE_ELASTIC_OUT @"easeOutElastic"
#define TWEEN_EASE_ELASTIC_INOUT @"easeInOutElastic"
#define TWEEN_EASE_BACK_IN @"easeInBack"
#define TWEEN_EASE_BACK_OUT @"easeOutBack"
#define TWEEN_EASE_BACK_INOUT @"easeInOutBack"
#define TWEEN_EASE_BOUNCE_IN @"easeInBounce"
#define TWEEN_EASE_BOUNCE_OUT @"easeOutBounce"
#define TWEEN_EASE_BOUNCE_INOUT @"easeInOutBounce"

    
    
    
    

@interface Tween : NSObject

// add
+ (void)addTween:(id)parent tweenId:(int)tweenId startValue:(double)startValue endValue:(double)endValue time:(double)time delay:(double)delay easing:(NSString *)easing param:(NSMutableDictionary *)param startSEL:(SEL)startSEL updateSEL:(SEL)updateSEL endSEL:(SEL)endSEL;

+ (void)addTween:(id)parent tweenId:(int)tweenId startValue:(double)startValue endValue:(double)endValue time:(double)time delay:(double)delay easing:(NSString *)easing startSEL:(SEL)startSEL updateSEL:(SEL)updateSEL endSEL:(SEL)endSEL;
+ (void) updateAnimations;

+ (double)easeNone:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInQuad:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeOutQuad:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInOutQuad:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInCubic:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeOutCubic:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInOutCubic:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInQuart:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeOutQuart:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInOutQuart:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInQuint:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeOutQuint:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInOutQuint:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInSine:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeOutSine:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInOutSine:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInExpo:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeOutExpo:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInOutExpo:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInCirc:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeOutCirc:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInOutCirc:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInElastic:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeOutElastic:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInOutElastic:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInBack:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeOutBack:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInOutBack:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInBounce:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeOutBounce:(double)t b:(double)b c:(double)c d:(double)d;
+ (double)easeInOutBounce:(double)t b:(double)b c:(double)c d:(double)d;

+(void)stopTweenId:(int)tweenId;
+(void)stopTweenObject:(TweenObject*)tweenObject;

@end
