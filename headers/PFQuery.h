/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:29:07 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFQuery : NSObject {
	NSOperation* cancellationToken; 
	NSMutableDictionary* where; 
	NSMutableArray* include; 
	NSMutableArray* selectedKeys; 
	NSString* order; 
	BOOL trace; 
	NSString* parseClassName; 
	int limit; 
	int skip; 
	int cachePolicy; 
	NSMutableDictionary* _extraOptions; 
	double maxCacheAge; 
}
@property (nonatomic,retain) NSString* parseClassName; 
@property (assign,nonatomic) int limit; 
@property (assign,nonatomic) int skip; 
@property (assign) int cachePolicy; 
@property (assign) double maxCacheAge; 
@property (assign,nonatomic) BOOL trace; 
@property (nonatomic,copy) NSString* order; 
@property (nonatomic,retain) NSMutableDictionary* extraOptions; 				//@synthesize extraOptions=_extraOptions - In the implementation block
+(id)queryWithClassName:(id)arg1 predicate:(id)arg2;
+(id)queryWithClassName:(id)arg1;
+(id)regexForString:(id)arg1;
+(id)mapPredicate:(id)arg1 compoundBlock:(id)arg2 comparisonBlock:(id)arg3;
+(id)negatePredicate:(id)arg1;
+(id)removeNegation:(id)arg1;
+(id)asOrOfAnds:(id)arg1;
+(void)assertNoPredicateModifiers:(id)arg1;
+(id)removeBetween:(id)arg1;
+(id)reverseYodaConditions:(id)arg1;
+(id)normalizeToDNF:(id)arg1;
+(id)hoistCommonPredicates:(id)arg1;
+(void)assertKeyPathConstant:(id)arg1;
+(id)queryWithClassName:(id)arg1 normalizedPredicate:(id)arg2;
+(id)orQueryWithSubqueries:(id)arg1;
+(id)maybeEncodeSubQuery:(id)arg1;
+(id)getObjectOfClass:(id)arg1 objectId:(id)arg2 error:(id*)arg3;
+(id)normalizePredicate:(id)arg1;
+(id)getUserObjectWithId:(id)arg1 error:(id*)arg2;
+(void)clearAllCachedResults;
+(id)getObjectOfClass:(id)arg1 objectId:(id)arg2;
+(id)getUserObjectWithId:(id)arg1;
+(id)queryForUser;
-(void)whereKey:(id)arg1 equalTo:(id)arg2;
-(void)getFirstObjectInBackgroundWithBlock:(id)arg1;
-(void)whereKey:(id)arg1 notEqualTo:(id)arg2;
-(id)findObjects;
-(id)findObjects:(id*)arg1;
-(void)whereKey:(id)arg1 containedIn:(id)arg2;
-(id)findAsync;
-(id)initWithClassName:(id)arg1;
-(id)constructFindParams;
-(void)setMaxCacheAge:(double)arg1;
-(void)checkIfCommandIsRunning;
-(void)addAscendingOrder:(id)arg1;
-(void)addDescendingOrder:(id)arg1;
-(void)whereKey:(id)arg1 condition:(id)arg2 object:(id)arg3;
-(void)whereKey:(id)arg1 nearGeoPoint:(id)arg2 withinRadians:(double)arg3;
-(void)whereKey:(id)arg1 multipleConditions:(id)arg2;
-(void)whereKey:(id)arg1 matchesRegex:(id)arg2;
-(void)whereKey:(id)arg1 lessThan:(id)arg2;
-(void)whereKey:(id)arg1 lessThanOrEqualTo:(id)arg2;
-(void)whereKey:(id)arg1 greaterThan:(id)arg2;
-(void)whereKey:(id)arg1 greaterThanOrEqualTo:(id)arg2;
-(void)whereKey:(id)arg1 matchesQuery:(id)arg2;
-(void)whereKeyExists:(id)arg1;
-(void)whereKey:(id)arg1 doesNotMatchQuery:(id)arg2;
-(void)whereKey:(id)arg1 notContainedIn:(id)arg2;
-(void)whereKeyDoesNotExist:(id)arg1;
-(void)whereKey:(id)arg1 hasPrefix:(id)arg2;
-(void)whereComparisonPredicate:(id)arg1;
-(id)findAsync:(int)arg1;
-(id)findAsync:(int)arg1 after:(id)arg2;
-(id)constructFindCommand:(id)arg1;
-(void)markAsRunning:(id)arg1;
-(id)countAsync:(int)arg1 after:(id)arg2;
-(id)getFirstObject:(id*)arg1;
-(int)countObjects:(id*)arg1;
-(id)countAsync:(int)arg1;
-(void)countObjectsInBackgroundWithBlock:(id)arg1;
-(id)getObjectWithId:(id)arg1 error:(id*)arg2;
-(void)setupForGetObject:(id)arg1;
-(void)getFirstObjectInBackgroundWithTarget:(id)arg1 selector:(SEL)arg2;
-(void)orderBySortDescriptor:(id)arg1;
-(void)orderBySortDescriptors:(id)arg1;
-(void)whereKey:(id)arg1 containsAllObjectsInArray:(id)arg2;
-(void)whereKey:(id)arg1 nearGeoPoint:(id)arg2;
-(void)whereKey:(id)arg1 nearGeoPoint:(id)arg2 withinMiles:(double)arg3;
-(void)whereKey:(id)arg1 nearGeoPoint:(id)arg2 withinKilometers:(double)arg3;
-(void)whereKey:(id)arg1 withinGeoBoxFromSouthwest:(id)arg2 toNortheast:(id)arg3;
-(void)whereKey:(id)arg1 matchesRegex:(id)arg2 modifiers:(id)arg3;
-(void)whereKey:(id)arg1 containsString:(id)arg2;
-(void)whereKey:(id)arg1 hasSuffix:(id)arg2;
-(void)whereKey:(id)arg1 matchesKey:(id)arg2 inQuery:(id)arg3;
-(void)whereKey:(id)arg1 doesNotMatchKey:(id)arg2 inQuery:(id)arg3;
-(void)whereRelatedToObject:(id)arg1 fromKey:(id)arg2;
-(void)redirectClassNameForKey:(id)arg1;
-(void)includeKey:(id)arg1;
-(void)selectKeys:(id)arg1;
-(id)cacheKeyForFindCommand;
-(void)findObjectsInBackgroundWithTarget:(id)arg1 selector:(SEL)arg2;
-(id)getFirstObject;
-(int)countObjects;
-(BOOL)hasCachedResult;
-(void)clearCachedResult;
-(void)countObjectsInBackgroundWithTarget:(id)arg1 selector:(SEL)arg2;
-(id)getObjectWithId:(id)arg1;
-(void)getObjectInBackgroundWithId:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
-(void)getObjectInBackgroundWithId:(id)arg1 block:(id)arg2;
-(void)setTrace:(BOOL)arg1;
-(void)orderByDescending:(id)arg1;
-(void)setSkip:(int)arg1;
-(void)findObjectsInBackgroundWithBlock:(id)arg1;
-(void)setParseClassName:(id)arg1;
-(void)orderByAscending:(id)arg1;
-(void)setCachePolicy:(int)arg1;
-(void)dealloc;
-(void)setExtraOptions:(id)arg1;
-(void)cancel;
-(void)setLimit:(int)arg1;
@end