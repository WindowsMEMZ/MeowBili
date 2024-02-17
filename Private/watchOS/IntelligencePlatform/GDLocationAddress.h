//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDLocationAddress_h
#define GDLocationAddress_h
@import Foundation;

#include "GDRelationshipIdentifier.h"
#include "GDSubentity-Protocol.h"
#include "GDTripleIteratorSubentityRenderer-Protocol.h"

@class NSString;

@interface GDLocationAddress : NSObject<GDTripleIteratorSubentityRenderer, GDSubentity>

@property (readonly, nonatomic) GDRelationshipIdentifier *relationshipIdentifier;
@property (readonly, nonatomic) NSString *subPremises;
@property (readonly, nonatomic) NSString *subThoroughfare;
@property (readonly, nonatomic) NSString *thoroughfare;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *locality;
@property (readonly, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) NSString *administrativeArea;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *ISOCountryCode;

/* class methods */
+ (unsigned long long)triplesColumnsRequiredForRendering;

/* instance methods */
- (id)initWithRelationshipIdTriplesIterator:(id)iterator;
- (id)description;
@end

#endif /* GDLocationAddress_h */