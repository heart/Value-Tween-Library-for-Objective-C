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

#define TWEEN_EASE_NONE 0

#define TWEEN_EASE_QUAD_IN 1
#define TWEEN_EASE_QUAD_OUT 2
#define TWEEN_EASE_QUAD_INOUT 3

#define TWEEN_EASE_CUBIC_IN 4
#define TWEEN_EASE_CUBIC_OUT 5
#define TWEEN_EASE_CUBIC_INOUT 6

#define TWEEN_EASE_QUART_IN 7
#define TWEEN_EASE_QUART_OUT 8
#define TWEEN_EASE_QUART_INOUT 9

#define TWEEN_EASE_QUINT_IN 10
#define TWEEN_EASE_QUINT_OUT 11
#define TWEEN_EASE_QUINT_INOUT 12

#define TWEEN_EASE_SINE_IN 13
#define TWEEN_EASE_SINE_OUT 14
#define TWEEN_EASE_SINE_INOUT 15

#define TWEEN_EASE_EXPO_IN 16
#define TWEEN_EASE_EXPO_OUT 17
#define TWEEN_EASE_EXPO_INOUT 18

#define TWEEN_EASE_CIRC_IN 19
#define TWEEN_EASE_CIRC_OUT 20
#define TWEEN_EASE_CIRC_INOUT 21

#define TWEEN_EASE_ELASTIC_IN 22
#define TWEEN_EASE_ELASTIC_OUT 23
#define TWEEN_EASE_ELASTIC_INOUT 24

#define TWEEN_EASE_BACK_IN 25
#define TWEEN_EASE_BACK_OUT 26
#define TWEEN_EASE_BACK_INOUT 27

#define TWEEN_EASE_BOUNCE_IN 28
#define TWEEN_EASE_BOUNCE_OUT 29
#define TWEEN_EASE_BOUNCE_INOUT 30

    
    
    
    

@interface Tween : NSObject

// add
+ (void)addTween:(id)parent tweenId:(int)tweenId startValue:(double)startValue endValue:(double)endValue time:(double)time delay:(double)delay easing:(int)easing param:(NSMutableDictionary *)param startSEL:(SEL)startSEL updateSEL:(SEL)updateSEL endSEL:(SEL)endSEL;

+ (void)addTween:(id)parent tweenId:(int)tweenId startValue:(double)startValue endValue:(double)endValue time:(double)time delay:(double)delay easing:(int)easing startSEL:(SEL)startSEL updateSEL:(SEL)updateSEL endSEL:(SEL)endSEL;
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
