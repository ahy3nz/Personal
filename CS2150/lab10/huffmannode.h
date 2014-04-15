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
  void setLeft(huffmannode temp);
  void setRight(huffmannode temp);
 private:
  char val;
  int frequency;
  huffmannode *left, *right, *parent;
};
#endif
