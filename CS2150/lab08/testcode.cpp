#include <iostream>
#include <cstdlib>
#include "testclass.cpp"

using namespace std;

int arrayop(int[]);
int numop(int);
int refop(int&);

int main() {
  //int array[3] = {1,2,3};
  int x = 3;
  testclass stuff = testclass(3);
  cout<<stuff.getNum()<<endl;
  cout<<stuff.getChar()<<endl;
  cout<<stuff.getStr()<<endl;
  //  int num = arrayop(array);
    // int num = numop(x);
  //    int num = refop(x);
  
  //  cout << num << endl;
}

int arrayop(int array[]) {
  int ret = array[0] + array[1] + array[2];
  return ret;
}

int numop(int x) {
  int ret = x*3;
  return ret;
}

int refop(int &x) {
  int ret = x*3;
  return ret;
}
