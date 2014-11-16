/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, October 18, 2014 at 2:28:54 AM Eastern Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCopying.h>

@interface PFGeoPoint : NSObject <NSCopying> {
	double _latitude; 
	double _longitude; 
}
@property (assign,nonatomic) double latitude; 				//@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude; 				//@synthesize longitude=_longitude - In the implementation block
+(id)geoPointWithDictionary:(id)arg1;
+(id)geoPointWithLatitude:(double)arg1 longitude:(double)arg2;
+(id)geoPoint;
+(id)geoPointWithLocation:(id)arg1;
+(void)geoPointForCurrentLocationInBackground:(id)arg1;
+(id)sharedLocationManager;
-(id)encodeIntoDictionary;
-(double)distanceInRadiansTo:(id)arg1;
-(double)distanceInMilesTo:(id)arg1;
-(double)distanceInKilometersTo:(id)arg1;
-(void)setLatitude:(double)arg1;
-(void)setLongitude:(double)arg1;
-(id)copyWithZone:(NSZone*)arg1;
@end