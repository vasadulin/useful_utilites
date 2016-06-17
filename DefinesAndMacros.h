//
//  DefinesAndMacros.h
//
//  Created by vasadulin on 17.06.16.
//  Copyright © 2016 Asadulinz Software. All rights reserved.
//

#ifndef DefinesAndMacros_h
#define DefinesAndMacros_h

//NSString *myString = @"my text";
//MY_LOG_STRING_VALUE(myString);
//Will be printed to log: myString = 'my text'
#define MY_LOG_STRING_VALUE(value)  NSLog(@"%s = '%@'", #value,  value)

/*
NSString *myString = @"my text";
MY_LOG_OBJECT_VALUE(myString);
Will be printed to log:myString (__NSCFConstantString) = 'my text'
-----------
NSDictionary *myDictVar = @{@"key1": @"value1", @"key2": @"value2"};
MY_LOG_OBJECT_VALUE(myDictVar);
Will be printed to log:
myDictVar (__NSDictionaryI) = '{
    key1 = value1;
    key2 = value2;
}'
*/
#define MY_LOG_OBJECT_VALUE(value)  NSLog(@"%s (%@) = '%@'", #value, [value class], value)

#endif /* DefinesAndMacros_h */
