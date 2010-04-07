//
//  BNRDataBuffer+Encryption.h
//  EncryptionTest
//
//  Created by Adam Preble on 4/6/10.
//  Copyright 2010 Big Nerd Ranch. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "BNRDataBuffer.h"

@interface BNRDataBuffer (Encryption)

- (void)decryptWithKey:(NSString *)key salt:(const UInt8 *)salt;
- (void)encryptWithKey:(NSString *)key salt:(const UInt8 *)salt;

@end