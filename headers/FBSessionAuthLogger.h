/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:35 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBSessionAuthLogger : NSObject {
	NSString* _ID; 
	NSMutableDictionary* _extras; 
	FBSession* _session; 
	NSString* _authMethod; 
}
@property (nonatomic,copy) NSString* ID; 				//@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary* extras; 				//@synthesize extras=_extras - In the implementation block
@property (assign,nonatomic) FBSession* session; 				//@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString* authMethod; 				//@synthesize authMethod=_authMethod - In the implementation block
-(void)addExtrasForNextEvent:(id)arg1;
-(id)initWithSession:(id)arg1 ID:(id)arg2 authMethod:(id)arg3;
-(void)setAuthMethod:(id)arg1;
-(void)setExtras:(id)arg1;
-(id)newEventParameters;
-(void)logEvent:(id)arg1 params:(id)arg2;
-(void)logEvent:(id)arg1 result:(id)arg2 error:(id)arg3;
-(void)logStartAuth;
-(void)logStartAuthMethod:(id)arg1;
-(void)logEndAuthMethodWithResult:(id)arg1 error:(id)arg2;
-(void)logEndAuthWithResult:(id)arg1 error:(id)arg2;
-(void)setSession:(id)arg1;
-(id)initWithSession:(id)arg1;
-(void)dealloc;
-(void)setID:(id)arg1;
@end