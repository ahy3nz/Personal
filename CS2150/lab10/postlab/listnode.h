#import <objc/Object.h>

@interface listnode : Object
{
@private
  int val;
  listnode *next;
}

- (id) val: (int) newval;

- (int) val;

- (id) next: (listnode*) node;

- (listnode*) next;
@end
