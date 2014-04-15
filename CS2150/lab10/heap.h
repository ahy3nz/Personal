// Code written by Aaron Bloomfield, 2014
// Released under a CC BY-SA license
// This code is part of the https://github.com/aaronbloomfield/pdr repository

#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include "huffmannode.h"
using namespace std;

class priority_queue {
public:
    priority_queue();
    priority_queue(vector<huffmannode*> vec);
    ~priority_queue();

    void insert(huffmannode *x);
    huffmannode * findMin();
    huffmannode * deleteMin();
    unsigned int size();
    void makeEmpty();
    bool isEmpty();
    void print();

private:
    vector<huffmannode*> heap;
    unsigned int heap_size;

    void percolateUp(int hole);
    void percolateDown(int hole);
};

#endif
