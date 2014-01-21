#ifndef LIFECYCLE_H
#define LIFECYCLE_H
#include <string>
#include <iostream>
using namespace std;

class MyObject {
 public:
  static int numObjs;
  MyObject(const char *n = "--default--");
  MyObject(const MyObject& rhs);
  ~MyObject();
  string getName() const;
  void setName(const string newName);
  // static MyObject staticObj("I'm static, outside of main");
  string name;
  int id;
 
 private:
  //  string name;
  // int id;
};
MyObject getMaxMyObj(const MyObject o1, const MyObject o2);
int cmpMyObj(const MyObject o1, const MyObject o2);
void swapMyObj(MyObject& o1, MyObject& o2);
ostream& operator<<(ostream& output, const MyObject& obj);


static MyObject staticObj("I'm static, outside of main");
#endif
