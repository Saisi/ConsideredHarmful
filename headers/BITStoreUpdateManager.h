/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:03 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>

@interface BITStoreUpdateManager : BITHockeyBaseManager <UIAlertViewDelegate> {
	NSString* _newStoreVersion; 
	NSString* _appStoreURLString; 
	NSString* _currentUUID; 
	BOOL _updateAlertShowing; 
	BOOL _lastCheckFailed; 
	id _appDidBecomeActiveObserver; 
	id _networkDidBecomeReachableObserver; 
	BOOL _checkForUpdateOnLaunch; 
	BOOL _updateUIEnabled; 
	BOOL _updateAvailable; 
	BOOL _checkInProgress; 
	BOOL _enableStoreUpdateManager; 
	id _delegate; 
	int _updateSetting; 
	NSString* _countryCode; 
	NSDate* _lastCheck; 
	NSBundle* _mainBundle; 
	NSLocale* _currentLocale; 
	NSUserDefaults* _userDefaults; 
}
@property (assign,nonatomic,__weak) id delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int updateSetting; 				//@synthesize updateSetting=_updateSetting - In the implementation block
@property (nonatomic,retain) NSString* countryCode; 				//@synthesize countryCode=_countryCode - In the implementation block
@property (assign,getter=isCheckingForUpdateOnLaunch,nonatomic) BOOL checkForUpdateOnLaunch; 				//@synthesize checkForUpdateOnLaunch=_checkForUpdateOnLaunch - In the implementation block
@property (assign,getter=isUpdateUIEnabled,nonatomic) BOOL updateUIEnabled; 				//@synthesize updateUIEnabled=_updateUIEnabled - In the implementation block
@property (assign,getter=isUpdateAvailable,nonatomic) BOOL updateAvailable; 				//@synthesize updateAvailable=_updateAvailable - In the implementation block
@property (assign,getter=isCheckInProgress,nonatomic) BOOL checkInProgress; 				//@synthesize checkInProgress=_checkInProgress - In the implementation block
@property (nonatomic,retain) NSDate* lastCheck; 				//@synthesize lastCheck=_lastCheck - In the implementation block
@property (assign,getter=isStoreUpdateManagerEnabled,nonatomic) BOOL enableStoreUpdateManager; 				//@synthesize enableStoreUpdateManager=_enableStoreUpdateManager - In the implementation block
@property (nonatomic,retain) NSBundle* mainBundle; 				//@synthesize mainBundle=_mainBundle - In the implementation block
@property (nonatomic,retain) NSLocale* currentLocale; 				//@synthesize currentLocale=_currentLocale - In the implementation block
@property (nonatomic,retain) NSUserDefaults* userDefaults; 				//@synthesize userDefaults=_userDefaults - In the implementation block
-(void)setEnableStoreUpdateManager:(BOOL)arg1;
-(BOOL)shouldCancelProcessing;
-(BOOL)shouldAutoCheckForUpdates;
-(void)checkForUpdateDelayed;
-(id)lastStoreVersion;
-(BOOL)hasNewVersion:(id)arg1;
-(void)showUpdateAlert;
-(BOOL)processStoreResponseWithString:(id)arg1;
-(void)checkForUpdateManual:(BOOL)arg1;
-(void)setUpdateUIEnabled:(BOOL)arg1;
-(void)setMainBundle:(id)arg1;
-(void)setUserDefaults:(id)arg1;
-(void)didBecomeActiveActions;
-(void)unregisterObservers;
-(void)setUpdateAvailable:(BOOL)arg1;
-(void)setCheckForUpdateOnLaunch:(BOOL)arg1;
-(void)setUpdateSetting:(int)arg1;
-(void)setLastCheck:(id)arg1;
-(void)setCheckInProgress:(BOOL)arg1;
-(void)registerObservers;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
-(void).cxx_destruct;
-(void)setCurrentLocale:(id)arg1;
-(void)startManager;
-(void)setCountryCode:(id)arg1;
-(void)reportError:(id)arg1;
@end