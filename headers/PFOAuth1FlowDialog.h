/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:47 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIWebViewDelegate.h>

@interface PFOAuth1FlowDialog : UIView <UIWebViewDelegate> {
	NSMutableDictionary* _params; 
	NSString* _serverURL; 
	NSURL* _loadingURL; 
	UIWebView* _webView; 
	UIActivityIndicatorView* _spinner; 
	UILabel* _titleLabel; 
	UIButton* _closeButton; 
	int _orientation; 
	BOOL _showingKeyboard; 
	UIView* _modalBackgroundView; 
	id dialogDidComplete; 
	id dialogCompleteWithUrl; 
	id dialogDidNotCompleteWithUrl; 
	id dialogDidNotComplete; 
	id dialogDidFailWithError; 
	id dialogShouldOpenURLInExternalBrowser; 
	NSString* redirectURLPrefix; 
}
@property (nonatomic,copy) NSString* redirectURLPrefix; 
@property (nonatomic,copy) id dialogDidComplete; 
@property (nonatomic,copy) id dialogCompleteWithUrl; 
@property (nonatomic,copy) id dialogDidNotCompleteWithUrl; 
@property (nonatomic,copy) id dialogDidNotComplete; 
@property (nonatomic,copy) id dialogDidFailWithError; 
@property (nonatomic,copy) id dialogShouldOpenURLInExternalBrowser; 
@property (nonatomic,retain) NSMutableDictionary* params; 				//@synthesize params=_params - In the implementation block
@property (nonatomic,copy) NSString* title; 
-(void)addRoundedRectToPath:(struct CGContext*)arg1 rect:(CGRect)arg2 radius:(float)arg3;
-(struct CGAffineTransform)transformForOrientation;
-(void)bounce2AnimationStopped;
-(void)removeObservers;
-(void)dialogWillDisappear;
-(void)postDismissCleanup;
-(void)drawRect:(CGRect)arg1 fill:(rf*)arg2 radius:(float)arg3;
-(void)strokeLines:(CGRect)arg1 stroke:(rf*)arg2;
-(void)dialogDidSucceed:(id)arg1;
-(void)updateWebOrientation;
-(void)dismissWithError:(id)arg1 animated:(BOOL)arg2;
-(BOOL)shouldRotateToOrientation:(int)arg1;
-(void)sizeToFitOrientation:(BOOL)arg1;
-(void)loadURL:(id)arg1 get:(id)arg2;
-(id)generateURL:(id)arg1 params:(id)arg2;
-(void)dialogWillAppear;
-(void)bounce1AnimationStopped;
-(void)addObservers;
-(void)dismissWithSuccess:(BOOL)arg1 animated:(BOOL)arg2;
-(id)getStringFromUrl:(id)arg1 needle:(id)arg2;
-(id)initWithURL:(id)arg1 params:(id)arg2;
-(void)setDialogDidComplete:(id)arg1;
-(void)setDialogCompleteWithUrl:(id)arg1;
-(void)setDialogDidNotCompleteWithUrl:(id)arg1;
-(void)setDialogDidNotComplete:(id)arg1;
-(void)setDialogDidFailWithError:(id)arg1;
-(void)setDialogShouldOpenURLInExternalBrowser:(id)arg1;
-(void)setRedirectURLPrefix:(id)arg1;
-(void)setParams:(id)arg1;
-(void)deviceOrientationDidChange:(void*)arg1;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1;
-(id)init;
-(void)setTitle:(id)arg1;
-(void)show;
-(void)cancel;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidFinishLoad:(id)arg1;
-(void)load;
-(void)keyboardWillShow:(id)arg1;
-(void)keyboardWillHide:(id)arg1;
-(void)dialogDidCancel:(id)arg1;
-(void)dismiss:(BOOL)arg1;
@end