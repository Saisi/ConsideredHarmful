/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:24:58 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <CPTPieChartDataSource.h>
#import <CPTPieChartDelegate.h>

@interface RatingGraphCell : UITableViewCell <CPTPieChartDataSource, CPTPieChartDelegate> {
	CPTGraphHostingView* votesGraph; 
	UILabel* upCountLabel; 
	UILabel* downCountLabel; 
	UIButton* upThumb; 
	UIButton* downThumb; 
	int upCount; 
	int downCount; 
	CPTXYGraph* barChart; 
	Food* currentFood; 
	id<RatingGraphCellDelegate> _delegate; 
}
@property (assign,nonatomic,__weak) id<RatingGraphCellDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
-(void)configureForFood:(id)arg1 votingEnabled:(BOOL)arg2;
-(id)barFillForBarPlot:(id)arg1 recordIndex:(unsigned)arg2;
-(unsigned)numberOfRecordsForPlot:(id)arg1;
-(id)numbersForPlot:(id)arg1 field:(unsigned)arg2 recordIndexRange:(struct _NSRange)arg3;
-(void)setupVoteChart;
-(void)upAction:(id)arg1;
-(void)downAction:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void).cxx_destruct;
@end