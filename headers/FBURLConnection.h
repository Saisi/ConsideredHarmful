/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:26 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBURLConnection : NSObject {
	BOOL _skipRoundtripIfCached; 
	NSURLConnection* _connection; 
	NSMutableData* _data; 
	id _handler; 
	unsigned _loggerSerialNumber; 
	unsigned long _requestStartTime; 
	NSURLResponse* _response; 
}
@property (nonatomic,retain) NSURLConnection* connection; 				//@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData* data; 				//@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id handler; 				//@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSURLResponse* response; 				//@synthesize response=_response - In the implementation block
@property (assign,nonatomic) unsigned long requestStartTime; 				//@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,copy) unsigned loggerSerialNumber; 				//@synthesize loggerSerialNumber=_loggerSerialNumber - In the implementation block
@property (assign,nonatomic) BOOL skipRoundtripIfCached; 				//@synthesize skipRoundtripIfCached=_skipRoundtripIfCached - In the implementation block
+(void)initialize;
-(void)setSkipRoundtripIfCached:(BOOL)arg1;
-(id)initWithURL:(id)arg1 completionHandler:(id)arg2;
-(id)initWithRequest:(id)arg1 skipRoundTripIfCached:(BOOL)arg2 completionHandler:(id)arg3;
-(id)getCache;
-(void)logAndInvokeHandler:(id)arg1 cachedData:(id)arg2 forURL:(id)arg3;
-(void)logMessage:(id)arg1;
-(void)invokeHandler:(id)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4;
-(void)logAndInvokeHandler:(id)arg1 error:(id)arg2;
-(BOOL)isCDNURL:(id)arg1;
-(void)logAndInvokeHandler:(id)arg1 response:(id)arg2 responseData:(id)arg3;
-(BOOL)shouldShortCircuitRedirectResponse:(id)arg1;
-(void)setResponse:(id)arg1;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)dealloc;
-(void)setData:(id)arg1;
-(void)cancel;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(void)setHandler:(id)arg1;
-(void)setConnection:(id)arg1;
-(void)setRequestStartTime:(unsigned long)arg1;
@end