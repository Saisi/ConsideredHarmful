/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:24:37 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITPLCrashReportStackFrameInfo : NSObject {
	unsigned long long _instructionPointer; 
	BITPLCrashReportSymbolInfo* _symbolInfo; 
}
@property (nonatomic,copy) unsigned long long instructionPointer; 				//@synthesize instructionPointer=_instructionPointer - In the implementation block
@property (nonatomic,copy) BITPLCrashReportSymbolInfo* symbolInfo; 				//@synthesize symbolInfo=_symbolInfo - In the implementation block
-(id)initWithInstructionPointer:(unsigned long long)arg1 symbolInfo:(id)arg2;
-(void)dealloc;
@end