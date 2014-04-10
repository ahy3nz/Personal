#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

class B:public A{
 B(void){}
  virtual void foo()
    cout<<"B"<<endl;
}
