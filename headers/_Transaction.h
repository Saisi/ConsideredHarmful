/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:27:42 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface _Transaction : NSManagedObject {
}
@property (nonatomic,@dynamic,retain) NSDecimalNumber* amount; 
@property (nonatomic,@dynamic,retain) NSDate* date; 
@property (nonatomic,@dynamic,retain) NSString* location; 
@property (nonatomic,@dynamic,retain) NSString* transactionID; 
+(id)entityInManagedObjectContext:(id)arg1;
+(id)entityName;
+(id)insertInManagedObjectContext:(id)arg1;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1;
-(id)objectID;
@end