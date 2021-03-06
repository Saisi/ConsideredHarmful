/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:25:10 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSFetchedResultsControllerDelegate.h>

@interface MenuViewController : UITableViewController <NSFetchedResultsControllerDelegate> {
	NSFetchedResultsController* resultController; 
	UISegmentedControl* mealTime; 
	UIButton* ratedButton; 
	UIButton* filterButton; 
	NSMutableArray* meals; 
	FoodFilter* filter; 
	NSMutableArray* segments; 
	NSSet* hours; 
	Location* currentLocation; 
}
@property (nonatomic,retain) Location* currentLocation; 
-(void)menuAction:(id)arg1;
-(void)updateSegmentControl;
-(void)createFetchedResultsController;
-(void)mealTimeChanged:(id)arg1;
-(void)ratedAction:(id)arg1;
-(void)controllerDidChangeContent:(id)arg1;
-(void)setCurrentLocation:(id)arg1;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2;
-(void).cxx_destruct;
@end