#include <iostream>
#include <string>
#include "ListItr.h"

ListItr::ListItr() {
}
ListItr::ListItr(ListNode* theNode) {
  current = theNode;
}
bool ListItr::isPastEnd() const {
  if((current->next) == NULL) {
    return true;
  }
  else {
    return false;
  }
}
bool ListItr::isPastBeginning() const {
  if((current->previous) == NULL) {
      return true;
    }
    else {
      return false;
    }
}
void ListItr::moveForward() {
  if(isPastEnd()) {
  }
  else {
    current = (*current).next;
  }
}

void ListItr::moveBackward() {
  if(isPastBeginning()) {
  }
  else {
    current = current->previous;
  }
}

int ListItr::retrieve() const {
  return (*current).value;
}    
