#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

class testclass {
public:
  int n;
  char c;
   testclass(int stuff);
  int getNum();
  int getPrivNum();
  char getPrivChar();
  char getChar();
 private:
  int privn;
  char privc;

};

int main () {
  testclass stuff = testclass(3);
  int a = stuff.getNum();
  char b = stuff.getChar();
  int c = stuff.getPrivNum();
  char d = stuff.getPrivChar();
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;
    return 0;
}

testclass::testclass(int stuff) {
  n = stuff;
  c = (char)stuff;
  privn = stuff;
  privc = (char)stuff;
}

int testclass::getNum() {
  return n;
}

int testclass::getPrivNum() {
  return privn;
}

char testclass::getPrivChar() {
  return privc;
}

char testclass::getChar() {
  return c;
}

