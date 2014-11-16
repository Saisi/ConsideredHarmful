/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:27:52 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <CLLocationManagerDelegate.h>

@interface MVLocationManager : NSObject <CLLocationManagerDelegate> {
	CLLocationManager* locationManager; 
	double timeoutValue; 
	BOOL showDeniedMessage; 
	id returnHandler; 
}
@property (assign,nonatomic) double timeoutValue; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) BOOL showDeniedMessage; 
+(id)sharedManager;
-(void)setTimeoutValue:(double)arg1;
-(void)setShowDeniedMessage:(BOOL)arg1;
-(void)getUsersCurrentLocationWithHandler:(id)arg1;
-(id)init;
-(void).cxx_destruct;
-(void)setDesiredAccuracy:(double)arg1;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
@end