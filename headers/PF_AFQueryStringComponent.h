/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:17 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PF_AFQueryStringComponent : NSObject {
	NSString* _key; 
	NSString* _value; 
}
@property (nonatomic,retain) id key; 				//@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id value; 				//@synthesize value=_value - In the implementation block
-(id)URLEncodedStringValueWithEncoding:(unsigned)arg1;
-(id)initWithKey:(id)arg1 value:(id)arg2;
-(void)dealloc;
-(void)setValue:(id)arg1;
-(void)setKey:(id)arg1;
@end