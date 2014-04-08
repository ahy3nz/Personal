#include <iostream>
#include <string>
#include "subclass.cpp"

using namespace std;

int main() {

  subclass dummy;
  dummy.SetName("Alex Yang");
  dummy.setAddress("UVA");
  dummy.print();
  return 0;


}
