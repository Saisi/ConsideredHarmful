/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:12 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SKProductsRequestDelegate.h>

@interface PFProductsRequestHandler : NSObject <SKProductsRequestDelegate> {
	PFProductsRequestHandler* own; 
	SKProductsRequest* productsRequest; 
	id completion; 
}
@property (nonatomic,retain) PFProductsRequestHandler* own; 
@property (nonatomic,retain) SKProductsRequest* productsRequest; 
@property (nonatomic,copy) id completion; 
-(id)initWithProductsRequest:(id)arg1 completion:(id)arg2;
-(void)setOwn:(id)arg1;
-(void)setProductsRequest:(id)arg1;
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)requestDidFinish:(id)arg1;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
-(void)setCompletion:(id)arg1;
-(void).cxx_destruct;
@end