/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:34 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <FBSessionLoginStrategy.h>

@interface FBSessionAppSwitchingLoginStategy : NSObject <FBSessionLoginStrategy> {
	NSString* _methodName; 
}
@property (copy) NSString* methodName; 				//@synthesize methodName=_methodName - In the implementation block
-(void)setMethodName:(id)arg1;
-(BOOL)tryPerformAuthorizeWithParams:(id)arg1 session:(id)arg2 logger:(id)arg3;
-(void)dealloc;
-(id)init;
@end