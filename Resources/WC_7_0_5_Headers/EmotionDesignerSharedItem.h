//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface EmotionDesignerSharedItem : NSObject <PBCoding>
{
    unsigned int designerUin;
    NSString *oldRedirectUrl;
    NSString *designerName;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *designerName; // @synthesize designerName;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *oldRedirectUrl; // @synthesize oldRedirectUrl;
- (id)toXML;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
