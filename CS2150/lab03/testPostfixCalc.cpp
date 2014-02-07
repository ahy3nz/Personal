#include <iostream>
#include <string>
#include "postfixCalculator.h"
using namespace std;
/*Alexander Yang
  2/3/14
   testPostfixCalc.cpp */

int main() {
  string topass;
   
  getline(cin, topass);
  //string str = "20 10 - -3 10 - - 2 - ";
  cout <<"You entered: " << topass << endl;
  
   postfixCalculator *calc = new postfixCalculator(topass);
    cout << "Answer: " << calc->answer() <<endl;
  return 0;
}
