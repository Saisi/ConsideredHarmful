/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:25:00 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIApplicationDelegate.h>
#import <BITHockeyManagerDelegate.h>
#import <BITUpdateManagerDelegate.h>
#import <BITCrashManagerDelegate.h>

@interface c: UIResponder <UIApplicationDelegate, tryPrintIvarse, BITUpdateManagerDelegate, BITCrashManagerDelegate> {
	IIViewDeckController* deckController; 
	UIWindow* window; 
}
@property (nonatomic,retain) UIWindow* window; 
@property (copy) IIViewDeckController* deckController; 
-(void)deleteCoreDataIfModelChangeAutomaticallyDelete:(BOOL)arg1;
-(void)setupParse;
-(void)setupAppearance;
-(void)checkLogin;
-(id)customDeviceIdentifierForUpdateManager:(id)arg1;
-(BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
-(void)applicationWillTerminate:(id)arg1;
-(void)applicationDidBecomeActive:(id)arg1;
-(void)applicationWillResignActive:(id)arg1;
-(void)applicationDidEnterBackground:(id)arg1;
-(void)applicationWillEnterForeground:(id)arg1;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
-(void)setWindow:(id)arg1;
-(void).cxx_destruct;
@end