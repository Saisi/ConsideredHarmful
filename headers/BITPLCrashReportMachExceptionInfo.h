/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:29:12 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITPLCrashReportMachExceptionInfo : NSObject {
	unsigned long long _type; 
	NSArray* _codes; 
}
@property (nonatomic,copy) unsigned long long type; 				//@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray* codes; 				//@synthesize codes=_codes - In the implementation block
-(id)initWithType:(unsigned long long)arg1 codes:(id)arg2;
-(void)dealloc;
@end