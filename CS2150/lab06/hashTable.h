/* Alex Yang ahy3nz */
#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
#include <vector>

using namespace std;

class hashTable {
  //  static  list<string> table[];  

 public:
  hashTable();
  hashTable(int size);
  unsigned int hash(string s);
  void add(unsigned int n, string s);
  bool contains(char *word);
  bool checkprime(unsigned int p);
  int getNextPrime(unsigned int n);
 private:
  //  list<string> table[25147];
  vector<list<string> > table;
};

#endif
