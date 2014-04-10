#include <iostream>
#include <string>

using namespace std;

class parentclass {
public:
  parentclass(void):myName(""){}
  ~parentclass(void){ }
  void SetName(string n){
    myName = n;
  }
  virtual  void print(void) {
    cout << "parent" <<endl;
  }

private:
  string myName;
};
