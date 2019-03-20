#import <Foundation/Foundation.h>

@interface PMKArray : NSObject {
@public
  id objs[3];
  NSUInteger count;
} @end

id PMKCallVariadicBlock(id frock, id result);
