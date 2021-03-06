/* Alex Yang (ahy3nz)
   February 1st, 2014
   postfixCalculator.h
*/
#ifndef POSTFIXCALCULATOR_h
#define POSTFIXCALCULATOR_h

#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

class postfixCalculator {
 public:
  postfixCalculator(); //constructor
  postfixCalculator(string expression ); //constructor with input array of ints
  ~postfixCalculator();
  void pushNum(int c);
  void add();
  void subtract();
  void multiply();
  void divide();
  void negate();
  void addExpression(string expression);
  int answer();

 private:
  stack expressionstack;
};

#endif
