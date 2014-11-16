/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:07 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFFacebookTokenCachingStrategy : FBSessionTokenCachingStrategy {
	NSMutableDictionary* tokenInfo; 
}
@property (nonatomic,copy) NSString* accessToken; 
@property (nonatomic,copy) NSString* facebookId; 
@property (nonatomic,copy) NSDate* expirationDate; 
@property (nonatomic,retain) NSMutableDictionary* tokenInfo; 
-(void)setFacebookId:(id)arg1;
-(id)fetchTokenInformation;
-(void)setTokenInfo:(id)arg1;
-(void)clearToken;
-(void)cacheTokenInformation:(id)arg1;
-(void)prepareTokenInfo;
-(void)setAccessToken:(id)arg1;
-(void).cxx_destruct;
-(void)setExpirationDate:(id)arg1;
@end