#include <iostream>
#include <string>
#include "postfixCalculator.h"
using namespace std;
/*Alexander Yang
  2/3/14
   testPostfixCalc.cpp */

int main() {
  string str = "20 10 - -3 10 - - 2 - ";
  postfixCalculator *calc = new postfixCalculator(str);
  cout << calc->answer() <<endl;
  return 0;
}
