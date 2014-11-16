/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:29:04 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIWebViewDelegate.h>

@interface FBDialog : UIView <UIWebViewDelegate> {
	id<FBDialogDelegate> _delegate; 
	NSMutableDictionary* _params; 
	NSString* _serverURL; 
	NSURL* _loadingURL; 
	UIWebView* _webView; 
	UIActivityIndicatorView* _spinner; 
	UIButton* _closeButton; 
	int _orientation; 
	BOOL _showingKeyboard; 
	BOOL _isViewInvisible; 
	FBFrictionlessRequestSettings* _frictionlessSettings; 
	UIView* _modalBackgroundView; 
	BOOL _everShown; 
}
@property (assign,nonatomic) id<FBDialogDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary* params; 				//@synthesize params=_params - In the implementation block
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
-(void)setParams:(id)arg1;
-(void)dialogSuccessHandleFrictionlessResponses:(id)arg1;
-(BOOL)testBoolUrlParam:(id)arg1 param:(id)arg2;
-(id)initWithURL:(id)arg1 params:(id)arg2 isViewInvisible:(BOOL)arg3 frictionlessSettings:(id)arg4 delegate:(id)arg5;
-(void)showWebView;
-(void)deviceOrientationDidChange:(void*)arg1;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)show;
-(void)cancel;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidFinishLoad:(id)arg1;
-(void)load;
-(void)showSpinner;
-(void)hideSpinner;
-(void)keyboardWillShow:(id)arg1;
-(void)keyboardWillHide:(id)arg1;
-(void)dialogDidCancel:(id)arg1;
-(void)dismiss:(BOOL)arg1;
@end