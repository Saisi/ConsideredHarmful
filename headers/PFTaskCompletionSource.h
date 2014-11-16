/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:01 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFTaskCompletionSource : NSObject {
	PFTask* _task; 
}
@property (nonatomic,retain) PFTask* task; 				//@synthesize task=_task - In the implementation block
+(id)taskCompletionSource;
-(BOOL)trySetResult:(id)arg1;
-(BOOL)trySetError:(id)arg1;
-(BOOL)trySetException:(id)arg1;
-(BOOL)trySetCancelled;
-(void)setError:(id)arg1;
-(id)init;
-(void)cancel;
-(void).cxx_destruct;
-(void)setTask:(id)arg1;
-(void)setResult:(id)arg1;
-(void)setException:(id)arg1;
@end