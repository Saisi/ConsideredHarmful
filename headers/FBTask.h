/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:28 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBTask : NSObject {
	id<NSObject> _result; 
	NSError* _error; 
	NSException* _exception; 
	BOOL _cancelled; 
	BOOL _completed; 
	NSObject* _lock; 
	NSCondition* _condition; 
	NSMutableArray* _callbacks; 
}
@property (nonatomic,retain) NSObject* lock; 				//@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSCondition* condition; 				//@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) BOOL completed; 				//@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSMutableArray* callbacks; 				//@synthesize callbacks=_callbacks - In the implementation block
+(id)taskWithResult:(id)arg1;
+(id)taskWithError:(id)arg1;
+(id)cancelledTask;
+(id)taskWithException:(id)arg1;
+(id)taskDependentOnTasks:(id)arg1;
+(id)taskWithDelay:(unsigned long long)arg1;
-(id)waitForResult:(id*)arg1;
-(void)runContinuations;
-(void)warnOperationOnMainThread;
-(void)warnOperationOnMainThreadNoOp;
-(BOOL)trySetResult:(id)arg1;
-(BOOL)trySetError:(id)arg1;
-(BOOL)trySetException:(id)arg1;
-(BOOL)trySetCancelled;
-(id)dependentTaskWithBlock:(id)arg1 queue:(id)arg2;
-(id)completionTaskWithQueue:(id)arg1 block:(id)arg2;
-(id)dependentTaskWithBlock:(id)arg1;
-(id)completionTaskWithBlock:(id)arg1;
-(void)setCompleted:(BOOL)arg1;
-(BOOL)isCompleted;
-(void)setError:(id)arg1;
-(void)dealloc;
-(id)init;
-(BOOL)isCancelled;
-(void)cancel;
-(void)setCondition:(id)arg1;
-(void)setLock:(id)arg1;
-(void)setResult:(id)arg1;
-(id)result;
-(void)waitUntilFinished;
-(id)error;
-(void)setCallbacks:(id)arg1;
-(void)setCompleted;
-(void)setException:(id)arg1;
-(id)exception;
@end