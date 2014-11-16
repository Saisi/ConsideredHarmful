/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:24:57 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTPlotArea : CPTAnnotationHostLayer {
	CPTGridLineGroup* minorGridLineGroup; 
	CPTGridLineGroup* majorGridLineGroup; 
	CPTAxisSet* axisSet; 
	CPTPlotGroup* plotGroup; 
	CPTAxisLabelGroup* axisLabelGroup; 
	CPTAxisLabelGroup* axisTitleGroup; 
	CPTFill* fill; 
	NSArray* topDownLayerOrder; 
	int* bottomUpLayerOrder; 
	BOOL updatingLayers; 
}
@property (nonatomic,retain) CPTGridLineGroup* minorGridLineGroup; 
@property (nonatomic,retain) CPTGridLineGroup* majorGridLineGroup; 
@property (nonatomic,retain) CPTAxisSet* axisSet; 
@property (nonatomic,retain) CPTPlotGroup* plotGroup; 
@property (nonatomic,retain) CPTAxisLabelGroup* axisLabelGroup; 
@property (nonatomic,retain) CPTAxisLabelGroup* axisTitleGroup; 
@property (nonatomic,retain) NSArray* topDownLayerOrder; 
@property (nonatomic,@dynamic,copy) CPTLineStyle* borderLineStyle; 
@property (nonatomic,copy) CPTFill* fill; 
@property (assign,nonatomic) int* bottomUpLayerOrder; 
@property (assign,getter=isUpdatingLayers,nonatomic) BOOL updatingLayers; 
-(void)setBorderLineStyle:(id)arg1;
-(void)setAxisSet:(id)arg1;
-(void)renderAsVectorInContext:(struct CGContext*)arg1;
-(void)setTopDownLayerOrder:(id)arg1;
-(void)updateLayerOrder;
-(void)setPlotGroup:(id)arg1;
-(id)sublayersExcludedFromAutomaticLayout;
-(void)setUpdatingLayers:(BOOL)arg1;
-(void)setMinorGridLineGroup:(id)arg1;
-(void)setMajorGridLineGroup:(id)arg1;
-(void)setAxisLabelGroup:(id)arg1;
-(void)setAxisTitleGroup:(id)arg1;
-(void)setAxisSetLayersForType:(int)arg1;
-(unsigned)indexForLayerType:(int)arg1;
-(void)updateAxisSetLayersForType:(int)arg1;
-(unsigned)sublayerIndexForAxis:(id)arg1 layerType:(int)arg2;
-(void)setBottomUpLayerOrder:(int*)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)initWithLayer:(id)arg1;
-(void)setFill:(id)arg1;
-(void)setGraph:(id)arg1;
-(void)finalize;
-(void)layoutSublayers;
@end