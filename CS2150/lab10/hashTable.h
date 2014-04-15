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
  //  unsigned int hash(string s);
  unsigned int hash(char g);
  int get(unsigned int n);
  void add(unsigned int n, int s);
  void increment(char g);
  // bool contains(const char *word);
  bool contains(char g);
  bool checkprime(unsigned int p);
  int getNextPrime(unsigned int n);
 private:
  //  list<string> table[25147];
  //  vector<list<int> > table;
  vector<int> table;
};

#endif
