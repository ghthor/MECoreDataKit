//
//  NSManagedObject+MEExtensions.h
//  MEFrameworks
//
//  Created by William Towe on 1/16/13.
//  Copyright (c) 2013 Maestro. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
// 
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
// 
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <CoreData/CoreData.h>

@interface NSManagedObject (MEExtensions)

/**
 Calls through to `ME_JSONRepresentationWithIdentityKey:includeRelationships:` passing `@"identity"` and `NO` respectively.
 */
- (NSDictionary *)ME_JSONRepresentation;

/**
 Calls through to `ME_JSONRepresentationWithIdentityKey:includeRelationships:` passing `NO` for includeRelationships.
 */
- (NSDictionary *)ME_JSONRepresentationWithIdentityKey:(NSString *)identityKey;
/**
 Generates an `NSDictionary` instance that captures the property, and optionally, the relationship values of the receiver.
 
 @param identityKey The key that corresponds to the identity property of the receiver. If this property is nil, the `objectID` will be used.
 @param includeRelationships Whether to include the relationships of the receiver in the returned `NSDictionary` instance.
 @return An `NSDictionary` instance
 */
- (NSDictionary *)ME_JSONRepresentationWithIdentityKey:(NSString *)identityKey includeRelationships:(BOOL)includeRelationships;

@end