#include <iostream>
#include <string>
#include "List.h"
using namespace std;

int main() {
 List* list = new List();
 List* list2 = new List( *list);
 cout << list << endl;
 cout << list2<< endl;
 return 0;
}
