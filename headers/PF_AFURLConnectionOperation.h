/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:10 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PF_AFURLConnectionOperation : NSOperation {
	BOOL _cancelled; 
	short _state; 
	NSURLConnection* _connection; 
	NSSet* _runLoopModes; 
	NSURLRequest* _request; 
	NSURLResponse* _response; 
	NSError* _error; 
	NSData* _responseData; 
	NSString* _responseString; 
	NSOutputStream* _outputStream; 
	unsigned _backgroundTaskIdentifier; 
	id _uploadProgress; 
	id _downloadProgress; 
	id _authenticationAgainstProtectionSpace; 
	id _authenticationChallenge; 
	id _cacheResponse; 
	id _redirectResponse; 
	NSRecursiveLock* _lock; 
	long long _totalBytesRead; 
}
@property (nonatomic,retain) NSSet* runLoopModes; 				//@synthesize runLoopModes=_runLoopModes - In the implementation block
@property (nonatomic,retain) NSURLRequest* request; 				//@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLResponse* response; 				//@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError* error; 				//@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData* responseData; 				//@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) NSString* responseString; 				//@synthesize responseString=_responseString - In the implementation block
@property (nonatomic,@dynamic,retain) NSInputStream* inputStream; 
@property (nonatomic,retain) NSOutputStream* outputStream; 				//@synthesize outputStream=_outputStream - In the implementation block
@property (assign,nonatomic) short state; 				//@synthesize state=_state - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled; 				//@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSRecursiveLock* lock; 				//@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSURLConnection* connection; 				//@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) long long totalBytesRead; 				//@synthesize totalBytesRead=_totalBytesRead - In the implementation block
@property (assign,nonatomic) unsigned backgroundTaskIdentifier; 				//@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (nonatomic,copy) id uploadProgress; 				//@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (nonatomic,copy) id downloadProgress; 				//@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy) id authenticationAgainstProtectionSpace; 				//@synthesize authenticationAgainstProtectionSpace=_authenticationAgainstProtectionSpace - In the implementation block
@property (nonatomic,copy) id authenticationChallenge; 				//@synthesize authenticationChallenge=_authenticationChallenge - In the implementation block
@property (nonatomic,copy) id cacheResponse; 				//@synthesize cacheResponse=_cacheResponse - In the implementation block
@property (nonatomic,copy) id redirectResponse; 				//@synthesize redirectResponse=_redirectResponse - In the implementation block
+(void)networkRequestThreadEntryPoint:(id)arg1;
+(id)networkRequestThread;
-(void)setUploadProgressBlock:(id)arg1;
-(void)setResponseString:(id)arg1;
-(void)setUploadProgress:(id)arg1;
-(void)setAuthenticationAgainstProtectionSpace:(id)arg1;
-(void)setAuthenticationChallenge:(id)arg1;
-(void)setCacheResponse:(id)arg1;
-(void)setRedirectResponse:(id)arg1;
-(void)operationDidStart;
-(void)cancelConnection;
-(void)setTotalBytesRead:(long long)arg1;
-(void)setShouldExecuteAsBackgroundTaskWithExpirationHandler:(id)arg1;
-(void)setDownloadProgressBlock:(id)arg1;
-(void)setAuthenticationAgainstProtectionSpaceBlock:(id)arg1;
-(void)setAuthenticationChallengeBlock:(id)arg1;
-(void)setCacheResponseBlock:(id)arg1;
-(void)setRedirectResponseBlock:(id)arg1;
-(void)setResponse:(id)arg1;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
-(BOOL)isReady;
-(BOOL)isConcurrent;
-(void)setRunLoopModes:(id)arg1;
-(void)setError:(id)arg1;
-(BOOL)isPaused;
-(void)setRequest:(id)arg1;
-(void)setInputStream:(id)arg1;
-(void)setOutputStream:(id)arg1;
-(void)dealloc;
-(id)description;
-(void)setState:(short)arg1;
-(void)setCancelled:(BOOL)arg1;
-(id)initWithRequest:(id)arg1;
-(void)start;
-(void)resume;
-(void)setCompletionBlock:(id)arg1;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(void)pause;
-(void)setBackgroundTaskIdentifier:(unsigned)arg1;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)setConnection:(id)arg1;
-(void)setLock:(id)arg1;
-(void)setResponseData:(id)arg1;
-(void)setDownloadProgress:(id)arg1;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
@end