/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:25:17 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <RatingGraphCellDelegate.h>

@interface FoodDetailsViewController : UITableViewController <RatingGraphCellDelegate> {
	Food* selectedFood; 
	RatingGraphCell* ratingCell; 
	NSArray* detailRows; 
	UserVote* voteDetail; 
	BOOL votingEnabled; 
}
@property (nonatomic,retain) Food* selectedFood; 
-(void)createVoteIfNeeded;
-(void)ratingCellUpAction:(id)arg1;
-(void)ratingCellDownAction:(id)arg1;
-(void)setSelectedFood:(id)arg1;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)setupTable;
@end