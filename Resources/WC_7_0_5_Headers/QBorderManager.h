//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, QBorder;

@interface QBorderManager : NSObject
{
    int _version;
    NSMutableDictionary *_borderDict;
    QBorder *_inlandBorder;
    QBorder *_chinaBorder;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *borderDict; // @synthesize borderDict=_borderDict;
- (_Bool)checkMapStatus:(id)arg1 withLogoSource:(id)arg2;
@property(retain, nonatomic) QBorder *chinaBorder; // @synthesize chinaBorder=_chinaBorder;
- (_Bool)chinaContainsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)chinaContainsMapRect:(CDStruct_02837cd9)arg1;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1 in:(id)arg2;
- (_Bool)containsMapRect:(CDStruct_02837cd9)arg1 in:(id)arg2;
- (void)downloadNewFrontierData:(id)arg1;
- (id)getFrontierFilePath;
- (id)init;
@property(retain, nonatomic) QBorder *inlandBorder; // @synthesize inlandBorder=_inlandBorder;
- (id)readLocalFrontierFile;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)setupBorders;
- (void)setupSelf;
- (void)setupSelfWithFrontierDict:(id)arg1;
- (_Bool)shouldCorrectCoordinateToGCJ02:(struct CLLocationCoordinate2D)arg1;
- (_Bool)updateFrontierData:(id)arg1;

@end

