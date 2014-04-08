#include <iostream>
#include <string>
#include "parentclass.cpp"

using namespace std;

class subclass: public parentclass {
public:
  subclass(void) {
    myAddress = "";
  }
  ~subclass(void) { }
  void setAddress(string n){
    myAddress = n;
  }
  void print(void) {
    parentclass::print();
    cout << myAddress << endl;
  }
private:
  string myAddress;
};
