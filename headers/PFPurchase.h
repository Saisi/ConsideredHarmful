/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:21 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PFPurchase : NSObject {
}
+(void)complete:(id)arg1 error:(id)arg2 runOnceBlock:(id)arg3;
+(void)restore;
+(void)downloadAssetForTransaction:(id)arg1 completion:(id)arg2;
+(void)findProductsInBackground:(id)arg1 completion:(id)arg2;
+(void)downloadAssetForTransaction:(id)arg1 completion:(id)arg2 progress:(id)arg3;
+(void)addObserverForProduct:(id)arg1 block:(id)arg2;
+(id)contentPathForProductIdentifier:(id)arg1 fileName:(id)arg2;
+(void)buyProduct:(id)arg1 block:(id)arg2;
+(void)clear;
@end