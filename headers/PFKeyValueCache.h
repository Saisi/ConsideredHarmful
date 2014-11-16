/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:25 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFKeyValueCache : NSObject {
	NSCache* memCache; 
	NSString* cacheDir; 
	PFKeyValueDiskCacheDelegate* diskDelegate; 
	int diskOps; 
	NSCondition* flushDoneCondition; 
	unsigned maxDiskCacheBytes; 
	unsigned maxDiskCacheRecords; 
	unsigned maxMemCacheBytesPerRecord; 
}
@property (nonatomic,copy) NSString* cacheDir; 
@property (assign,nonatomic) unsigned maxDiskCacheBytes; 
@property (assign,nonatomic) unsigned maxDiskCacheRecords; 
@property (assign,nonatomic) unsigned maxMemCacheBytesPerRecord; 
+(id)mainCache;
+(void)initialize;
-(id)objectForKey:(id)arg1 maxAge:(double)arg2;
-(id)initWithCacheDir:(id)arg1;
-(void)restoreDefaults;
-(void)clearMemCache;
-(void)enableMemCache:(BOOL)arg1;
-(id)cacheFileForKey:(id)arg1;
-(void)compactDiskCache;
-(void)clearDiskCache;
-(void)waitForDiskFlush;
-(void)setDiskCacheDelegate:(id)arg1;
-(unsigned)diskCacheRecordCount;
-(void)setMaxDiskCacheBytes:(unsigned)arg1;
-(void)setMaxDiskCacheRecords:(unsigned)arg1;
-(void)setMaxMemCacheBytesPerRecord:(unsigned)arg1;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1;
-(void).cxx_destruct;
-(void)setObject:(id)arg1 forKey:(id)arg2;
@end