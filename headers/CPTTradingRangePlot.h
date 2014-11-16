/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:24:44 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTTradingRangePlot : CPTPlot {
	CPTLineStyle* lineStyle; 
	CPTLineStyle* increaseLineStyle; 
	CPTLineStyle* decreaseLineStyle; 
	CPTFill* increaseFill; 
	CPTFill* decreaseFill; 
	int plotStyle; 
	float barWidth; 
	float stickLength; 
	float barCornerRadius; 
}
@property (assign,nonatomic) int plotStyle; 
@property (assign,nonatomic) float barWidth; 
@property (assign,nonatomic) float stickLength; 
@property (assign,nonatomic) float barCornerRadius; 
@property (nonatomic,copy) CPTLineStyle* lineStyle; 
@property (nonatomic,copy) CPTLineStyle* increaseLineStyle; 
@property (nonatomic,copy) CPTLineStyle* decreaseLineStyle; 
@property (nonatomic,copy) CPTFill* increaseFill; 
@property (nonatomic,copy) CPTFill* decreaseFill; 
@property (nonatomic,@dynamic,copy) CPTMutableNumericData* xValues; 
@property (nonatomic,@dynamic,copy) CPTMutableNumericData* openValues; 
@property (nonatomic,@dynamic,copy) CPTMutableNumericData* highValues; 
@property (nonatomic,@dynamic,copy) CPTMutableNumericData* lowValues; 
@property (nonatomic,@dynamic,copy) CPTMutableNumericData* closeValues; 
@property (nonatomic,@dynamic,copy) NSArray* increaseFills; 
@property (nonatomic,@dynamic,copy) NSArray* decreaseFills; 
@property (nonatomic,@dynamic,copy) NSArray* lineStyles; 
@property (nonatomic,@dynamic,copy) NSArray* increaseLineStyles; 
@property (nonatomic,@dynamic,copy) NSArray* decreaseLineStyles; 
+(BOOL)needsDisplayForKey:(id)arg1;
-(void)setBarWidth:(float)arg1;
-(void)setBarCornerRadius:(float)arg1;
-(void)setLineStyle:(id)arg1;
-(void)renderAsVectorInContext:(struct CGContext*)arg1;
-(void)reloadDataInIndexRange:(struct _NSRange)arg1;
-(void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned)arg2 inRect:(CGRect)arg3 inContext:(struct CGContext*)arg4;
-(unsigned)dataIndexFromInteractionPoint:(CGPoint)arg1;
-(BOOL)pointingDeviceDownEvent:(struct UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned)arg2;
-(unsigned)numberOfFields;
-(id)fieldIdentifiers;
-(id)fieldIdentifiersForCoordinate:(int)arg1;
-(void)setXValues:(id)arg1;
-(void)setOpenValues:(id)arg1;
-(void)setHighValues:(id)arg1;
-(void)setLowValues:(id)arg1;
-(void)setCloseValues:(id)arg1;
-(void)drawOHLCInContext:(struct CGContext*)arg1 atIndex:(unsigned)arg2 x:(float)arg3 open:(float)arg4 close:(float)arg5 high:(float)arg6 low:(float)arg7 alignPoints:(BOOL)arg8;
-(void)drawCandleStickInContext:(struct CGContext*)arg1 atIndex:(unsigned)arg2 x:(float)arg3 open:(float)arg4 close:(float)arg5 high:(float)arg6 low:(float)arg7 alignPoints:(BOOL)arg8;
-(id)increaseLineStyleForIndex:(unsigned)arg1;
-(id)increaseFillForIndex:(unsigned)arg1;
-(id)decreaseLineStyleForIndex:(unsigned)arg1;
-(id)decreaseFillForIndex:(unsigned)arg1;
-(id)lineStyleForIndex:(unsigned)arg1;
-(void)setPlotStyle:(int)arg1;
-(void)setIncreaseLineStyle:(id)arg1;
-(void)setDecreaseLineStyle:(id)arg1;
-(void)setIncreaseFill:(id)arg1;
-(void)setDecreaseFill:(id)arg1;
-(void)setStickLength:(float)arg1;
-(void)setIncreaseFills:(id)arg1;
-(void)setDecreaseFills:(id)arg1;
-(void)setLineStyles:(id)arg1;
-(void)setIncreaseLineStyles:(id)arg1;
-(void)setDecreaseLineStyles:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)initWithLayer:(id)arg1;
@end