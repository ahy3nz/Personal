#import "listnode.h"
#import <stdio.h>

@implementation listnode
- (id) val: (int) newval
{
  val = newval;
  return self;
}

- (int) val
{
  return val;
}

- (id) next: (listnode*) node
{
  next = node;
  return self;
}

- (listnode*) next
{
  return next;
}
@end
