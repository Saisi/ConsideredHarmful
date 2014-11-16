/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:29 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBSettings : NSObject {
}
+(id)defaultAppID;
+(id)defaultDisplayName;
+(id)defaultUrlSchemeSuffix;
+(id)defaultURLSchemeWithAppID:(id)arg1 urlSchemeSuffix:(id)arg2;
+(float)defaultJPEGCompressionQuality;
+(BOOL)limitEventAndDataUsage;
+(void)setLimitEventAndDataUsage:(BOOL)arg1;
+(void)publishInstall:(id)arg1;
+(unsigned)restrictedTreatment;
+(id)loggingBehavior;
+(BOOL)isBetaFeatureEnabled:(unsigned)arg1;
+(void)setDefaultAppID:(id)arg1;
+(void)setDefaultUrlSchemeSuffix:(id)arg1;
+(BOOL)shouldAutoPublishInstall;
+(void)autoPublishInstallImpl:(id)arg1;
+(void)publishInstall:(id)arg1 withHandler:(id)arg2 isAutoPublish:(BOOL)arg3;
+(void)publishInstall:(id)arg1 withHandler:(id)arg2;
+(void)setShouldAutoPublishInstall:(BOOL)arg1;
+(id)sdkVersion;
+(void)setLoggingBehavior:(id)arg1;
+(void)setClientToken:(id)arg1;
+(void)setDefaultDisplayName:(id)arg1;
+(void)setrestrictedTreatment:(unsigned)arg1;
+(void)setResourceBundleName:(id)arg1;
+(id)resourceBundleName;
+(void)setFacebookDomainPart:(id)arg1;
+(id)facebookDomainPart;
+(void)setdefaultJPEGCompressionQuality:(float)arg1;
+(void)enableBetaFeatures:(unsigned)arg1;
+(void)enableBetaFeature:(unsigned)arg1;
+(void)disableBetaFeature:(unsigned)arg1;
+(void)autoPublishInstall:(id)arg1;
+(id)clientToken;
+(id)appVersion;
+(void)setAppVersion:(id)arg1;
@end