/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:24:55 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTPlot : CPTAnnotationHostLayer {
	id<CPTPlotDataSource> dataSource; 
	NSString* title; 
	NSAttributedString* attributedTitle; 
	CPTPlotSpace* plotSpace; 
	BOOL dataNeedsReloading; 
	NSMutableDictionary* cachedData; 
	unsigned cachedDataCount; 
	int cachePrecision; 
	BOOL needsRelabel; 
	BOOL adjustLabelAnchors; 
	BOOL showLabels; 
	float labelOffset; 
	float labelRotation; 
	unsigned labelField; 
	CPTTextStyle* labelTextStyle; 
	NSFormatter* labelFormatter; 
	struct _NSRange labelIndexRange; 
	NSMutableArray* labelAnnotations; 
	CPTShadow* labelShadow; 
	BOOL alignsPointsToPixels; 
}
@property (assign,nonatomic,__weak) id<CPTPlotDataSource> dataSource; 
@property (nonatomic,copy) NSString* title; 
@property (nonatomic,copy) NSAttributedString* attributedTitle; 
@property (nonatomic,retain) CPTPlotSpace* plotSpace; 
@property (nonatomic,@dynamic,retain,copy) CPTPlotArea* plotArea; 
@property (assign,nonatomic) BOOL dataNeedsReloading; 
@property (assign,nonatomic) unsigned cachedDataCount; 
@property (nonatomic,@dynamic,copy) BOOL doublePrecisionCache; 
@property (assign,nonatomic) int cachePrecision; 
@property (nonatomic,@dynamic,copy) struct _CPTNumericDataType doubleDataType; 
@property (nonatomic,@dynamic,copy) struct _CPTNumericDataType decimalDataType; 
@property (assign,nonatomic) BOOL needsRelabel; 
@property (assign,nonatomic) BOOL adjustLabelAnchors; 
@property (assign,nonatomic) BOOL showLabels; 
@property (assign,nonatomic) float labelOffset; 
@property (assign,nonatomic) float labelRotation; 
@property (assign,nonatomic) unsigned labelField; 
@property (nonatomic,copy) CPTTextStyle* labelTextStyle; 
@property (nonatomic,retain) NSFormatter* labelFormatter; 
@property (nonatomic,retain) CPTShadow* labelShadow; 
@property (assign,nonatomic) BOOL alignsPointsToPixels; 
@property (nonatomic,retain) NSMutableDictionary* cachedData; 
@property (assign,nonatomic) struct _NSRange labelIndexRange; 
@property (nonatomic,retain) NSMutableArray* labelAnnotations; 
@property (nonatomic,@dynamic,copy) NSArray* dataLabels; 
+(id)nilData;
+(BOOL)needsDisplayForKey:(id)arg1;
-(void)setLabelTextStyle:(id)arg1;
-(void)setLabelRotation:(float)arg1;
-(void)setLabelFormatter:(id)arg1;
-(void)setLabelField:(unsigned)arg1;
-(void)reloadDataInIndexRange:(struct _NSRange)arg1;
-(BOOL)loadNumbersForAllFieldsFromDataSourceInRecordIndexRange:(struct _NSRange)arg1;
-(id)numbersFromDataSourceForField:(unsigned)arg1 recordIndexRange:(struct _NSRange)arg2;
-(void)cacheNumbers:(id)arg1 forField:(unsigned)arg2 atRecordIndex:(unsigned)arg3;
-(void)cacheArray:(id)arg1 forKey:(id)arg2 atRecordIndex:(unsigned)arg3;
-(id)plotRangeForCoordinate:(int)arg1;
-(id)cachedNumbersForField:(unsigned)arg1;
-(double)cachedDoubleForField:(unsigned)arg1 recordIndex:(unsigned)arg2;
-(=bbbbbS[=8411188])cachedDecimalForField:(unsigned)arg1 recordIndex:(unsigned)arg2;
-(id)cachedValueForKey:(id)arg1 recordIndex:(unsigned)arg2;
-(void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned)arg2 inRect:(CGRect)arg3 inContext:(struct CGContext*)arg4;
-(id)cachedNumberForField:(unsigned)arg1 recordIndex:(unsigned)arg2;
-(id)titleForLegendEntryAtIndex:(unsigned)arg1;
-(id)attributedTitleForLegendEntryAtIndex:(unsigned)arg1;
-(unsigned)dataIndexFromInteractionPoint:(CGPoint)arg1;
-(BOOL)pointingDeviceDownEvent:(struct UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(void)cacheNumbers:(id)arg1 forField:(unsigned)arg2;
-(id)cachedArrayForKey:(id)arg1;
-(void)cacheArray:(id)arg1 forKey:(id)arg2;
-(void)repositionAllLabelAnnotations;
-(void)setDataNeedsReloading;
-(void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned)arg2;
-(unsigned)numberOfLegendEntries;
-(unsigned)numberOfFields;
-(id)fieldIdentifiers;
-(id)fieldIdentifiersForCoordinate:(int)arg1;
-(void)setCachePrecision:(int)arg1;
-(void)insertDataAtIndex:(unsigned)arg1 numberOfRecords:(unsigned)arg2;
-(void)relabel;
-(void)setPlotSpace:(id)arg1;
-(void)setNeedsRelabel;
-(void)deleteDataInIndexRange:(struct _NSRange)arg1;
-(void)relabelIndexRange:(struct _NSRange)arg1;
-(void)setDataNeedsReloading:(BOOL)arg1;
-(void)setCachedDataCount:(unsigned)arg1;
-(id)numericDataForNumbers:(id)arg1;
-(void)setCachedDataType:(struct _CPTNumericDataType)arg1;
-(void)setNeedsRelabel:(BOOL)arg1;
-(id)plotRangeForField:(unsigned)arg1;
-(void)setLabelIndexRange:(struct _NSRange)arg1;
-(void)setLabelAnnotations:(id)arg1;
-(void)updateContentAnchorForLabel:(id)arg1;
-(void)setDataLabels:(id)arg1;
-(void)setShowLabels:(BOOL)arg1;
-(void)setLabelShadow:(id)arg1;
-(void)setAlignsPointsToPixels:(BOOL)arg1;
-(void)setCachedData:(id)arg1;
-(void)setAdjustLabelAnchors:(BOOL)arg1;
-(void)reloadDataIfNeeded;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(void)setDataSource:(id)arg1;
-(void)setHidden:(BOOL)arg1;
-(void)reloadData;
-(void)setAttributedTitle:(id)arg1;
-(void)setTitle:(id)arg1;
-(id)initWithLayer:(id)arg1;
-(void)setLabelOffset:(float)arg1;
-(void)drawInContext:(struct CGContext*)arg1;
-(void)layoutSublayers;
@end