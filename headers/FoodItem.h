/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:25:07 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <PFSubclassing.h>

@interface FoodItem : PFObject <PFSubclassing> {
}
@property (assign,nonatomic,@dynamic) int upCount; 
@property (assign,nonatomic,@dynamic) int downCount; 
@property (nonatomic,@dynamic,retain) NSString* foodID; 
+(id)parseClassName;
@end