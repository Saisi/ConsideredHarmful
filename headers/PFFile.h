/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:29:00 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFFile : NSObject {
	int previousState; 
	int state; 
	NSMutableArray* taskCompletionSources; 
	NSMutableArray* barriers; 
	PFHTTPCommand* currentS3Command; 
	NSString* _name; 
	NSString* _url; 
	NSOperation* _cancellationToken; 
}
@property (assign) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (assign) NSString* url; 				//@synthesize url=_url - In the implementation block
@property (copy) BOOL isDirty; 
@property (copy) BOOL isDataAvailable; 
@property (nonatomic,retain) NSOperation* cancellationToken; 				//@synthesize cancellationToken=_cancellationToken - In the implementation block
@property (nonatomic,retain) PFHTTPCommand* currentS3Command; 
+(id)fileWithName:(id)arg1 url:(id)arg2;
+(id)stagingDir;
+(id)fileWithName:(id)arg1 data:(id)arg2;
+(id)fileWithName:(id)arg1 contentsAtPath:(id)arg2;
+(id)fileWithData:(id)arg1;
+(id)cacheDir;
+(void)initialize;
+(void)clearCache;
-(void)saveInBackground;
-(id)saveAsync:(id)arg1;
-(void)saveInBackgroundWithTarget:(id)arg1 selector:(SEL)arg2;
-(void)saveInBackgroundWithBlock:(id)arg1;
-(id)saveAsync;
-(id)initWithName:(id)arg1 url:(id)arg2;
-(id)stagingPath;
-(void)setCancellationToken:(id)arg1;
-(void)setCurrentS3Command:(id)arg1;
-(void)setState:(int)arg1 withResult:(id)arg2 error:(id)arg3;
-(void)revertStateWithResult:(id)arg1 error:(id)arg2;
-(id)getMimeType;
-(id)uploadFileAsync:(id)arg1 progress:(id)arg2;
-(void)saveInBackgroundWithBlock:(id)arg1 progressBlock:(id)arg2;
-(void)getDataInBackgroundWithBlock:(id)arg1 progressBlock:(id)arg2;
-(void)assertAwaitingFetchOrFetching;
-(id)fetchDataAsync:(id)arg1;
-(id)getCachedData;
-(id)getDataStreamAsync:(id)arg1;
-(void)getDataStreamInBackgroundWithBlock:(id)arg1 progressBlock:(id)arg2;
-(id)getCachedDataStream;
-(id)fetchData:(id)arg1;
-(id)getData:(id*)arg1;
-(id)ensureDataIsCachedAsync;
-(id)getDataStream:(id*)arg1;
-(void)getDataStreamInBackgroundWithBlock:(id)arg1;
-(id)getData;
-(id)getDataStream;
-(void)getDataInBackgroundWithTarget:(id)arg1 selector:(SEL)arg2;
-(id)cachePath;
-(void)getDataInBackgroundWithBlock:(id)arg1;
-(id)getDataAsync:(id)arg1;
-(BOOL)save;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1;
-(void)setName:(id)arg1;
-(void)setUrl:(id)arg1;
-(BOOL)save:(id*)arg1;
@end