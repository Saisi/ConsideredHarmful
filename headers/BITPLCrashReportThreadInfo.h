/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:24:39 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITPLCrashReportThreadInfo : NSObject {
	int _threadNumber; 
	NSArray* _stackFrames; 
	BOOL _crashed; 
	NSArray* _registers; 
}
@property (nonatomic,copy) int threadNumber; 				//@synthesize threadNumber=_threadNumber - In the implementation block
@property (nonatomic,copy) NSArray* stackFrames; 				//@synthesize stackFrames=_stackFrames - In the implementation block
@property (nonatomic,copy) BOOL crashed; 				//@synthesize crashed=_crashed - In the implementation block
@property (nonatomic,copy) NSArray* registers; 				//@synthesize registers=_registers - In the implementation block
-(id)initWithThreadNumber:(int)arg1 stackFrames:(id)arg2 crashed:(BOOL)arg3 registers:(id)arg4;
-(void)dealloc;
@end