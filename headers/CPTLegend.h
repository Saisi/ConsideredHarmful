/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:25:04 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTLegend : CPTBorderedLayer {
	NSMutableArray* plots; 
	NSMutableArray* legendEntries; 
	BOOL layoutChanged; 
	CPTTextStyle* textStyle; 
	CGSize swatchSize; 
	CPTLineStyle* swatchBorderLineStyle; 
	float swatchCornerRadius; 
	CPTFill* swatchFill; 
	unsigned numberOfRows; 
	unsigned numberOfColumns; 
	BOOL equalRows; 
	BOOL equalColumns; 
	NSArray* rowHeights; 
	NSArray* rowHeightsThatFit; 
	NSArray* columnWidths; 
	NSArray* columnWidthsThatFit; 
	float columnMargin; 
	float rowMargin; 
	float titleOffset; 
}
@property (nonatomic,copy) CPTTextStyle* textStyle; 
@property (assign,nonatomic,@dynamic) CGSize swatchSize; 
@property (nonatomic,copy) CPTLineStyle* swatchBorderLineStyle; 
@property (assign,nonatomic) float swatchCornerRadius; 
@property (nonatomic,copy) CPTFill* swatchFill; 
@property (assign,nonatomic) BOOL layoutChanged; 
@property (assign,nonatomic) unsigned numberOfRows; 
@property (assign,nonatomic) unsigned numberOfColumns; 
@property (assign,nonatomic) BOOL equalRows; 
@property (assign,nonatomic) BOOL equalColumns; 
@property (nonatomic,copy) NSArray* rowHeights; 
@property (nonatomic,retain) NSArray* rowHeightsThatFit; 
@property (nonatomic,copy) NSArray* columnWidths; 
@property (nonatomic,retain) NSArray* columnWidthsThatFit; 
@property (assign,nonatomic) float columnMargin; 
@property (assign,nonatomic) float rowMargin; 
@property (assign,nonatomic) float titleOffset; 
@property (nonatomic,retain) NSMutableArray* plots; 
@property (nonatomic,retain) NSMutableArray* legendEntries; 
+(id)legendWithPlots:(id)arg1;
+(id)legendWithGraph:(id)arg1;
+(BOOL)needsDisplayForKey:(id)arg1;
-(void)addPlot:(id)arg1;
-(void)renderAsVectorInContext:(struct CGContext*)arg1;
-(BOOL)pointingDeviceDownEvent:(struct UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(void)removePlot:(id)arg1;
-(void)insertPlot:(id)arg1 atIndex:(unsigned)arg2;
-(id)plotWithIdentifier:(id)arg1;
-(id)allPlots;
-(id)plotAtIndex:(unsigned)arg1;
-(void)removePlotWithIdentifier:(id)arg1;
-(void)setPlots:(id)arg1;
-(id)initWithPlots:(id)arg1;
-(id)initWithGraph:(id)arg1;
-(void)setLayoutChanged:(BOOL)arg1;
-(void)recalculateLayout;
-(void)setRowHeightsThatFit:(id)arg1;
-(void)setColumnWidthsThatFit:(id)arg1;
-(void)legendNeedsRedraw:(id)arg1;
-(void)legendNeedsLayout:(id)arg1;
-(void)legendNeedsReloadEntries:(id)arg1;
-(void)removeLegendEntriesForPlot:(id)arg1;
-(void)setLayoutChanged;
-(void)setSwatchSize:(CGSize)arg1;
-(void)setSwatchBorderLineStyle:(id)arg1;
-(void)setSwatchCornerRadius:(float)arg1;
-(void)setSwatchFill:(id)arg1;
-(void)setEqualRows:(BOOL)arg1;
-(void)setEqualColumns:(BOOL)arg1;
-(void)setRowHeights:(id)arg1;
-(void)setColumnWidths:(id)arg1;
-(void)setRowMargin:(float)arg1;
-(void)setLegendEntries:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)description;
-(void)setNumberOfRows:(unsigned)arg1;
-(void)setTitleOffset:(float)arg1;
-(id)initWithLayer:(id)arg1;
-(void)setNumberOfColumns:(unsigned)arg1;
-(void)setTextStyle:(id)arg1;
-(void)layoutSublayers;
-(void)setColumnMargin:(float)arg1;
@end