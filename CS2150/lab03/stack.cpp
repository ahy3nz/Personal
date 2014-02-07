/*Alex Yang (ahy3nz)
  February 6th, 2014 */
#include <iostream>
#include <string>
#include "List.h"
#include "ListItr.h"
#include "ListNode.h"
#include "stack.h"

using namespace std;

stack::stack() {

}
void stack::push(int e) {
  ListNode *toadd = new ListNode;
  (*toadd).value = e;
  items.insertAtTail(e);
 
}

int stack::top() {
  //  return items.last().current->previous->value;
  return items.last().current->value;
}

void stack::pop() {
  //  items.tail->previous = items.last().current->previous;
  items.tail->previous  = items.tail->previous->previous;
  //  items.last().current->previous = items.last().current->previous->previous;
}

bool stack::empty() {
  return items.isEmpty();
}
