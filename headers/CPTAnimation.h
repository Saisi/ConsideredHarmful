/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:27:52 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTAnimation : NSObject {
	NSMutableArray* animationOperations; 
	NSMutableArray* runningAnimationOperations; 
	NSMutableArray* expiredAnimationOperations; 
	NSTimer* timer; 
	float timeOffset; 
	int defaultAnimationCurve; 
}
@property (assign,nonatomic) float timeOffset; 
@property (assign,nonatomic) int defaultAnimationCurve; 
@property (nonatomic,retain) NSMutableArray* animationOperations; 
@property (nonatomic,retain) NSMutableArray* runningAnimationOperations; 
@property (nonatomic,retain) NSMutableArray* expiredAnimationOperations; 
@property (nonatomic,retain) NSTimer* timer; 
+(SEL)setterFromProperty:(id)arg1;
+(id)animate:(id)arg1 property:(id)arg2 period:(id)arg3 animationCurve:(int)arg4 delegate:(id)arg5;
+(id)animate:(id)arg1 property:(id)arg2 from:(float)arg3 to:(float)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+(id)animate:(id)arg1 property:(id)arg2 from:(float)arg3 to:(float)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+(id)animate:(id)arg1 property:(id)arg2 from:(float)arg3 to:(float)arg4 duration:(float)arg5;
+(id)animate:(id)arg1 property:(id)arg2 fromPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+(id)animate:(id)arg1 property:(id)arg2 fromPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+(id)animate:(id)arg1 property:(id)arg2 fromPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 duration:(float)arg5;
+(id)animate:(id)arg1 property:(id)arg2 fromSize:(CGSize)arg3 toSize:(CGSize)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+(id)animate:(id)arg1 property:(id)arg2 fromSize:(CGSize)arg3 toSize:(CGSize)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+(id)animate:(id)arg1 property:(id)arg2 fromSize:(CGSize)arg3 toSize:(CGSize)arg4 duration:(float)arg5;
+(id)animate:(id)arg1 property:(id)arg2 fromRect:(CGRect)arg3 toRect:(CGRect)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+(id)animate:(id)arg1 property:(id)arg2 fromRect:(CGRect)arg3 toRect:(CGRect)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+(id)animate:(id)arg1 property:(id)arg2 fromRect:(CGRect)arg3 toRect:(CGRect)arg4 duration:(float)arg5;
+(id)animate:(id)arg1 property:(id)arg2 fromDecimal:(=bbbbbS[=8411188])arg3 toDecimal:(=bbbbbS[=8411188])arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+(id)animate:(id)arg1 property:(id)arg2 fromDecimal:(=bbbbbS[=8411188])arg3 toDecimal:(=bbbbbS[=8411188])arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+(id)animate:(id)arg1 property:(id)arg2 fromDecimal:(=bbbbbS[=8411188])arg3 toDecimal:(=bbbbbS[=8411188])arg4 duration:(float)arg5;
+(id)animate:(id)arg1 property:(id)arg2 fromPlotRange:(id)arg3 toPlotRange:(id)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+(id)animate:(id)arg1 property:(id)arg2 fromPlotRange:(id)arg3 toPlotRange:(id)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+(id)animate:(id)arg1 property:(id)arg2 fromPlotRange:(id)arg3 toPlotRange:(id)arg4 duration:(float)arg5;
+(id)sharedInstance;
-(id)addAnimationOperation:(id)arg1;
-(void)removeAnimationOperation:(id)arg1;
-(?*)timingFunctionForAnimationCurve:(int)arg1;
-(void)removeAllAnimationOperations;
-(void)setDefaultAnimationCurve:(int)arg1;
-(void)setAnimationOperations:(id)arg1;
-(void)setRunningAnimationOperations:(id)arg1;
-(void)setExpiredAnimationOperations:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setTimeOffset:(float)arg1;
-(void)update:(id)arg1;
-(void)setTimer:(id)arg1;
@end