/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:29:13 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITPLCrashReporterConfig : NSObject {
	unsigned _signalHandlerType; 
	unsigned _symbolicationStrategy; 
}
@property (nonatomic,copy) unsigned signalHandlerType; 				//@synthesize signalHandlerType=_signalHandlerType - In the implementation block
@property (nonatomic,copy) unsigned symbolicationStrategy; 				//@synthesize symbolicationStrategy=_symbolicationStrategy - In the implementation block
+(id)defaultConfiguration;
-(id)initWithSignalHandlerType:(unsigned)arg1 symbolicationStrategy:(unsigned)arg2;
-(id)init;
@end