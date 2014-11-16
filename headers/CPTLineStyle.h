/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:25:02 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>
#import <NSCopying.h>
#import <NSMutableCopying.h>

@interface CPTLineStyle : NSObject <NSCoding, NSCopying, NSMutableCopying> {
	int lineCap; 
	int lineJoin; 
	float miterLimit; 
	float lineWidth; 
	NSArray* dashPattern; 
	float patternPhase; 
	CPTColor* lineColor; 
	CPTFill* lineFill; 
	CPTGradient* lineGradient; 
}
@property (assign,nonatomic) int lineCap; 
@property (assign,nonatomic) int lineJoin; 
@property (assign,nonatomic) float miterLimit; 
@property (assign,nonatomic) float lineWidth; 
@property (nonatomic,retain) NSArray* dashPattern; 
@property (assign,nonatomic) float patternPhase; 
@property (nonatomic,retain) CPTColor* lineColor; 
@property (nonatomic,retain) CPTFill* lineFill; 
@property (nonatomic,retain) CPTGradient* lineGradient; 
@property (getter=isOpaque,nonatomic,@dynamic,copy) BOOL opaque; 
+(id)lineStyle;
-(void)setLineStyleInContext:(struct CGContext*)arg1;
-(void)strokePathInContext:(struct CGContext*)arg1;
-(void)strokePathWithGradient:(id)arg1 inContext:(struct CGContext*)arg2;
-(void)strokeRect:(CGRect)arg1 inContext:(struct CGContext*)arg2;
-(void)setDashPattern:(id)arg1;
-(void)setLineFill:(id)arg1;
-(void)setLineGradient:(id)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1;
-(void)setLineWidth:(float)arg1;
-(void)setMiterLimit:(float)arg1;
-(void)setLineCap:(int)arg1;
-(void)setLineJoin:(int)arg1;
-(id)mutableCopyWithZone:(NSZone*)arg1;
-(void)setPatternPhase:(float)arg1;
-(void)setLineColor:(id)arg1;
@end