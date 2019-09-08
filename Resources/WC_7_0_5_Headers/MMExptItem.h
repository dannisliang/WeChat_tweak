//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSDictionary, NSString;

@interface MMExptItem : MMObject <PBCoding>
{
    unsigned int exptId;
    unsigned int groupId;
    unsigned int exptSeq;
    unsigned int startTimeSec;
    unsigned int endTimeSec;
    unsigned int exptType;
    unsigned int subType;
    NSDictionary *exptArgs;
    NSString *exptCheckSum;
}

+ (void)initialize;
- (void).cxx_destruct;
- (unsigned int)checkSessionPageId;
- (unsigned int)decodeReferenceInt:(id)arg1 andWidth:(unsigned int)arg2;
- (unsigned int)decodeReferenceLength:(id)arg1;
- (id)decompressJson:(id)arg1;
@property(nonatomic) unsigned int endTimeSec; // @synthesize endTimeSec;
@property(retain, nonatomic) NSDictionary *exptArgs; // @synthesize exptArgs;
@property(retain, nonatomic) NSString *exptCheckSum; // @synthesize exptCheckSum;
@property(nonatomic) unsigned int exptId; // @synthesize exptId;
@property(nonatomic) unsigned int exptSeq; // @synthesize exptSeq;
@property(nonatomic) unsigned int exptType; // @synthesize exptType;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int groupId; // @synthesize groupId;
- (_Bool)isReady;
- (_Bool)isSessionConfig;
- (_Bool)isSessionPageConfig;
- (_Bool)isSessionUBAConfig;
- (_Bool)isXLabExpt;
- (_Bool)needReport;
- (_Bool)needRptSessionDetail;
- (_Bool)parseJson:(id)arg1;
@property(nonatomic) unsigned int startTimeSec; // @synthesize startTimeSec;
@property(nonatomic) unsigned int subType; // @synthesize subType;
- (id)toSessionConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
