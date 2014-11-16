/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:27:56 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AFJSONRequestOperation : AFHTTPRequestOperation {
	id _responseJSON; 
	unsigned _JSONReadingOptions; 
	NSError* _JSONError; 
}
@property (nonatomic,retain) id responseJSON; 				//@synthesize responseJSON=_responseJSON - In the implementation block
@property (assign,nonatomic) unsigned JSONReadingOptions; 				//@synthesize JSONReadingOptions=_JSONReadingOptions - In the implementation block
@property (nonatomic,retain) NSError* JSONError; 				//@synthesize JSONError=_JSONError - In the implementation block
@property (nonatomic,@dynamic,retain) NSRecursiveLock* lock; 
+(BOOL)canProcessRequest:(id)arg1;
+(id)JSONRequestOperationWithRequest:(id)arg1 success:(id)arg2 failure:(id)arg3;
+(id)acceptableContentTypes;
-(void)setCompletionBlockWithSuccess:(id)arg1 failure:(id)arg2;
-(void)setResponseJSON:(id)arg1;
-(void)setJSONError:(id)arg1;
-(void)setJSONReadingOptions:(unsigned)arg1;
-(void).cxx_destruct;
-(id)error;
@end