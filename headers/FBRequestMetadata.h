/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:38 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBRequestMetadata : NSObject {
	FBRequest* _request; 
	id _completionHandler; 
	NSDictionary* _batchParameters; 
	int _behavior; 
	id _originalCompletionHandler; 
	int _retryCount; 
	id _originalResult; 
	NSError* _originalError; 
}
@property (nonatomic,retain) FBRequest* request; 				//@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completionHandler; 				//@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDictionary* batchParameters; 				//@synthesize batchParameters=_batchParameters - In the implementation block
@property (assign,nonatomic) int behavior; 				//@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) id originalCompletionHandler; 				//@synthesize originalCompletionHandler=_originalCompletionHandler - In the implementation block
@property (assign,nonatomic) int retryCount; 				//@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) id originalResult; 				//@synthesize originalResult=_originalResult - In the implementation block
@property (nonatomic,retain) NSError* originalError; 				//@synthesize originalError=_originalError - In the implementation block
-(void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3;
-(void)setOriginalError:(id)arg1;
-(void)setOriginalResult:(id)arg1;
-(void)setRetryCount:(int)arg1;
-(id)initWithRequest:(id)arg1 completionHandler:(id)arg2 batchParameters:(id)arg3 behavior:(int)arg4;
-(void)setBatchParameters:(id)arg1;
-(void)setOriginalCompletionHandler:(id)arg1;
-(void)setRequest:(id)arg1;
-(void)dealloc;
-(id)description;
-(void)setCompletionHandler:(id)arg1;
-(void)setBehavior:(int)arg1;
@end