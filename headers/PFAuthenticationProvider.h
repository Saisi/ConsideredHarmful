/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:48 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol PFAuthenticationProvider
@required
-(BOOL)restoreAuthentication(id):arg1 ;
-(id)authType;
-(void)authenticateWithSuccess(id):arg1 failure(?):arg2 cancel(id):arg3 ;
-(void)deauthenticate;
-(void)cancel;
-(BOOL)restoreAuthentication(id):arg1 ;
-(id)authType;
-(void)authenticateWithSuccess(id):arg1 failure(?):arg2 cancel(id):arg3 ;
-(void)deauthenticate;
-(void)cancel;
@end