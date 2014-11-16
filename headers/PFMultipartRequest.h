/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:34 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <PFHTTPRequest.h>

@interface PFMultipartRequest : NSObject <PFHTTPRequest> {
	NSString* _contentType; 
	NSData* _footer; 
	NSMutableArray* parts; 
}
@property (copy) NSString* contentType; 				//@synthesize contentType=_contentType - In the implementation block
@property (retain) NSMutableArray* parts; 
@property (copy) NSData* footer; 				//@synthesize footer=_footer - In the implementation block
-(int)bufferPart:(r**)arg1 atIndex:(int)arg2;
-(void)appendPartHeaders:(id)arg1;
-(id)partHeadersForName:(id)arg1;
-(void)appendStream:(id)arg1 length:(unsigned)arg2;
-(void)appendPartWithName:(id)arg1 string:(id)arg2;
-(void)appendPartWithName:(id)arg1 data:(id)arg2;
-(void)appendPartWithHeaders:(id)arg1 body:(id)arg2;
-(void)appendPartWithName:(id)arg1 stream:(id)arg2 length:(unsigned)arg3;
-(void)appendParts:(id)arg1;
-(void)appendPartWithName:(id)arg1 fileData:(id)arg2 mimeType:(id)arg3 fileName:(id)arg4;
-(void)setParts:(id)arg1;
-(id)init;
-(void)appendString:(id)arg1;
-(int)length;
-(void)appendData:(id)arg1;
-(void).cxx_destruct;
@end