/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:24:35 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCopying.h>

@interface FBAccessTokenData : NSObject <NSCopying> {
	NSString* _accessToken; 
	NSArray* _permissions; 
	NSDate* _expirationDate; 
	int _loginType; 
	NSDate* _refreshDate; 
	NSDate* _permissionsRefreshDate; 
}
@property (nonatomic,copy,copy) NSString* accessToken; 				//@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSArray* permissions; 				//@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy,copy) NSDate* expirationDate; 				//@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) int loginType; 				//@synthesize loginType=_loginType - In the implementation block
@property (nonatomic,copy) NSDate* refreshDate; 				//@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,copy) NSDate* permissionsRefreshDate; 				//@synthesize permissionsRefreshDate=_permissionsRefreshDate - In the implementation block
+(id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(int)arg4 refreshDate:(id)arg5;
+(id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(int)arg4 refreshDate:(id)arg5 permissionsRefreshDate:(id)arg6;
+(id)createTokenFromFacebookURL:(id)arg1 appID:(id)arg2 urlSchemeSuffix:(id)arg3;
+(id)createTokenFromDictionary:(id)arg1;
-(id)initWithToken:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(int)arg4 refreshDate:(id)arg5 permissionsRefreshDate:(id)arg6;
-(BOOL)isEqualToAccessTokenData:(id)arg1;
-(void)setRefreshDate:(id)arg1;
-(void)setPermissionsRefreshDate:(id)arg1;
-(void)setPermissions:(id)arg1;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1;
-(unsigned)hash;
-(id)description;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1;
@end