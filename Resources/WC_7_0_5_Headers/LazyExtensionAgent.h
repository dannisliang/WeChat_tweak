//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface LazyExtensionAgent : MMService <MMService>
{
    NSMutableDictionary *m_dicExtensions;
    NSMutableDictionary *m_dicKeyExtensions;
}

- (void).cxx_destruct;
- (void)addListener:(Class)arg1 toDic:(id)arg2 forMethods:(struct objc_method_description *)arg3 methodCount:(unsigned int)arg4;
- (void)ensureLazyListenerInitedForExtension:(id)arg1 withSelector:(SEL)arg2;
- (void)ensureLazyListenerInitedForExtension:(id)arg1 withSelector:(SEL)arg2 forKey:(id)arg3;
- (void)onServiceInit;
- (void)registerLazyListener:(Class)arg1 onExtension:(id)arg2;
- (void)registerLazyListener:(Class)arg1 onExtension:(id)arg2 forKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

