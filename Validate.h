//
//  Validate.h
//  ValidationCode
//
//  Created by MDV on 21/01/12.
//  Copyright 2012. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Validate : NSObject {

}
+ (BOOL) isPasswordValid:(NSString *)pwd;
+ (BOOL) isEmpty:(NSString *) candidate;
+ (BOOL) isValidEmailAddress:(NSString *) candidate;
+ (BOOL) isAlphabetsOnly:(NSString *) candidate;
+ (BOOL) isNumbersOnly:(NSString *) candidate;
+ (BOOL) isAlphaNumeric:(NSString *) candidate;
+ (BOOL) lenghtVaidation:(NSString *) candidate withMinSize:(NSInteger)minSize andMaxSize:(NSInteger)maxSize;
+ (BOOL) isValidURL:(NSString *) candidate;
+ (BOOL) isValidPhoneNumber:(NSString *) candidate;
+ (BOOL) isValidCard:(NSString *) candidate;

+ (BOOL) isValidPattern:(NSString *) candidate;
+ (BOOL) isDesimalNumbersOnly:(NSString *) candidate;
+ (BOOL) isFedAlphaNumeric:(NSString *) candidate;

+ (BOOL) isValideUserName:(NSString *) candidate;
+ (BOOL) isAlphaNumericZipcode:(NSString *) candidate;
@end
