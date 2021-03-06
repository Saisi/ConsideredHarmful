/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:27:41 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCopying.h>
#import <NSCoding.h>

@interface CPTColor : NSObject <NSCopying, NSCoding> {
	struct CGColor* cgColor; 
}
@property (nonatomic,@dynamic,retain,copy) UIColor* uiColor; 
@property (nonatomic,copy) struct CGColor* cgColor; 
@property (getter=isOpaque,nonatomic,@dynamic,copy) BOOL opaque; 
+(id)colorWithComponentRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+(id)colorWithGenericGray:(float)arg1;
+(id)blackColor;
+(id)clearColor;
+(id)whiteColor;
+(id)grayColor;
+(id)lightGrayColor;
+(id)darkGrayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)brownColor;
+(id)colorWithCGColor:(struct CGColor*)arg1;
-(id)initWithComponentRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(BOOL)isEqual:(id)arg1;
-(unsigned)hash;
-(id)colorWithAlphaComponent:(float)arg1;
-(id)copyWithZone:(NSZone*)arg1;
-(id)initWithCGColor:(struct CGColor*)arg1;
-(void)finalize;
@end