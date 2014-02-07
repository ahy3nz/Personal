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
  //  head = NULL;
  //  tail = NULL;
  count = 0;
  head = new ListNode;
  tail = new ListNode;
  head->next = tail;
  head->previous = NULL;
  tail->previous = head;
  tail->next = NULL;
}

List::List(const List& source){
head=new ListNode;
    tail=new ListNode;
    head->next=tail;
    tail->previous=head;
    count=0;
    ListItr iter(source.head->next);
    while (!iter.isPastEnd()) {       // deep copy of the list
        insertAtTail(iter.retrieve());
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
  // ListNode *temp = new ListNode;
  
  while(head->next != tail) {
    ListNode *temp = head->next;
    head->next = head->next->next;
    delete head->next;
  }

 
  head->next = tail;
  tail->previous = head;
 
  count = 0;
}

ListItr List::first() {
  return ListItr(head->next);
}

ListItr List::last() {
  return ListItr(tail->previous);
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
  
  if(isEmpty()) { //if something between head and tail
    //tail->next =temp;
    //tail->previous->next = temp;
    head->next = temp;
    temp->previous = tail->previous;
    temp->next = tail;
    tail->previous = temp;
    tail->next = NULL;
    head->previous = NULL;
  }
  else {
    tail->previous->next = temp;
    temp->previous = tail->previous;
    temp->next = tail;
    tail->previous = temp;
    tail->next = NULL;
    tail->next = NULL;
    head->previous = NULL;
  }
  
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
  return count-2;
}

void printList(List& source, bool direction) {
    if(direction) {
    ListItr itr = (source).first(); //create listitr pointing at the head
    while(!(itr.isPastEnd())) {
    	cout << itr.retrieve() << endl;
   	itr.moveForward();
    }
    //    cout << itr.retrieve() <<endl;
  }
  else {
    ListItr itr = (source).last();
    //cout << itr.retrieve() << endl;
    //itr.moveBackward();
    
    while(!(itr.isPastBeginning())) {
      cout <<itr.retrieve() << endl;
      itr.moveBackward();
    }
    //    cout<< itr.retrieve() << endl;

  }





    

}
