/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:29:01 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <FBRequestDelegate.h>

@interface FBFrictionlessRequestSettings : NSObject <FBRequestDelegate> {
	NSArray* _allowedRecipients; 
	FBRequest* _activeRequest; 
	BOOL _enabled; 
}
@property (nonatomic,copy) BOOL enabled; 				//@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSArray* recipientIDs; 
@property (retain) NSArray* allowedRecipients; 				//@synthesize allowedRecipients=_allowedRecipients - In the implementation block
@property (retain) FBRequest* activeRequest; 				//@synthesize activeRequest=_activeRequest - In the implementation block
-(void)enableWithFacebook:(id)arg1;
-(void)updateRecipientCacheWithRecipients:(id)arg1;
-(BOOL)isFrictionlessEnabledForRecipient:(id)arg1;
-(void)updateRecipientCacheWithRequestResult:(id)arg1;
-(BOOL)isFrictionlessEnabledForRecipients:(id)arg1;
-(void)setAllowedRecipients:(id)arg1;
-(void)reloadRecipientCacheWithFacebook:(id)arg1;
-(void)request:(id)arg1 didLoad:(id)arg2;
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)dealloc;
-(id)init;
-(void)setActiveRequest:(id)arg1;
@end