#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include "postfixCalculator.h"
/*Alexander Yang
  2/3/14
  postfixCalculator.cpp */

postfixCalculator::postfixCalculator() {
  
}

postfixCalculator::postfixCalculator(string expression) {
  for(int x = 0; x < expression.size(); x++) {
    string element = "";
    
    char c = expression.at(x);
    if( c == '+') {
      add();
    }
    else if (c == '-') {
      if ( x+1 >= expression.size() ) {
	subtract();
      }

      else {
	if (expression.at(x+1) != ' ') { //if this is a negative sigm
	x++;
	while(expression.at(x) != ' ') { //while the current char is a number
	  element += expression.at(x); //append number to function
	  x++; //look at the next char
	}
	const char *cstring = element.c_str();
	int topush = -1 * atoi(cstring);
	expressionstack.push(topush);

      }
      else {
	subtract();
      }
	
      }
    }	
    else if (c == '*') {
      multiply();
    }
    else if (c == '/') {
      divide();
    }
    else if (c =='~') {
      negate();
    }
    else { 
      if (c == ' ') {
      }
      else {
	while(expression.at(x) != ' ') {
	  element += expression.at(x);
	  x++;
	}
	const char *cstring = element.c_str();
	int topush = atoi(cstring);
	expressionstack.push(topush);
      }
    }
 }
   
  
}

postfixCalculator:: ~postfixCalculator() {
    delete this;
  }

void postfixCalculator::pushNum(int c) {
  expressionstack.push(c);

}
void postfixCalculator::add() {
  if(expressionstack.empty())
    {
      cout <<  "Error: No integers left in the stack!";
    }
  else {
    //    cout << expressionstack.top() << endl;
    int int1 = expressionstack.top();
    expressionstack.pop();
    int int2 = expressionstack.top();
    expressionstack.pop();
    expressionstack.push(int1 + int2);
  }
}

void postfixCalculator::subtract() {
if(expressionstack.empty())
    {
      cout << "Error: No integers left in the stack!";
    }
  else {
    int int1 = expressionstack.top();
    expressionstack.pop();
    int int2 = expressionstack.top();
    expressionstack.pop();
    expressionstack.push(int2 - int1);
  }
}

void postfixCalculator::multiply() {
if(expressionstack.empty())
    {
      cout << "Error: No integers left in the stack!";
    }
  else {
    int int1 = expressionstack.top();
    expressionstack.pop();
    int int2 = expressionstack.top();
    expressionstack.pop();
    expressionstack.push(int1 * int2);
  }
}

void postfixCalculator::divide() {
if(expressionstack.empty())
    {
      cout << "Error: No integers left in the stack!";
    }
  else {
    int int1 = expressionstack.top();
    expressionstack.pop();
    int int2 = expressionstack.top();
    expressionstack.pop();
    expressionstack.push(int2 / int1);
  }
}

void postfixCalculator::negate() {
if(expressionstack.empty())
    {
      cout <<  "Error: No integers left in the stack!";
    }
  else {
    int int1 = expressionstack.top();
    expressionstack.pop();
    expressionstack.push(-1 * int1);
  }
}

void postfixCalculator::addExpression(string expression) {
  for(int x = 0; x < expression.size(); x++) {
    string element = "";
    
    char c = expression.at(x);
    if( c == '+') {
      add();
    }
    else if (c == '-') {
      if ( expression.at(x+1) != ' ') {
	x++;
	while(expression.at(x) != ' ') {
	  element += expression.at(x);
	  x++;
	}
	const char *cstring = element.c_str();
	int topush = -1 * atoi(cstring);
	expressionstack.push(topush);

      }
      else {
	subtract();
      }
    }
    else if (c == '*') {
      multiply();
    }
    else if (c == '/') {
      divide();
    }
    else if (c =='~') {
      negate();
    }
    else { 
      if (c == ' ') {
      }
      else {
	while(expression.at(x) != ' ') {
	  element += expression.at(x);
	  x++;
	}
	const char *cstring = element.c_str();
	int topush = atoi(cstring);
	expressionstack.push(topush);
      }
    }
 }
}

int postfixCalculator::answer() {
  //  cout << expressionstack.top() << endl;
  return expressionstack.top();
}
