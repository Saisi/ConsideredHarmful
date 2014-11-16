/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:34 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSStreamDelegate.h>

@interface PFHTTPCommand : NSObject <NSStreamDelegate> {
	NSOutputStream* uplink; 
	NSInputStream* downlink; 
	int bytesUploaded; 
	NSCondition* doneCondition; 
	BOOL sentRequestHeaders; 
	BOOL isFinished; 
	int status; 
	BOOL isCancelled; 
	BOOL usePersistentConnection; 
	BOOL isNetworkActive; 
	NSURL* url; 
	NSTimer* timeoutTimer; 
	PFHTTPCommand* referenceCycleToPreventZombification; 
	PFHTTPHeaders* requestHeaders; 
	NSData* requestHeaderData; 
	id<PFHTTPRequest> request; 
	NSError* networkError; 
	PFHTTPResponse* response; 
	id uploadProgressBlock; 
	double timeout; 
}
@property (nonatomic,copy) NSURL* url; 
@property (assign) double timeout; 
@property (assign) BOOL usePersistentConnection; 
@property (retain) PFHTTPHeaders* requestHeaders; 
@property (retain) id<PFHTTPRequest> request; 
@property (copy) int status; 
@property (copy) NSError* networkError; 
@property (copy) PFHTTPResponse* response; 
@property (copy) id uploadProgressBlock; 
@property (nonatomic,retain) NSData* requestHeaderData; 
@property (nonatomic,retain) NSTimer* timeoutTimer; 
@property (nonatomic,retain) PFHTTPCommand* referenceCycleToPreventZombification; 
@property (assign,nonatomic) BOOL isNetworkActive; 
+(id)postCommandWithURL:(id)arg1;
+(id)getCommandWithURL:(id)arg1;
-(void)sendInBackground;
-(void)setReferenceCycleToPreventZombification:(id)arg1;
-(void)scheduleInCurrentThread;
-(void)scheduleTimeoutInCurrentThread;
-(void)resetTimeoutTimer;
-(void)finishWithHTTPStatus;
-(void)handleUplinkEvent:(unsigned)arg1;
-(void)handleDownlinkEvent:(unsigned)arg1;
-(void)reportUploadProgress:(int)arg1;
-(void)setRequestHeaders:(id)arg1;
-(void)setRequestHeaderData:(id)arg1;
-(void)setUploadProgressBlock:(id)arg1;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2;
-(void)setTimeout:(double)arg1;
-(void)finishWithError:(id)arg1;
-(void)setRequest:(id)arg1;
-(void)cancel;
-(id)initWithURL:(id)arg1;
-(void)send;
-(void).cxx_destruct;
-(BOOL)isFinished;
-(void)setTimeoutTimer:(id)arg1;
-(void)didTimeout;
-(void)didFinish;
-(void)setUsePersistentConnection:(BOOL)arg1;
-(void)waitUntilFinished;
-(void)setIsNetworkActive:(BOOL)arg1;
@end