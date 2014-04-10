#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "subclass.cpp"

int main() {
  int which = rand() % 2;
  parentclass *bar = new subclass();
  /*if (which )
    *bar = new subclass();
  else
    *bar = new parentclass();
    bar-> print();*/
  bar ->print();
  return 0;
}
