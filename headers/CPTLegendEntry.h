/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:25:03 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>

@interface CPTLegendEntry : NSObject <NSCoding> {
	CPTPlot* plot; 
	unsigned index; 
	unsigned row; 
	unsigned column; 
	CPTTextStyle* textStyle; 
}
@property (assign,nonatomic,__weak) CPTPlot* plot; 
@property (assign,nonatomic) unsigned index; 
@property (nonatomic,retain) CPTTextStyle* textStyle; 
@property (assign,nonatomic) unsigned row; 
@property (assign,nonatomic) unsigned column; 
@property (nonatomic,@dynamic,copy) CGSize titleSize; 
@property (nonatomic,@dynamic,retain,copy) NSString* title; 
@property (nonatomic,retain,copy) NSAttributedString* attributedTitle; 
-(void)drawTitleInRect:(CGRect)arg1 inContext:(struct CGContext*)arg2 scale:(float)arg3;
-(void)setPlot:(id)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)init;
-(void)setIndex:(unsigned)arg1;
-(void)setRow:(unsigned)arg1;
-(void)setColumn:(unsigned)arg1;
-(void)setTextStyle:(id)arg1;
@end