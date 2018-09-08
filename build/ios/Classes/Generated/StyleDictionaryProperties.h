
//
// StyleDictionaryProperties.h
//
// Do not edit directly, generated on Sat Sep 08 2018 15:13:21 GMT+0100 (BST)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StyleDictionaryProperties : NSObject

+ (NSDictionary *)properties;
+ (NSDictionary *)getProperty:(NSString *)keyPath;
+ (nonnull)getValue:(NSString *)keyPath;

@end
