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
        cout << "character '" << first << "' has prefix code '"
             << buffer << "'" << endl;
	//make nodes for each
	huffmannode *temp = new huffmannode(first, 0);
	huffmannode *current;
	current = root;
	temp->setPrefix(buffer);
	for (int i=0; buffer[i]!= '\0'; i++) {
	  if(buffer[i]== '0') {
	    if(current->getLeft() == NULL) {
	      huffmannode *internal = new huffmannode(' ',0);
	      current->setLeft(internal);
	      current = current->getLeft();
	    }
	    else {
	      current = root->getLeft();
	    }
	  }
	  else if (buffer[i] == '1' ) {
	    if(current->getRight() == NULL) {
	      huffmannode *internal = new huffmannode(' ',0);
	      current->setRight(internal);
	      current = current->getRight();
	    }
	    else {
	      current = current->getRight(); 
	    }
	  }
	}
	current = temp;
	//add to tree
    }







    // read in the second section of the file: the encoded message
    char bit;
    while ( (bit = file.get()) != '-' ) {
        if ( (bit != '0') && (bit != '1') )
            continue;
        // do something with the bit read in
        cout << "read in bit '" << bit << "'" << endl;
    }
    // close the file before exiting
    file.close();
}
