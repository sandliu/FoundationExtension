//
//  NSACrypto.h
//  FoundationExtension
//
//  Created by youknowone on 10. 11. 1..
//  Copyright 2010 youknowone.org All rights reserved.
//

/*!
 *  @headerfile NSACrypto.h CommonCrypto shortcuts.
 */

/*!
 *  @brief Shortcuts for CommonCrypto digest.
 */
@interface NSData (FoundationExtensionCrypto)

/*!
 *  @brief MD2 digest.
 */
- (NSData *)digestByMD2;
/*!
 *  @brief MD4 digest.
 */
- (NSData *)digestByMD4;
/*!
 *  @brief MD5 digest.
 */
- (NSData *)digestByMD5;
/*!
 *  @brief SHA1 digest.
 */
- (NSData *)digestBySHA1;
/*!
 *  @brief SHA224 digest.
 */
- (NSData *)digestBySHA224;
/*!
 *  @brief SSH256 digest.
 */
- (NSData *)digestBySHA256;
/*!
 *  @brief SSH384 digest.
 */
- (NSData *)digestBySHA384;
/*!
 *  @brief SSH512 digest.
 */
- (NSData *)digestBySHA512;

// deprecated by alternative method. use -hexadecimalString
- (NSString *)digestStringByMD5 __deprecated;
- (NSString *)digestStringBySHA1 __deprecated;

@end

// string conversion wrapper of NSData (FoundationExtensionCrypto)
@interface NSString (FoundationExtensionCrypto)

- (NSData *)digestByMD5;
- (NSData *)digestBySHA1;

// deprecated by alternative method. use -hexadecimalString
- (NSString *)digestStringByMD5 __deprecated;
- (NSString *)digestStringBySHA1 __deprecated;

@end