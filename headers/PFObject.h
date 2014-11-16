/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:29:09 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFObject : NSObject {
	BOOL dirty; 
	NSMutableArray* operationSetQueue; 
	NSMutableDictionary* estimatedData; 
	NSObject* lock; 
	BOOL hasBeenFetched; 
	NSMutableDictionary* dataAvailability; 
	NSMutableDictionary* serverData; 
	NSMutableDictionary* hashedObjectsCache; 
	NSDate* updatedAt; 
	NSDate* createdAt; 
	NSString* localId; 
	NSString* objectId; 
	NSString* parseClassName; 
	BOOL createdAsPointer; 
	PFMulticastDelegate* saveDelegate; 
	PFTaskQueue* taskQueue; 
}
@property (@dynamic,copy) NSString* parseClassName; 
@property (nonatomic,@dynamic,retain) NSString* objectId; 
@property (nonatomic,@dynamic,retain) NSDate* updatedAt; 
@property (nonatomic,@dynamic,retain) NSDate* createdAt; 
@property (nonatomic,@dynamic,retain) PFACL* ACL; 
@property (nonatomic,@dynamic,retain) PFMulticastDelegate* saveDelegate; 
@property (nonatomic,@dynamic,retain) NSString* localId; 
@property (nonatomic,retain) PFTaskQueue* taskQueue; 
+(id)objectWithoutDataWithObjectId:(id)arg1;
+(void)saveAllInBackground:(id)arg1;
+(BOOL)saveAll:(id)arg1;
+(void)registerSubclass;
+(void)saveAllInBackground:(id)arg1 block:(id)arg2;
+(void)validateClassName:(id)arg1;
+(void)assertSubclassIsRegistered:(Class)arg1;
+(void)collectDirtyChildren:(id)arg1 children:(id)arg2 files:(id)arg3 seen:(id)arg4 seenNew:(id)arg5;
+(BOOL)canBeSerializedAsValue:(id)arg1 afterSaving:(id)arg2 error:(id*)arg3;
+(id)enqueue:(id)arg1 forObjects:(id)arg2;
+(void)collectDirtyChildren:(id)arg1 children:(id)arg2 files:(id)arg3;
+(id)deepSaveAsync:(id)arg1 withSessionToken:(id)arg2;
+(void)deepSaveEventually:(id)arg1;
+(id)objectWithClassName:(id)arg1;
+(id)objectWithClassName:(id)arg1 isPointer:(BOOL)arg2;
+(void)unregisterSubclass:(Class)arg1;
+(id)deleteAllAsync:(id)arg1 withSessionToken:(id)arg2;
+(void)deleteDataFile:(id)arg1;
+(id)objectFromDataFile:(id)arg1;
+(void)fetchAll:(id)arg1 error:(id*)arg2;
+(void)fetchAllIfNeeded:(id)arg1 error:(id*)arg2;
+(id)toObjectIdArray:(id)arg1 omitObjectsWithData:(BOOL)arg2;
+(void)updateArray:(id)arg1 withResultsOfFetchAll:(id)arg2 forceFetch:(BOOL)arg3;
+(id)fetchAllIfNeededAsync:(id)arg1;
+(id)fetchAllAsync:(id)arg1;
+(void)fetchAllInBackground:(id)arg1 block:(id)arg2;
+(void)fetchAllIfNeededInBackground:(id)arg1 block:(id)arg2;
+(BOOL)saveAll:(id)arg1 error:(id*)arg2;
+(void)saveAllInBackground:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+(BOOL)deleteAll:(id)arg1 error:(id*)arg2;
+(void)deleteAllInBackground:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+(void)deleteAllInBackground:(id)arg1 block:(id)arg2;
+(id)objectWithClassName:(id)arg1 dictionary:(id)arg2;
+(void)fetchAll:(id)arg1;
+(void)fetchAllIfNeeded:(id)arg1;
+(void)fetchAllInBackground:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+(void)fetchAllIfNeededInBackground:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+(BOOL)deleteAll:(id)arg1;
+(void)deleteAllInBackground:(id)arg1;
+(id)objectWithoutDataWithClassName:(id)arg1 localId:(id)arg2;
+(id)objectWithoutDataWithClassName:(id)arg1 objectId:(id)arg2;
+(BOOL)resolveInstanceMethod:(SEL)arg1;
+(id)query;
+(void)initialize;
-(void)fetchIfNeededInBackgroundWithBlock:(id)arg1;
-(void)saveInBackground;
-(id)initWithClassName:(id)arg1 isPointer:(BOOL)arg2;
-(id)unsavedChanges;
-(BOOL)isDirty:(BOOL)arg1;
-(BOOL)isDataAvailableForKey:(id)arg1;
-(id)ACLWithoutCopying;
-(void)checkDeleteParams;
-(id)constructDeleteCommand:(BOOL)arg1 sessionToken:(id)arg2;
-(BOOL)canBeSerializedAfterSaving:(id)arg1 error:(id*)arg2;
-(void)checkSaveParams;
-(void)startSave;
-(id)constructSaveCommand:(id)arg1 sessionToken:(id)arg2;
-(id)handleSaveResult:(id)arg1 error:(id*)arg2;
-(void)saveEventually;
-(void)checkForChangesToMutableContainers;
-(void)checkForChangesToMutableContainer:(id)arg1 forKey:(id)arg2;
-(void)checkpointMutableContainer:(id)arg1;
-(void)setObjectId:(id)arg1;
-(id)convertToDictionaryForDataFile;
-(void)applyOperations:(id)arg1 toDictionary:(id)arg2;
-(void)rebuildEstimatedData;
-(id)mergeFromServer:(id)arg1 withCompleteData:(BOOL)arg2;
-(void)checkpointAllMutableContainers;
-(id)mergeAfterSave:(id)arg1;
-(id)saveAsync:(id)arg1;
-(id)saveChildrenAsync:(id)arg1;
-(id)fetchAsync:(id)arg1;
-(id)constructRefreshCommand:(id)arg1;
-(id)deleteAsync:(id)arg1;
-(id)handleDeleteResult:(id)arg1;
-(id)constructSaveCommandWithServerOperation:(id)arg1 changes:(id)arg2 sessionToken:(id)arg3;
-(id)convertToDictionaryForSaving:(id)arg1;
-(BOOL)needsDefaultACL;
-(void)saveChildrenEventually;
-(void)setHasBeenFetched:(BOOL)arg1;
-(void)resolveLocalId;
-(void)serializeToDataFile:(id)arg1;
-(void)performOperation:(id)arg1 forKey:(id)arg2;
-(id)mergeFromObject:(id)arg1;
-(id)deleteAsync;
-(id)displayObjectId;
-(id)displayClassName;
-(void)deleteInBackgroundWithTarget:(id)arg1 selector:(SEL)arg2;
-(void)deleteInBackgroundWithBlock:(id)arg1;
-(void)saveInBackgroundWithTarget:(id)arg1 selector:(SEL)arg2;
-(void)saveInBackgroundWithBlock:(id)arg1;
-(void)saveEventually:(id)arg1;
-(void)fetch;
-(void)fetch:(id*)arg1;
-(void)fetchInBackgroundWithTarget:(id)arg1 selector:(SEL)arg2;
-(void)fetchInBackgroundWithBlock:(id)arg1;
-(id)fetchIfNeeded:(id*)arg1;
-(void)addObjectsFromArray:(id)arg1 forKey:(id)arg2;
-(void)addUniqueObjectsFromArray:(id)arg1 forKey:(id)arg2;
-(void)removeObjectsInArray:(id)arg1 forKey:(id)arg2;
-(void)incrementKey:(id)arg1 byAmount:(id)arg2;
-(id)relationforKey:(id)arg1;
-(id)initWithClassName:(id)arg1;
-(void)deleteInBackground;
-(void)deleteEventually;
-(void)refreshInBackgroundWithTarget:(id)arg1 selector:(SEL)arg2;
-(void)refreshInBackgroundWithBlock:(id)arg1;
-(id)fetchIfNeeded;
-(void)fetchIfNeededInBackgroundWithTarget:(id)arg1 selector:(SEL)arg2;
-(void)addUniqueObject:(id)arg1 forKey:(id)arg2;
-(void)removeObject:(id)arg1 forKey:(id)arg2;
-(id)saveAsync;
-(id)fetchAsync;
-(BOOL)isKeyDirty:(id)arg1;
-(id)mergeAfterFetch:(id)arg1 withCompleteData:(BOOL)arg2;
-(id)getOrCreateLocalId;
-(void)unregisterSaveListener:(id)arg1;
-(void)registerSaveListener:(id)arg1;
-(void)addObject:(id)arg1 forKey:(id)arg2;
-(void)refresh:(id*)arg1;
-(void)incrementKey:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
-(void)removeObjectForKey:(id)arg1;
-(id)allKeys;
-(id)lock;
-(void)setTaskQueue:(id)arg1;
-(void)setDefaultValues;
-(id)valueForUndefinedKey:(id)arg1;
-(BOOL)delete:(id*)arg1;
-(BOOL)save:(id*)arg1;
-(id)handleFetchResult:(id)arg1;
-(void)refresh;
-(BOOL)isDataAvailable;
-(void)waitUntilFinished;
-(BOOL)delete;
-(BOOL)isDirty;
-(id)objectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@end