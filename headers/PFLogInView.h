/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:33 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFLogInView : UIView {
	int fields; 
	UIView* logo; 
	UITextField* usernameField; 
	UITextField* passwordField; 
	UIButton* passwordForgottenButton; 
	PFLogInFieldBackgroundView* fieldBackgroundView; 
	UILabel* externalLogInLabel; 
	UILabel* signUpLabel; 
	UIButton* facebookButton; 
	UIButton* twitterButton; 
	UIButton* signUpButton; 
	UIButton* logInButton; 
	UIButton* dismissButton; 
}
@property (nonatomic,retain) UIView* logo; 
@property (nonatomic,copy) int fields; 
@property (nonatomic,copy) UITextField* usernameField; 
@property (nonatomic,copy) UITextField* passwordField; 
@property (nonatomic,copy) UIButton* passwordForgottenButton; 
@property (nonatomic,copy) UIButton* logInButton; 
@property (nonatomic,copy) UIButton* facebookButton; 
@property (nonatomic,copy) UIButton* twitterButton; 
@property (nonatomic,copy) UIButton* signUpButton; 
@property (nonatomic,copy) UIButton* dismissButton; 
@property (nonatomic,copy) UILabel* externalLogInLabel; 
@property (nonatomic,copy) UILabel* signUpLabel; 
@property (nonatomic,copy) PFLogInFieldBackgroundView* fieldBackgroundView; 
@property (copy) int layoutStyle; 
@property (copy) int numberOfInternalLogInElements; 
@property (copy) int numberOfExternalLogInElements; 
+(void)validateFields:(int)arg1;
-(id)initWithFields:(int)arg1;
-(BOOL)isInternalLoginEnabled;
-(BOOL)isExternalLoginEnabled;
-(void)layoutPortraitMode;
-(void)layoutLandscapeMode;
-(void)setBackgroundColor:(id)arg1;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)setLogo:(id)arg1;
@end