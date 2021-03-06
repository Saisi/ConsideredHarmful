/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:29:02 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFInternalUtils : NSObject {
}
+(id)loadFromKeychain:(id)arg1;
+(void)deleteFromKeychain:(id)arg1;
+(void)saveToKeychain:(id)arg1 data:(id)arg2;
+(id)serializeToJSON:(id)arg1;
+(id)errorWithCode:(int)arg1 message:(id)arg2;
+(void)setParseServer:(id)arg1;
+(id)errorWithCode:(int)arg1 message:(id)arg2 shouldLog:(BOOL)arg3;
+(id)errorFromResult:(id)arg1 shouldLog:(BOOL)arg2;
+(BOOL)skipBackupOnPath:(id)arg1;
+(id)parsePrivateDir;
+(id)parseDeprecatedDir;
+(id)dataFilePath:(id)arg1;
+(id)createUUID;
+(void)clearCachedInstallationId;
+(id)preciseDateFromString:(id)arg1;
+(id)decodeDictionary:(id)arg1;
+(id)decodeArray:(id)arg1;
+(id)stringFromPreciseDate:(id)arg1;
+(id)getKeychainQuery:(id)arg1;
+(id)httpClient;
+(id)calculateMD5:(id)arg1;
+(id)errorFromResult:(id)arg1;
+(void)deleteDirectoryContents:(id)arg1;
+(void)checkCacheApplicationId;
+(id)installationId;
+(void)clearInstallationId;
+(id)stringFromImpreciseDate:(id)arg1;
+(id)impreciseDateFromString:(id)arg1;
+(void)assertValidClassForValue:(id)arg1;
+(void)assertValidClassForQuery:(id)arg1;
+(void)assertValidClassForOrdering:(id)arg1;
+(BOOL)isContainerClass:(id)arg1;
+(id)parseJSON:(id)arg1;
+(id)cacheDir:(id)arg1;
+(struct dispatch_queue_s*)backgroundQueue;
+(BOOL)isNetworkAvailable:(unsigned)arg1;
+(BOOL)isParseReachable;
+(BOOL)isRetina;
+(id)decodeObject:(id)arg1;
+(id)encodeObject:(id)arg1 allowUnsaved:(BOOL)arg2 allowObjects:(BOOL)arg3;
+(id)addNumber:(id)arg1 withNumber:(id)arg2;
+(void)initialize;
+(id)imageNamed:(id)arg1;
+(id)shadowColor;
@end