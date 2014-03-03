/* Alex Yang ahy3nz */
#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <list>

using namespace std;

class hashTable {
  

 public:
  hashTable();
  unsigned int hash(string s);
  void add(unsigned int n, string s);
  bool contains(char *word);
 private:
  list<string> table[25147];
};

#endif
