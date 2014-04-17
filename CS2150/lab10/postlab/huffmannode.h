/*Alex Yang ahy3nz */
#ifndef HUFFMANNODE_H
#define HUFFMANNODE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
#include <vector>

using namespace std;

class huffmannode{

 public:
  huffmannode();
  huffmannode(char g, int freq);
  int getFreq();
  char getVal();
  huffmannode* getLeft();
  huffmannode* getRight();
  huffmannode* getParent();
  string getPrefix();
  void setVal(char s);
  void setLeft(huffmannode* temp);
  void setRight(huffmannode* temp);
  void setPrefix(string s);
 private:
  char val;
  string prefix;
  int frequency;
  huffmannode *left, *right, *parent;
};
#endif
