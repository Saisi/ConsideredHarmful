/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:31 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFSignUpView : UIScrollView {
	int fields; 
	UIView* logo; 
	UITextField* usernameField; 
	UITextField* passwordField; 
	UITextField* emailField; 
	UITextField* additionalField; 
	PFLogInFieldBackgroundView* fieldBackgroundView; 
	UIButton* signUpButton; 
	UIButton* dismissButton; 
}
@property (nonatomic,retain) UIView* logo; 
@property (nonatomic,copy) int fields; 
@property (nonatomic,copy) UITextField* usernameField; 
@property (nonatomic,copy) UITextField* passwordField; 
@property (nonatomic,copy) UITextField* emailField; 
@property (nonatomic,copy) UITextField* additionalField; 
@property (nonatomic,copy) UIButton* signUpButton; 
@property (nonatomic,copy) UIButton* dismissButton; 
@property (nonatomic,copy) PFLogInFieldBackgroundView* fieldBackgroundView; 
-(id)initWithFields:(int)arg1;
-(int)numberOfSignUpElements;
-(void)setBackgroundColor:(id)arg1;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)setLogo:(id)arg1;
@end