/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:57 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBGraphObjectArray : NSMutableArray {
	NSMutableArray* _jsonArray; 
}
-(void)graphObjectifyAll;
-(id)initWrappingArray:(id)arg1;
-(id)graphObjectifyAtIndex:(unsigned)arg1;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1;
-(void)addObject:(id)arg1;
-(void)removeLastObject;
-(id)reverseObjectEnumerator;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2;
-(void)removeObjectAtIndex:(unsigned)arg1;
-(id)objectEnumerator;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2;
@end