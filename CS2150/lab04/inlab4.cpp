#include <iostream>
#include <string>
#include <math.h>
#include <limits>
#include <climits>

using namespace std;

class inlab4{
public:
  inlab4();
};

inlab4::inlab4() {
}

int main() {
  //inlab4 *test = new inlab4();
  bool b = true;
  char c = '0';
  int i = 1;
  double d = 0;
  int *p = &i;
  cout << "Values: "<<endl;
  cout << "Bool: " << b<< endl;
  cout << "Char: "<< c << endl;
  cout << "Int: "<< i << endl;
  cout << "Double: " << d << endl;
  cout << "*Int: " << p <<endl;
  i = -1;
  int IntArray[10];
  char CharArray[10];
  int IntArray2D[6][5];
  //  int z = 0;
  char CharArray2D[6][5];
  for(int x =0; x <6; x++) {

    for (int y=0; y<5;y++) {
      IntArray2D[x][y] = 20*x+y;
    }
  }

  cout<< IntArray << CharArray<<IntArray2D<<CharArray2D<<endl;
  cout << "Done"<<endl;
  return 0;
}
