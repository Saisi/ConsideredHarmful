/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:27:57 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AFHTTPRequestOperation : AFURLConnectionOperation {
	NSError* _HTTPError; 
	struct dispatch_queue_s* _successCallbackQueue; 
	struct dispatch_queue_s* _failureCallbackQueue; 
}
@property (nonatomic,@dynamic,retain) NSHTTPURLResponse* response; 
@property (nonatomic,copy) BOOL hasAcceptableStatusCode; 
@property (nonatomic,copy) BOOL hasAcceptableContentType; 
@property (assign,nonatomic) struct dispatch_queue_s* successCallbackQueue; 				//@synthesize successCallbackQueue=_successCallbackQueue - In the implementation block
@property (assign,nonatomic) struct dispatch_queue_s* failureCallbackQueue; 				//@synthesize failureCallbackQueue=_failureCallbackQueue - In the implementation block
@property (nonatomic,@dynamic,retain) NSURLRequest* request; 
@property (nonatomic,retain) NSError* HTTPError; 				//@synthesize HTTPError=_HTTPError - In the implementation block
@property (nonatomic,@dynamic,retain) NSRecursiveLock* lock; 
+(id)acceptableStatusCodes;
+(void)addAcceptableStatusCodes:(id)arg1;
+(void)addAcceptableContentTypes:(id)arg1;
+(BOOL)canProcessRequest:(id)arg1;
+(id)acceptableContentTypes;
-(void)setHTTPError:(id)arg1;
-(void)setSuccessCallbackQueue:(struct dispatch_queue_s*)arg1;
-(void)setFailureCallbackQueue:(struct dispatch_queue_s*)arg1;
-(void)setCompletionBlockWithSuccess:(id)arg1 failure:(id)arg2;
-(unsigned)responseStringEncoding;
-(void)dealloc;
-(void).cxx_destruct;
-(void)pause;
-(id)error;
@end