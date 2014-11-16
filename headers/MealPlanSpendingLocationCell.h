/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:24:47 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSFetchedResultsControllerDelegate.h>
#import <CPTPieChartDataSource.h>
#import <CPTPieChartDelegate.h>

@interface MealPlanSpendingLocationCell : UITableViewCell <NSFetchedResultsControllerDelegate, CPTPieChartDataSource, CPTPieChartDelegate> {
	CPTXYGraph* pieChart; 
	NSArray* pieData; 
	NSDictionary* barData; 
	NSArray* colors; 
	CPTGraphHostingView* _locationPieChart; 
	UIView* _locationLabelView; 
	NSFetchedResultsController* _resultController; 
}
@property (nonatomic,retain) CPTGraphHostingView* locationPieChart; 				//@synthesize locationPieChart=_locationPieChart - In the implementation block
@property (nonatomic,retain) UIView* locationLabelView; 				//@synthesize locationLabelView=_locationLabelView - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController* resultController; 				//@synthesize resultController=_resultController - In the implementation block
-(void)setupBarData;
-(unsigned)numberOfRecordsForPlot:(id)arg1;
-(id)numberForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3;
-(void)setResultController:(id)arg1;
-(id)sliceFillForPieChart:(id)arg1 recordIndex:(unsigned)arg2;
-(void)setupColors;
-(void)setupPieData;
-(void)setupPieChart;
-(void)setLocationPieChart:(id)arg1;
-(void)setLocationLabelView:(id)arg1;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void).cxx_destruct;
@end