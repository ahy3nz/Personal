/*Alex Yang (ahy3nz)
  February 7th, 2014
*/
#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "ListNode.h"
#include "List.h"
#include "ListItr.h"
#include <cstdlib>
using namespace std;

class stack {
 public:
  stack();
  void push(int e);
  int top();
  void pop();
  bool empty();
 private:
  List items;
  friend class ListItr;
};

#endif
