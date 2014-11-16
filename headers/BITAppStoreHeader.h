/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:21 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITAppStoreHeader : UIView {
	UILabel* _headerLabelView; 
	UILabel* _middleLabelView; 
	NSString* _headerText; 
	NSString* _subHeaderText; 
	UIImage* _iconImage; 
	unsigned _style; 
}
@property (nonatomic,copy) NSString* headerText; 				//@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy) NSString* subHeaderText; 				//@synthesize subHeaderText=_subHeaderText - In the implementation block
@property (nonatomic,retain) UIImage* iconImage; 				//@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) unsigned style; 				//@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1;
-(void)drawRect:(CGRect)arg1;
-(void)layoutSubviews;
-(void)setStyle:(unsigned)arg1;
-(void).cxx_destruct;
-(void)setIconImage:(id)arg1;
-(void)setHeaderText:(id)arg1;
-(void)setSubHeaderText:(id)arg1;
@end