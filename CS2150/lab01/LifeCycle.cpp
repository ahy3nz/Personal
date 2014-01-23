#include "LifeCycle.h"
using namespace std;
MyObject::MyObject(const char *n) : name (n) {
  id = ++ numObjs;
  cout << "MyObject Default constructor: " << *this <<endl;
}

MyObject::MyObject(const MyObject& rhs) : name(rhs.name) {
  id = ++numObjs;
  cout << "MyObject Copy constructor:  " << *this << endl;
}

MyObject::~MyObject() {
  cout << "MyObject Destructor:      " << *this << endl;
}

string MyObject::getName() const {
  return name;
}
void MyObject::setName(const string newName) {
  name = newName;
}

int MyObject::numObjs = 0;

int cmpMyObj(const MyObject o1, const MyObject o2) {
  string name1 = o1.getName(), name2 = o2.getName();
  if ( name1 == name2 )
    return 0;
  else if (name1 < name2 )
    return -1;
  else
    return 1;
}

MyObject getMaxMyObj(const MyObject o1, const MyObject o2) {
  string name1 = o1.getName(), name2 = o2.getName();
  if ( name1 >= name2 )
    return o1;
  else
    return o2;
}

void swapMyObj(MyObject& o1, MyObject& o2) {
  MyObject tmp(o1);
  o1.setName(o2.getName());
  o2.setName(tmp.getName());
}

ostream& operator<<(ostream& output, const MyObject& obj) {
  return output << "(\"" << obj.name << "\"," << obj.id <<")";
}
