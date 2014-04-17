/*Alex Yang ahy3nz */
#include "huffmannode.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
#include <vector>

using namespace std;

huffmannode::huffmannode()
{
}

huffmannode::huffmannode(char g, int freq) {
  val = g;
  frequency = freq;
  prefix = "";
}

int huffmannode::getFreq() {
  return frequency;
}

char huffmannode::getVal() {
  return val;
}

huffmannode* huffmannode::getLeft() {
  return left;
}
huffmannode* huffmannode::getRight() {
  return right;
}
huffmannode* huffmannode::getParent() {
  return parent;
}
string huffmannode::getPrefix() {
  return prefix;
}
void huffmannode::setLeft(huffmannode* temp) {
  left = temp;
}
void huffmannode::setRight(huffmannode* temp) {
  right = temp;
}
void huffmannode::setVal(char s){
  val = s;
}
void huffmannode::setPrefix(string s){
  prefix = s;
}
