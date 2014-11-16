/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:49 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>

@interface PFViewUtils : NSObject <UIAlertViewDelegate> {
	BOOL alertShowing; 
	BOOL usesOfflineMessage; 
	BOOL usesErrorMessage; 
}
@property (assign,nonatomic) BOOL usesOfflineMessage; 
@property (assign,nonatomic) BOOL usesErrorMessage; 
+(id)utils;
+(void)initialize;
-(void)setUsesOfflineMessage:(BOOL)arg1;
-(void)setUsesErrorMessage:(BOOL)arg1;
-(void)showOfflineError;
-(void)showError;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)alertViewCancel:(id)arg1;
@end