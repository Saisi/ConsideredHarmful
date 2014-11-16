/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:27 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBSystemAccountStoreAdapter : NSObject {
	BOOL _forceBlockingRenew; 
	ACAccountStore* _accountStore; 
	ACAccountType* _accountTypeFB; 
}
@property (assign) BOOL forceBlockingRenew; 
@property (copy) BOOL canRequestAccessWithoutUI; 
@property (nonatomic,retain,copy) ACAccountStore* accountStore; 				//@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain,copy) ACAccountType* accountTypeFB; 				//@synthesize accountTypeFB=_accountTypeFB - In the implementation block
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1;
-(void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(int)arg2 isReauthorize:(BOOL)arg3 appID:(id)arg4 session:(id)arg5 handler:(id)arg6;
-(void)setForceBlockingRenew:(BOOL)arg1;
-(void)renewSystemAuthorization:(id)arg1;
-(id)requestAccessToFacebookAccountStoreAsTask:(id)arg1;
-(id)renewSystemAuthorizationAsTask;
-(void)dealloc;
-(id)init;
@end