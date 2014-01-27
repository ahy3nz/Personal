#include <iostream>
#include <string>
#include "List.h"
#include "ListItr.h"
#include "ListNode.h"
//Issues: first and last node are considered past the end (moving itr forward and backward
//retrieving first or last elemtn is considered past end or past beginning
//inserting element before first
//can't find number if it's the last elemetn (tail)
//removing last elemtn
//copying list with operator = does not copy first and last elements
using namespace std;
List::List() {
  head = NULL;
  tail = NULL;
  count = 0;
  //head->next = tail;
  //head->previous = NULL;
  //tail->previous = head;
  //tail->next = NULL;
}

List::List(const List& source){
  List *thing = new List;
  ListItr iter(source.head->next);
  while(!iter.isPastEnd()) {
    thing->insertAtTail(iter.retrieve());
    cout<<"blah"<<endl;
    iter.moveForward();
  }
  
  

}

List::~List() {

}

List&List::operator=(const List& source) {
  if (this == &source)
    return *this;
  else {
    makeEmpty();
    ListItr iter(source.head->next);
    while(!iter.isPastEnd()){
      insertAtTail(iter.retrieve());
      iter.moveForward();
    }
  }
  return *this;  
}

bool List::isEmpty() const {
  if(count == 0) {
    return true;
  }
  else {
    return false;
  }  
}

void List::makeEmpty() {
  head = NULL;
  tail = NULL;
  count = 0;
}

ListItr List::first() {
  return ListItr(head);
}

ListItr List::last() {
  return ListItr(tail);
}

void List::insertAfter(int x, ListItr position) {
  ListNode *current = position.current;
  ListNode *temp = new ListNode;
  ListNode*next= current->next;
  temp->value  = x;
  
  current->next = temp;
  temp -> previous = current;
  temp->next = next;
  next->previous = temp;
}

void List::insertBefore(int x, ListItr position) {
  ListNode *current = position.current;
  ListNode *prev = current->previous;
  ListNode *temp = new ListNode;
  temp->value = x;
  
  temp->next = current;
  temp->previous = prev;
  current->previous = temp;
  prev->next = temp;
  
 
}
void List::insertAtTail(int x) {
  ListNode *temp = new ListNode;
  (*temp).value = x;
  if(tail) { //if something between head and tail
       tail->next =temp;
    temp->previous = tail;
    temp->next = NULL;
  }
  else {
    head = temp;
  }
  tail = temp;
  count++;

  }
 
void List::remove(int x) {
  ListItr itr = find(x);
  ListNode *prev = (itr).current->previous;
  ListNode *next = (itr).current->next;
  prev->next = next;
  next->previous = prev;
  count--;
}

ListItr List::find(int x) {
  ListItr *itr = new ListItr(head);
  while((*itr).current->value != x) {
    (*itr).moveForward();
  }
  return *itr;
}

int List::size() const {
  int count = 0;
  ListItr *itr = new ListItr(head);
  while(!(*itr).isPastEnd()) {
    count++;
    *itr =  (*itr).current->next;
  }
  count++;
  return count;
}

void printList(List& source, bool direction) {
    if(direction) {
    ListItr itr = (source).first(); //create listitr pointing at the head
    while(!(itr.isPastEnd())) {
    	cout << itr.retrieve() << endl;
   	itr.moveForward();
    }
    cout << itr.retrieve() <<endl;
  }
  else {
    ListItr itr = (source).last();
    //cout << itr.retrieve() << endl;
    //itr.moveBackward();
    
    while(!(itr.isPastBeginning())) {
      cout <<itr.retrieve() << endl;
      itr.moveBackward();
    }
    cout<< itr.retrieve() << endl;

  }





    

}
