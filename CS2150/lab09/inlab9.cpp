#include <iostream>
#include <string>
#include "subclass.cpp"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

  parentclass *dummy;
  
  int random = rand() % 2;
  
  cout<<random<<endl;
   if(random==0) {
     dummy = new subclass();
  }
   else
     {
    dummy = new parentclass();
}
   dummy->print();
   return 0;


}
