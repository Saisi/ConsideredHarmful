/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:48 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <PFAuthenticationProvider.h>

@interface PFFacebookAuthenticationProvider : NSObject <PFAuthenticationProvider> {
	PFFacebookTokenCachingStrategy* tokenCache; 
	NSString* urlSchemeSuffix; 
	NSString* appId; 
	NSArray* permissions; 
	int currentOperationId; 
	id tokenExtensionCallback; 
	int audience; 
	FBSession* session; 
}
@property (nonatomic,retain) FBSession* session; 
@property (nonatomic,copy) NSString* appId; 
@property (nonatomic,copy) NSArray* permissions; 
@property (nonatomic,copy) NSString* urlSchemeSuffix; 
@property (assign,nonatomic) int audience; 
@property (nonatomic,copy) id tokenExtensionCallback; 
@property (assign) int currentOperationId; 
@property (nonatomic,retain) PFFacebookTokenCachingStrategy* tokenCache; 
-(BOOL)handleOpenURL:(id)arg1;
-(BOOL)restoreAuthentication:(id)arg1;
-(id)authType;
-(void)authenticateWithSuccess:(id)arg1 failure:(id)arg2 cancel:(id)arg3;
-(void)deauthenticate;
-(void)setTokenCache:(id)arg1;
-(void)setCurrentOperationId:(int)arg1;
-(BOOL)containsPublishPermission;
-(id)authDataWithFacebookId:(id)arg1 accessToken:(id)arg2 expiration:(id)arg3;
-(id)rawSession;
-(void)initializeSession;
-(void)reauthorize:(id)arg1;
-(void)setUrlSchemeSuffix:(id)arg1;
-(void)setTokenExtensionCallback:(id)arg1;
-(void)setSession:(id)arg1;
-(void)setPermissions:(id)arg1;
-(id)init;
-(void)cancel;
-(void).cxx_destruct;
-(void)setAppId:(id)arg1;
-(void)setAudience:(int)arg1;
@end