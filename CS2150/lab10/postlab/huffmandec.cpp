//Alex Yang ahy3nz
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include "hashTable.h"
#include "huffmannode.h"
#include "heap.h"
#include <stdio.h>
using namespace std;
//read in prefix code structure
//make a huffman tree from the code read in

int main (int argc, char **argv) {
  
    // verify the correct number of parameters
    if ( argc != 2 ) {
        cout << "Must supply the input file name as the only parameter" << endl;
        exit(1);
    }
    // attempt to open the supplied file; must be opened in binary
    // mode, as otherwise whitespace is discarded
    ifstream file(argv[1], ifstream::binary);
    // report any problems opening the file and then exit
    if ( !file.is_open() ) {
        cout << "Unable to open file '" << argv[1] << "'." << endl;
        exit(2);
    }
    // read in the first section of the file: the prefix codes
    char buffer[256];
    huffmannode *root = new huffmannode(); //make the root node
    while ( true ) {
        // read in first character on line
        char first = file.get();
        // catch DOS and UNIX newlines
        if ( (first == '\n') || (first == '\r') )
            continue;
        // read in second character on line
        char second = file.get();
        // did we encounter the separator?
        if ( (first == '-') && (second == '-') ) {
            // read in the rest of the line
            file.getline(buffer, 255, '\n');
            break;
        }
        // read in the prefix code
        file.getline(buffer, 255, '\n');
        // do something with the prefix code
	// cout << "character '" << first << "' has prefix code '"
	//  << buffer << "'" << endl;
	//make nodes for each
	huffmannode *temp = new huffmannode(first, 0);
	//cout <<temp->getVal()<<endl;
	huffmannode *current;
	current = root;
	temp->setPrefix(buffer);

	for (int i=0; buffer[i]!= '\0'; i++) { //loop through each character of the buffer
	  if(buffer[i]== '0') {
	    if(current->getLeft() == NULL) { //if you can't go left, make an internal node and go left
	      huffmannode *internal = new huffmannode(' ',0);
	      current->setLeft(internal);
	      current = current->getLeft();
	      // cout<< "made internal node" <<endl;
	    }
	    else { //if you can go left, go left
	      current = current->getLeft();
	      // cout <<"went left" << endl;
	    }
	  }
	  else if (buffer[i] == '1' ) {
	    if(current->getRight() == NULL) {
	      huffmannode *internal = new huffmannode(' ',0);
	      current->setRight(internal);
	      current = current->getRight();
	      // cout <<"made internal node"<<endl;
	    }
	    else {
	      current = current->getRight(); 
	      // cout <<"went right" <<endl;
	    }
	  }
	}
	current->setVal(temp->getVal());
	//cout <<"added node " <<current->getVal() <<endl;
	//add to tree
    }





    //cout << "reading encoded message............."<<endl;

    // read in the second section of the file: the encoded message
    char bit;
    huffmannode *current;
    current = root;
    string s = "";
    while ( (bit = file.get()) != '-' ) {
      //cout <<bit<<endl;
        if ( (bit != '0') && (bit != '1') )
            continue;
        // do something with the bit read in
        //cout << "read in bit '" << bit << "'" << endl;
	if(bit =='0')
	  current = current->getLeft();
	else
	  current = current->getRight();
	if(current->getLeft() == NULL && current->getRight() == NULL) {
	  //cout <<current->getVal()<<endl;
	  s+=(current->getVal());
	  current = root;
	}

    
	/*	if (bit == '1')  {
	   
	   if(current->getLeft() == NULL && current->getRight() == NULL) {
	    cout<<current->getVal()<<endl;
	    current= root;
	  }
	  current = current->getRight();
	  //cout<< current->getVal() <<endl;
	  // cout << "went right" <<endl;
	}
	else {
	  if(current->getLeft() == NULL && current->getRight() == NULL) {
	    cout<<current->getVal()<<endl;
	    
	    current= root;
	  }
	  current= current->getLeft();
	  //cout <<"went left"<<endl;
	}
	
	if (bit == '1'){
	  if(current->getRight() == NULL) {
	    cout<< current->getVal() <<endl;
	    current = root;
	  }
	  else {
	    current = root->getRight();
	  }
	}
	else if(bit =='0') {
	  if(current->getLeft() == NULL) {
	    cout << current->getVal()<<endl;
	    current = root;
	  }
	  else {
	    current = root->getLeft();
	    
	  }
	  }*/
    }
    // close the file before exiting
    file.close();
    cout <<s <<endl;
}
