/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:24:42 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface _BalanceInfo : NSManagedObject {
}
@property (nonatomic,@dynamic,retain) NSDecimalNumber* dbaRemaining; 
@property (nonatomic,@dynamic,retain) NSNumber* swipesRemaining; 
@property (assign) short swipesRemainingValue; 
+(id)entityInManagedObjectContext:(id)arg1;
+(id)entityName;
+(id)insertInManagedObjectContext:(id)arg1;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1;
-(void)setSwipesRemainingValue:(short)arg1;
-(short)primitiveSwipesRemainingValue;
-(void)setPrimitiveSwipesRemainingValue:(short)arg1;
-(id)objectID;
@end