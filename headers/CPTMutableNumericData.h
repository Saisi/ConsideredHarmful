/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:25:01 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTMutableNumericData : CPTNumericData {
}
@property (@dynamic) struct _CPTNumericDataType dataType; 
@property (@dynamic) int dataTypeFormat; 
@property (@dynamic) unsigned long sampleBytes; 
@property (@dynamic) long byteOrder; 
@property (@dynamic,copy) void* mutableBytes; 
@property (@dynamic,copy) NSArray* shape; 
-(void)convertToType:(int)arg1 sampleBytes:(unsigned long)arg2 byteOrder:(long)arg3;
-(void)setDataTypeFormat:(int)arg1;
-(void)setSampleBytes:(unsigned long)arg1;
-(void)setByteOrder:(long)arg1;
-(void)setDataType:(struct _CPTNumericDataType)arg1;
-(void)setShape:(id)arg1;
@end