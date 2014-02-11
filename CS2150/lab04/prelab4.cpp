#include <iostream>
#include <string>
#include <math.h>
#include <limits>
#include <climits>


using namespace std;

class prelab4 {
public:
  prelab4();
  void sizeOfTest();
  string outputBinary(unsigned int x);
  void overflow();

};
prelab4::prelab4() {
}

void prelab4::sizeOfTest() {
  int a = 4;
  cout << "size of integer: " <<  sizeof(a) << endl;
  unsigned int b = 4;
  cout << "size of unsigned int: " << sizeof(b) << endl;
  float c = 4;
  cout <<"size of float: " << sizeof(c)<<endl;
  double d = 4;
  cout <<"size of double: " << sizeof(d)<<endl;
  bool e = true;
  cout << "size of bool: " << sizeof(e)<<endl;
  int *f = &a;
  cout << "size of int*: "<<sizeof(f)<<endl;
  char i  = '4';
  cout<< "size of char: " <<sizeof(char)<<endl;
  char *g = &i;
  cout << "size of char*: " << sizeof(g)<<endl;
  double *h = &d;
  cout << "size of double*: " << sizeof(h)<<endl;
}

string prelab4::outputBinary(unsigned int x) {
  int pwr = 0;
  while (x > pow(2,pwr)) {
    pwr++;
  } //find the largest power of 2 less than x
  char exp[] = {'0','0','0','0','0','0','0','0'}; //exponent is 8 bits
  
  //x = x - pow(2,pwr-1);
  double y = (double) x / pow(2,pwr-1);
  y = y-1;
  
  pwr = pwr-1 +127; //add 127 to the highest power
  //convert pwr to binary
  int a = 7; //a will represent the power of 2 we are on to express the power in binary
  while(a >=0) {
    while (pwr < pow(2,a) ) {
    a--;
    }
    pwr = pwr - pow(2,a);
    exp[7-a] = '1' ;
  }
  
  //calculate mantissa in binary
  char mantissa[23];
  for (int q = 0; q < 23 ;q++) {
      mantissa[q] = '0';
    } //fill the mantissa array with zeros
  
  
  //leftmost/smallest index corresponds to most significant 
  for (int p = 1; p<=23; p++) {
    if (y >= pow(2,-1*p) ) {
      
      y = y - pow(2,-1*p);
      mantissa[p-1]= '1';
      
    }
  }
  string exponent = string(exp);
  cout << "Exponent: " << exponent<<endl;
  string mantiss = string(mantissa);
  cout << "Mantissa: " << mantiss<<endl;
  string toreturn= exponent + mantiss;
  return toreturn;

}

void prelab4::overflow() {
  unsigned int maxint = std::numeric_limits<unsigned int>::max();
  //int d =  INTPTR_MAX;
  int i =1;
  unsigned int j = 1;
  float f = 1 ;
  double d = 1;
  bool b = true;
  char p ='1';
  cout << "max int: "<< i<<j<<f<<d<<b<<p<<endl;
  cout << "Adding 1 to maximum unsigned int: " << maxint + 1 <<endl;
  cout << "We obtain 0 because we add 1 to the maximum value. By counting up 1, all the bits switch to zero, and we are left with no next-significant-bit to turn to 1, so the value reduces to 0" <<endl;
}

int main() {
  prelab4 * test = new prelab4();
  test->sizeOfTest();
  int x;
  cout << "Enter decimal integer to convert : ";
  cin >> x;
  cout<<  test->outputBinary(x) << endl;
  test->overflow();
  return 0;
}
