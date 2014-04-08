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
  void print(void) {
    cout << myName <<endl;
  }

private:
  string myName;
};
