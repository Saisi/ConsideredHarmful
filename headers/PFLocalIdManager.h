/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:06 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFLocalIdManager : NSObject {
	NSString* diskPath; 
	NSObject* lock; 
	NSMutableDictionary* inMemoryCache; 
}
+(BOOL)isLocalId:(id)arg1;
+(id)defaultInstance;
-(id)createLocalId;
-(id)objectIdForLocalId:(id)arg1;
-(void)setObjectId:(id)arg1 forLocalId:(id)arg2;
-(void)retainLocalIdOnDisk:(id)arg1;
-(void)releaseLocalIdOnDisk:(id)arg1;
-(void)putMapEntry:(id)arg1 forLocalId:(id)arg2;
-(id)getMapEntry:(id)arg1;
-(void)removeMapEntry:(id)arg1;
-(void)clearInMemoryCache;
-(id)init;
-(BOOL)clear;
-(void).cxx_destruct;
@end