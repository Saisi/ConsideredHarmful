/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:17 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFCachedCommandRunner : NSObject {
}
+(id)runCommandAsync:(id)arg1 inOperation:(id)arg2 cachePolicy:(int)arg3 maxCacheAge:(double)arg4;
+(id)getCachedResultForCommandAsync:(id)arg1 inOperation:(id)arg2 maxCacheAge:(double)arg3;
+(id)runCommandAsync:(id)arg1 cachePolicy:(int)arg2 maxCacheAge:(double)arg3;
+(void)initialize;
@end