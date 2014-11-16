/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:25:12 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIGestureRecognizerDelegate.h>

@interface IIViewDeckController : UIViewController <UIGestureRecognizerDelegate> {
	CGPoint _panOrigin; 
	unsigned long _viewAppeared; 
	BOOL _viewFirstAppeared; 
	unsigned long[6] _sideAppeared; 
	float[5] _ledge; 
	UIViewController[6] _controllers; 
	float _offset; 
	float _maxLedge; 
	CGSize _preRotationSize; 
	CGSize _preRotationCenterSize; 
	BOOL _preRotationIsLandscape; 
	unsigned long _offsetOrientation; 
	int _willAppearShouldArrangeViewsAfterRotation; 
	CGPoint _willAppearOffset; 
	NSMutableArray* _finishTransitionBlocks; 
	int _disabledUserInteractions; 
	CALayer* _shadowLayer; 
	BOOL _needsAddPannersIfAllPannersAreInactive; 
	NSMutableSet* _disabledPanClasses; 
	BOOL _panningCancelsTouchesInView; 
	BOOL _shadowEnabled; 
	BOOL _resizesCenterView; 
	BOOL _enabled; 
	BOOL _elastic; 
	BOOL _automaticallyUpdateTabBarItems; 
	unsigned long _panningMode; 
	NSMutableArray* _panners; 
	UIView* _referenceView; 
	UIViewController* _slidingController; 
	UIViewController* _centerController; 
	float _originalShadowOpacity; 
	UIBezierPath* _originalShadowPath; 
	float _originalShadowRadius; 
	UIColor* _originalShadowColor; 
	id<IIViewDeckControllerDelegate> _delegate; 
	unsigned long _delegateMode; 
	unsigned long _navigationControllerBehavior; 
	UIView* _panningView; 
	unsigned long _centerhiddenInteractivity; 
	UIButton* _centerTapper; 
	UIView* _centerView; 
	float _centerViewOpacity; 
	float _centerViewCornerRadius; 
	unsigned long _sizeMode; 
	id<UIGestureRecognizerDelegate> _panningGestureDelegate; 
	float _bounceDurationFactor; 
	float _bounceOpenSideDurationFactor; 
	float _openSlideAnimationDuration; 
	float _closeSlideAnimationDuration; 
	float _parallaxAmount; 
	NSString* _centerTapperAccessibilityLabel; 
	NSString* _centerTapperAccessibilityHint; 
	CGSize _originalShadowOffset; 
}
@property (assign,nonatomic,__weak) id<IIViewDeckControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long delegateMode; 				//@synthesize delegateMode=_delegateMode - In the implementation block
@property (nonatomic,retain,copy) NSArray* controllers; 
@property (nonatomic,retain) UIViewController* centerController; 				//@synthesize centerController=_centerController - In the implementation block
@property (nonatomic,@dynamic,retain) UIViewController* leftController; 
@property (nonatomic,@dynamic,retain) UIViewController* rightController; 
@property (nonatomic,@dynamic,retain) UIViewController* topController; 
@property (nonatomic,@dynamic,retain) UIViewController* bottomController; 
@property (nonatomic,copy) UIViewController* slidingController; 				//@synthesize slidingController=_slidingController - In the implementation block
@property (nonatomic,retain) UIView* panningView; 				//@synthesize panningView=_panningView - In the implementation block
@property (assign,nonatomic,__weak) id<UIGestureRecognizerDelegate> panningGestureDelegate; 				//@synthesize panningGestureDelegate=_panningGestureDelegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 				//@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isElastic,nonatomic) BOOL elastic; 				//@synthesize elastic=_elastic - In the implementation block
@property (assign,nonatomic) float leftSize; 
@property (nonatomic,copy) float leftViewSize; 
@property (nonatomic,copy) float leftLedgeSize; 
@property (assign,nonatomic) float rightSize; 
@property (nonatomic,copy) float rightViewSize; 
@property (nonatomic,copy) float rightLedgeSize; 
@property (assign,nonatomic) float topSize; 
@property (nonatomic,copy) float topViewSize; 
@property (nonatomic,copy) float topLedgeSize; 
@property (assign,nonatomic) float bottomSize; 
@property (nonatomic,copy) float bottomViewSize; 
@property (nonatomic,copy) float bottomLedgeSize; 
@property (assign,nonatomic) float maxSize; 
@property (assign,nonatomic) float centerViewOpacity; 				//@synthesize centerViewOpacity=_centerViewOpacity - In the implementation block
@property (assign,nonatomic) float centerViewCornerRadius; 				//@synthesize centerViewCornerRadius=_centerViewCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL shadowEnabled; 				//@synthesize shadowEnabled=_shadowEnabled - In the implementation block
@property (assign,nonatomic) BOOL resizesCenterView; 				//@synthesize resizesCenterView=_resizesCenterView - In the implementation block
@property (assign,nonatomic) unsigned long panningMode; 				//@synthesize panningMode=_panningMode - In the implementation block
@property (assign,nonatomic) BOOL panningCancelsTouchesInView; 				//@synthesize panningCancelsTouchesInView=_panningCancelsTouchesInView - In the implementation block
@property (assign,nonatomic) unsigned long centerhiddenInteractivity; 				//@synthesize centerhiddenInteractivity=_centerhiddenInteractivity - In the implementation block
@property (assign,nonatomic) unsigned long navigationControllerBehavior; 				//@synthesize navigationControllerBehavior=_navigationControllerBehavior - In the implementation block
@property (assign,nonatomic) BOOL automaticallyUpdateTabBarItems; 				//@synthesize automaticallyUpdateTabBarItems=_automaticallyUpdateTabBarItems - In the implementation block
@property (assign,nonatomic) unsigned long sizeMode; 				//@synthesize sizeMode=_sizeMode - In the implementation block
@property (assign,nonatomic) float bounceDurationFactor; 				//@synthesize bounceDurationFactor=_bounceDurationFactor - In the implementation block
@property (assign,nonatomic) float bounceOpenSideDurationFactor; 				//@synthesize bounceOpenSideDurationFactor=_bounceOpenSideDurationFactor - In the implementation block
@property (assign,nonatomic) float openSlideAnimationDuration; 				//@synthesize openSlideAnimationDuration=_openSlideAnimationDuration - In the implementation block
@property (assign,nonatomic) float closeSlideAnimationDuration; 				//@synthesize closeSlideAnimationDuration=_closeSlideAnimationDuration - In the implementation block
@property (assign,nonatomic) float parallaxAmount; 				//@synthesize parallaxAmount=_parallaxAmount - In the implementation block
@property (nonatomic,retain) NSString* centerTapperAccessibilityLabel; 				//@synthesize centerTapperAccessibilityLabel=_centerTapperAccessibilityLabel - In the implementation block
@property (nonatomic,retain) NSString* centerTapperAccessibilityHint; 				//@synthesize centerTapperAccessibilityHint=_centerTapperAccessibilityHint - In the implementation block
@property (nonatomic,retain) UIView* referenceView; 				//@synthesize referenceView=_referenceView - In the implementation block
@property (nonatomic,copy) CGRect referenceBounds; 
@property (nonatomic,copy) CGRect centerViewBounds; 
@property (nonatomic,copy) CGRect sideViewBounds; 
@property (nonatomic,retain) NSMutableArray* panners; 				//@synthesize panners=_panners - In the implementation block
@property (assign,nonatomic) float originalShadowRadius; 				//@synthesize originalShadowRadius=_originalShadowRadius - In the implementation block
@property (assign,nonatomic) float originalShadowOpacity; 				//@synthesize originalShadowOpacity=_originalShadowOpacity - In the implementation block
@property (nonatomic,retain) UIColor* originalShadowColor; 				//@synthesize originalShadowColor=_originalShadowColor - In the implementation block
@property (assign,nonatomic) CGSize originalShadowOffset; 				//@synthesize originalShadowOffset=_originalShadowOffset - In the implementation block
@property (nonatomic,retain) UIBezierPath* originalShadowPath; 				//@synthesize originalShadowPath=_originalShadowPath - In the implementation block
@property (nonatomic,retain) UIButton* centerTapper; 				//@synthesize centerTapper=_centerTapper - In the implementation block
@property (nonatomic,retain) UIView* centerView; 				//@synthesize centerView=_centerView - In the implementation block
@property (nonatomic,copy) UIView* slidingControllerView; 
-(BOOL)toggleLeftViewAnimated:(BOOL)arg1;
-(BOOL)closeLeftViewAnimated:(BOOL)arg1;
-(void)setCenterController:(id)arg1;
-(id)initWithCenterViewController:(id)arg1 leftViewController:(id)arg2 rightViewController:(id)arg3;
-(void)setCenterhiddenInteractivity:(unsigned long)arg1;
-(void)setParallaxAmount:(float)arg1;
-(void)setOpenSlideAnimationDuration:(float)arg1;
-(void)setCloseSlideAnimationDuration:(float)arg1;
-(void)setPanners:(id)arg1;
-(void)setOriginalShadowRadius:(float)arg1;
-(void)setOriginalShadowOffset:(CGSize)arg1;
-(void)setOriginalShadowColor:(id)arg1;
-(void)setOriginalShadowOpacity:(float)arg1;
-(void)setOriginalShadowPath:(id)arg1;
-(void)setLeftController:(id)arg1;
-(void)setRightController:(id)arg1;
-(void)setTopController:(id)arg1;
-(void)setBottomController:(id)arg1;
-(void)commonInitWithCenterViewController:(id)arg1;
-(id)initWithCenterViewController:(id)arg1;
-(void)setCenterView:(id)arg1;
-(void)setCenterTapper:(id)arg1;
-(float)relativeStatusBarHeight;
-(float)limitOffset:(float)arg1 forOrientation:(unsigned long)arg2;
-(CGSize)slidingSizeForOffset:(float)arg1 forOrientation:(unsigned long)arg2;
-(void)setSlidingFrameForOffset:(float)arg1 limit:(BOOL)arg2 panning:(BOOL)arg3 forOrientation:(unsigned long)arg4 animated:(BOOL)arg5;
-(CGRect)slidingRectForOffset:(float)arg1 forOrientation:(unsigned long)arg2;
-(void)setParallax;
-(void)notifyDidChangeOffset:(float)arg1 orientation:(unsigned long)arg2 panning:(BOOL)arg3;
-(void)hide:(BOOL)arg1 controllerViewForSide:(unsigned long)arg2;
-(float)sizeAsLedge:(float)arg1 forSide:(unsigned long)arg2;
-(float)closeSlideDuration:(BOOL)arg1;
-(void)setSlidingFrameForOffset:(float)arg1 forOrientation:(unsigned long)arg2 animated:(BOOL)arg3;
-(float)openSlideDuration:(BOOL)arg1;
-(void)setLedgeValue:(float)arg1 forSide:(unsigned long)arg2;
-(float)ledgeAsSize:(float)arg1 forSide:(unsigned long)arg2;
-(void)setLeftSize:(float)arg1 completion:(id)arg2;
-(void)setSize:(float)arg1 forSide:(unsigned long)arg2 completion:(id)arg3;
-(float)sizeForSide:(unsigned long)arg1;
-(float)ledgeAsSize:(float)arg1 mode:(unsigned long)arg2 forSide:(unsigned long)arg3;
-(void)setRightSize:(float)arg1 completion:(id)arg2;
-(void)setTopSize:(float)arg1 completion:(id)arg2;
-(void)setBottomSize:(float)arg1 completion:(id)arg2;
-(void)setMaxSize:(float)arg1 completion:(id)arg2;
-(unsigned)sideControllerCount;
-(void)doForControllers:(id)arg1;
-(void)applyCenterViewCornerRadiusAnimated:(BOOL)arg1;
-(void)applyShadowToSlidingViewAnimated:(BOOL)arg1;
-(void)applyCenterViewOpacityIfNeeded;
-(BOOL)setSlidingAndReferenceViews;
-(void)hideAppropriateSideViews;
-(void)setNeedsAddPanners;
-(BOOL)isSideClosed:(unsigned long)arg1;
-(void)centerViewVisible;
-(void)centerViewHidden;
-(BOOL)safe_shouldManageAppearanceMethods;
-(void)transitionAppearanceFrom:(int)arg1 to:(int)arg2 animated:(BOOL)arg3;
-(void)relayRotationMethod:(id)arg1;
-(void)arrangeViewsAfterRotation;
-(void)setAccessibilityForCenterTapper;
-(float)performDelegate:(SEL)arg1 ledge:(float)arg2 side:(unsigned long)arg3;
-(BOOL)isSideOpen:(unsigned long)arg1;
-(BOOL)checkDelegate:(SEL)arg1 side:(unsigned long)arg2;
-(void)notifyAppearanceForSide:(unsigned long)arg1 animated:(BOOL)arg2 from:(int)arg3 to:(int)arg4;
-(void)performDelegate:(SEL)arg1 side:(unsigned long)arg2 animated:(BOOL)arg3;
-(void)performDelegate:(SEL)arg1 offset:(float)arg2 orientation:(unsigned long)arg3 panning:(BOOL)arg4;
-(id)controllerForSide:(unsigned long)arg1;
-(BOOL)isAnySideOpen;
-(BOOL)openSideView:(unsigned long)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(id)arg4;
-(BOOL)checkCanOpenSide:(unsigned long)arg1;
-(unsigned long)oppositeOfSide:(unsigned long)arg1;
-(BOOL)toggleOpenViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(void)notifyWillOpenSide:(unsigned long)arg1 animated:(BOOL)arg2;
-(void)disableUserInteraction;
-(float)ledgeOffsetForSide:(unsigned long)arg1;
-(void)enableUserInteraction;
-(void)notifyDidOpenSide:(unsigned long)arg1 animated:(BOOL)arg2;
-(BOOL)closeOpenViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(void)performDelegate:(SEL)arg1 side:(unsigned long)arg2 controller:(id)arg3;
-(BOOL)closeSideView:(unsigned long)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(id)arg4;
-(BOOL)checkCanCloseSide:(unsigned long)arg1;
-(void)notifyWillCloseSide:(unsigned long)arg1 animated:(BOOL)arg2;
-(void)notifyDidCloseSide:(unsigned long)arg1 animated:(BOOL)arg2;
-(BOOL)openLeftViewAnimated:(BOOL)arg1;
-(BOOL)toggleLeftViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)openLeftViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)closeLeftViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)openSideView:(unsigned long)arg1 animated:(BOOL)arg2 completion:(id)arg3;
-(BOOL)openLeftViewBouncing:(id)arg1 completion:(id)arg2;
-(BOOL)openSideView:(unsigned long)arg1 bounceOffset:(float)arg2 targetOffset:(float)arg3 bounced:(id)arg4 completion:(id)arg5;
-(BOOL)closeLeftViewAnimated:(BOOL)arg1 duration:(double)arg2 completion:(id)arg3;
-(BOOL)closeLeftViewBouncing:(id)arg1 completion:(id)arg2;
-(BOOL)closeSideView:(unsigned long)arg1 bounceOffset:(float)arg2 bounced:(id)arg3 completion:(id)arg4;
-(BOOL)toggleRightViewAnimated:(BOOL)arg1;
-(BOOL)openRightViewAnimated:(BOOL)arg1;
-(BOOL)closeRightViewAnimated:(BOOL)arg1;
-(BOOL)toggleRightViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)openRightViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)closeRightViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)openRightViewBouncing:(id)arg1 completion:(id)arg2;
-(BOOL)closeRightViewAnimated:(BOOL)arg1 duration:(double)arg2 completion:(id)arg3;
-(BOOL)closeRightViewBouncing:(id)arg1 completion:(id)arg2;
-(BOOL)toggleTopViewAnimated:(BOOL)arg1;
-(BOOL)openTopViewAnimated:(BOOL)arg1;
-(BOOL)closeTopViewAnimated:(BOOL)arg1;
-(BOOL)toggleTopViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)openTopViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)closeTopViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)openTopViewBouncing:(id)arg1 completion:(id)arg2;
-(BOOL)closeTopViewAnimated:(BOOL)arg1 duration:(double)arg2 completion:(id)arg3;
-(BOOL)closeTopViewBouncing:(id)arg1 completion:(id)arg2;
-(BOOL)toggleBottomViewAnimated:(BOOL)arg1;
-(BOOL)openBottomViewAnimated:(BOOL)arg1;
-(BOOL)closeBottomViewAnimated:(BOOL)arg1;
-(BOOL)toggleBottomViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)openBottomViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)closeBottomViewAnimated:(BOOL)arg1 completion:(id)arg2;
-(BOOL)openBottomViewBouncing:(id)arg1 completion:(id)arg2;
-(BOOL)closeBottomViewAnimated:(BOOL)arg1 duration:(double)arg2 completion:(id)arg3;
-(BOOL)closeBottomViewBouncing:(id)arg1 completion:(id)arg2;
-(BOOL)previewBounceView:(unsigned long)arg1 withCompletion:(id)arg2;
-(BOOL)previewBounceView:(unsigned long)arg1 toDistance:(float)arg2 duration:(double)arg3 callDelegate:(BOOL)arg4 completion:(id)arg5;
-(BOOL)previewBounceView:(unsigned long)arg1 toDistance:(float)arg2 duration:(double)arg3 numberOfBounces:(float)arg4 dampingFactor:(float)arg5 callDelegate:(BOOL)arg6 completion:(id)arg7;
-(BOOL)toggleOpenViewAnimated:(BOOL)arg1;
-(id)bouncingValuesForViewSide:(unsigned long)arg1 maximumBounce:(float)arg2 numberOfBounces:(float)arg3 dampingFactor:(float)arg4 duration:(double)arg5;
-(BOOL)closeOpenViewAnimated:(BOOL)arg1;
-(BOOL)closeOpenViewAnimated:(BOOL)arg1 duration:(double)arg2 completion:(id)arg3;
-(BOOL)closeOpenViewBouncing:(id)arg1 completion:(id)arg2;
-(BOOL)safe_shouldForwardRotationMethods;
-(void)centerTapped;
-(BOOL)closeLeftView;
-(BOOL)closeLeftViewBouncing:(id)arg1;
-(BOOL)closeRightView;
-(BOOL)closeRightViewBouncing:(id)arg1;
-(BOOL)closeBottomView;
-(BOOL)closeBottomViewBouncing:(id)arg1;
-(BOOL)closeTopView;
-(BOOL)closeTopViewBouncing:(id)arg1;
-(float)locationOfPanner:(id)arg1 orientation:(unsigned long)arg2;
-(BOOL)closeSideView:(unsigned long)arg1 animated:(BOOL)arg2 completion:(id)arg3;
-(BOOL)checkDelegate:(SEL)arg1 view:(id)arg2;
-(void)panned:(id)arg1 orientation:(unsigned long)arg2;
-(void)panToSlidingFrameForOffset:(float)arg1 forOrientation:(unsigned long)arg2 animated:(BOOL)arg3;
-(BOOL)closeOpenView;
-(void)addPannersIfAllPannersAreInactiveAndNeeded;
-(CGRect)getLeftParallax;
-(CGRect)getRightParallax;
-(void)panned:(id)arg1;
-(BOOL)hasActivePanner;
-(void)addPanners;
-(void)removePanners;
-(void)addPanner:(id)arg1;
-(void)enqueueFinishTransitionBlock:(id)arg1 forController:(id)arg2;
-(void)setController:(id)arg1 forSide:(unsigned long)arg2;
-(void)restoreShadowToSlidingView;
-(void)finishTransitionBlocks;
-(id)generateCenterViewCornerRadiusPath;
-(BOOL)currentAnimationDuration:(float*)arg1 timingFunction:(id*)arg2;
-(void)setShadowEnabled:(BOOL)arg1 animated:(BOOL)arg2;
-(id)initWithCenterViewController:(id)arg1 leftViewController:(id)arg2;
-(id)initWithCenterViewController:(id)arg1 rightViewController:(id)arg2;
-(id)initWithCenterViewController:(id)arg1 topViewController:(id)arg2;
-(id)initWithCenterViewController:(id)arg1 bottomViewController:(id)arg2;
-(id)initWithCenterViewController:(id)arg1 topViewController:(id)arg2 bottomViewController:(id)arg3;
-(id)initWithCenterViewController:(id)arg1 leftViewController:(id)arg2 rightViewController:(id)arg3 topViewController:(id)arg4 bottomViewController:(id)arg5;
-(void)setSlidingFrameForOffset:(float)arg1 limit:(BOOL)arg2 forOrientation:(unsigned long)arg3 animated:(BOOL)arg4;
-(void)setLeftSize:(float)arg1;
-(void)setRightSize:(float)arg1;
-(void)setTopSize:(float)arg1;
-(void)setBottomSize:(float)arg1;
-(unsigned long)sideForController:(id)arg1;
-(BOOL)isSideTransitioning:(unsigned long)arg1;
-(BOOL)toggleLeftView;
-(BOOL)openLeftView;
-(BOOL)openLeftViewBouncing:(id)arg1;
-(BOOL)toggleRightView;
-(BOOL)openRightView;
-(BOOL)openRightViewBouncing:(id)arg1;
-(BOOL)canRightViewPushViewControllerOverCenterController;
-(void)rightViewPushViewControllerOverCenterController:(id)arg1;
-(void)disablePanOverViewsOfClass:(Class)arg1;
-(void)enablePanOverViewsOfClass:(Class)arg1;
-(BOOL)canPanOverViewsOfClass:(Class)arg1;
-(id)viewClassesWithDisabledPan;
-(BOOL)toggleTopView;
-(BOOL)openTopView;
-(BOOL)openTopViewBouncing:(id)arg1;
-(BOOL)toggleBottomView;
-(BOOL)openBottomView;
-(BOOL)openBottomViewBouncing:(id)arg1;
-(BOOL)previewBounceView:(unsigned long)arg1;
-(BOOL)toggleOpenView;
-(BOOL)closeOpenViewBouncing:(id)arg1;
-(void)setCenterTapperAccessibilityLabel:(id)arg1;
-(void)setCenterTapperAccessibilityHint:(id)arg1;
-(void)setBounceDurationFactor:(float)arg1;
-(void)setPanningMode:(unsigned long)arg1;
-(void)setPanningView:(id)arg1;
-(void)setPanningCancelsTouchesInView:(BOOL)arg1;
-(void)setNavigationControllerBehavior:(unsigned long)arg1;
-(void)setAutomaticallyUpdateTabBarItems:(BOOL)arg1;
-(void)setCenterViewOpacity:(float)arg1;
-(void)setCenterViewCornerRadius:(float)arg1;
-(void)setResizesCenterView:(BOOL)arg1;
-(void)setDelegateMode:(unsigned long)arg1;
-(void)setSizeMode:(unsigned long)arg1;
-(void)setElastic:(BOOL)arg1;
-(void)setPanningGestureDelegate:(id)arg1;
-(void)setBounceOpenSideDurationFactor:(float)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)setTitle:(id)arg1;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(float)statusBarHeight;
-(void)setEnabled:(BOOL)arg1;
-(id)title;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2;
-(void)loadView;
-(void)setMaxSize:(float)arg1;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)didRotateFromInterfaceOrientation:(int)arg1;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void).cxx_destruct;
-(void)cleanup;
-(void)setReferenceView:(id)arg1;
-(void)setShadowEnabled:(BOOL)arg1;
@end