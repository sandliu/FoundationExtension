//
//  CocoaExtension.h
//  CocoaExtension
//
//  Created by Jeong YunWon on 12. 10. 28..
//  Copyright (c) 2012 youknowone.org. All rights reserved.
//

/*!
 *  @file
 *  @brief Unified header collection for [Foundation.framework][0] and [AppKit.framework][1] - the main parts of Cocoa - extensions.
 *      [0]: https://developer.apple.com/library/mac/#documentation/Cocoa/Reference/Foundation/ObjC_classic/_index.html
 *      [1]: https://developer.apple.com/library/mac/#documentation/Cocoa/Reference/ApplicationKit/ObjC_classic/_index.html
 *  @details
 *  CocoaExtension is OS X dependent extension collections. This includes FoundationExtension.
 *
 *  For concept,
 *  @see @ref FoundationExtension
 */

#import <FoundationExtension/FoundationExtension.h>

#import <Cocoa/Cocoa.h>
// depenency level 0
#import <CocoaExtension/FSEventStream.h>                    // level: 0 / deps(0):  / internal(1): NSArray
#import <CocoaExtension/NSAttributedString+Cocoa.h>         // level: 0 / deps(1): NSADictionary / internal(0):
#import <CocoaExtension/NSGeometry.h>                       // level: 0 / deps(0):  / internal(0):
#import <CocoaExtension/NSImage.h>                          // level: 0 / deps(0):  / internal(0):
#import <CocoaExtension/NSPasteboard.h>                     // level: 0 / deps(0):  / internal(1): NSArray
#import <CocoaExtension/NSTextView.h>                       // level: 0 / deps(0):  / internal(0):
// depenency level 20
#import <CocoaExtension/NSAImageWell.h>                     // level: 20 / deps(0):  / internal(3): NSGeometry, NSImage, NSPasteboard
