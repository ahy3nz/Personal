#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include "hashTable.h"
#include "huffmannode.h"
#include "heap.h"
#include <stdio.h>
using namespace std;

huffmannode * makeTree(priority_queue *pq);
void generateCodes(huffmannode *tree);

//Read a source file and determine the frequencies of characters in the file
//make a hashmap that maps character to frequency
//huffman list nodes for each character will contain the character and associated frequency

int main(int argc, char **argv) {
    //create a hashmap of character to frequency, initially wiht 500 indices
  //also, make a vector of chars to keep track of our chars
  vector<char> *contents = new vector<char>;
  int count =0;
  hashTable *table = new hashTable(500);
  //this means the hashmap takes a character and hashes it and then store the frequency as the value with that associated hash key
  //need to take each character and hash it
  FILE *fp = fopen(argv[1], "r");
  // if the file wasn't found, output and error message and exit
  if ( fp == NULL ) {
    cout << "File '" << argv[1] << "' does not exist!" << endl;
    exit(2);
  }
  // read in each character, one by one.  Note that the fgetc() will
  // read in a single character from a file, and returns EOF when it
  // reaches the end of a file.
  char g;
  //if hashtable contains the character, increment the associated value
  //if hashtable doesn't contain character, add the character to table
  while ( (g = fgetc(fp)) != EOF ) {
    //    cout<<g<<endl;
    if(!(table->contains(g))) {
      table->add( table->hash(g), 1 );
      contents->push_back(g);
      ++count;
    }
    else {
      table->increment(g);
    }
  }
    //So now we have hash table full of hash keys (hashed chars) and their values (their count) as well as a list of all the characters
  

  //Next: Store the character frequencies in a heap (priority queue)
  //This means we need to make a vector of huffman nodes
  vector<huffmannode> *vec = new vector<huffmannode>;
  
  for(int n=0; n<count; n++)
    {
      char c = contents->at(n);
      //cout<<contents->at(n)<<endl;
      huffmannode *temp = new huffmannode(c, table->get( table->hash(c) ) );
      //      cout<<"hi"<<endl;
      vec->push_back(*temp);
    }
  priority_queue *pq = new priority_queue(*vec);
 
    pq->print();
    
//Build a tree of prefix codes that deermine unique bit codes for each character
//    *pq =  makeTree(pq);
    //  pq->print();
    //    huffmannode tree = pq->findMin();
    //cout<< "yo"<<endl;
    huffmannode * tree = makeTree(pq);
        generateCodes(tree);

//Write the prefix codes to an output file
//Re-read the source file and for each characer, write its prefix code


}

huffmannode * makeTree(priority_queue *pq) {
 while(pq->size() > 1) {
    huffmannode left = pq->deleteMin();
    huffmannode right = pq->deleteMin();
    huffmannode parent = pq->deleteMin();
    //cout<<"1"<<endl;
     parent.setLeft(left);
    
    parent.setRight(right);
    pq->insert(parent);
    cout<<"step3"<<endl;      
 }
 cout<<"step4"<<endl;
huffmannode temp= pq->findMin();
 huffmannode *stuff = &temp;
 return stuff;
  
 }

void generateCodes(huffmannode *tree) {
  cout <<"hi"<<endl;
  if(tree->getLeft() && tree->getRight())
    cout << "\n" <<endl;
  else if(!tree->getLeft()) {
    cout<<"0";
    generateCodes(tree->getLeft());
  }
  else 
    {
      cout<<"1";
      generateCodes(tree->getRight());
    }

}
