/* Alex Yang ahy3nz 
   Running time for a 4x7 grid is .002881 seconds
   Since there are 2 for-loops the scale with the size of the matrix -
   we loop once through the rows and once through the columns
   while the word length and directions do not change from grid to grid -
   big theta is theta of n^2
 */
#include "hashTable.h"
#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <list>
#include "timer.h"
using namespace std;

const double load = .75;

//void readInDict(hashTable htable, string dictionary, int &maxlength);
hashTable readInDict(string dictionary, int&maxlength);
bool readInTable(string filename, int &rows, int&cols,char table[500][500]);
char* getWordInTable (int startRow, int startCol, int dir, int len,
                      int numRows, int numCols,char grid[500][500]);

int main(int argc, char **argv) {
   char grid[500][500];
   //  hashTable *htable = new hashTable();
   int maxlength;
  string dict = argv[1];
  string gridname = argv[2];
    //Need to make the hashtable from dictionary
  hashTable htable =  readInDict(dict, maxlength);
 

  //Need to read in the grid
  int rows, cols;
  readInTable(gridname, rows,cols,grid);
  
  //GetWordInTable *g = new GetWordInTable;
  //Search for words
  int count =0;
  timer t;
  t.start();
  for(int a=0; a<rows;a++) {
    for(int b =0; b<cols; b++) {
      for(int c = 0; c<8; c++) {
	//check if prefixes in this direction exist before looking at full words
	char* prefix = getWordInTable(a,b,c,2,rows,cols,grid);
	if(htable.contains(prefix) ) {
	  
	  for(int d = 0; d<22;d++) {
	    char* word = getWordInTable(a,b,c,d,rows,cols,grid);
	    
	    //is the word technically a word? at least 3 logn)
	    if(string(word).length() >=3) {
	      //check if the word is in the hash table
	      if (htable.contains(word)) {
		
		if(string(word).length() == d) {
		  count ++;
		  //		found->unique();
		  switch (c) { // assumes table[0][0] is in the upper-left
		  case 0:
		    cout<<"N"<<"("<<a<<","<<b<<"):\t\t"<<word<<endl;
		    break; // north
		  case 1:
		    cout<<"NE"<<"("<<a<<","<<b<<"):\t"<<word<<endl;
		    
		    break; // north-east
		  case 2:
		    cout<<"E"<<"("<<a<<","<<b<<"):\t\t"<<word<<endl;
		    
		    break; // east
		  case 3:
		    cout<<"SE"<<"("<<a<<","<<b<<"):\t"<<word<<endl;
		    
		    break; // south-east
		  case 4:
		    cout<<"S"<<"("<<a<<","<<b<<"):\t\t"<<word<<endl;
		    break; // south
		  case 5:
		    cout<<"SW"<<"("<<a<<","<<b<<"):\t"<<word<<endl;
		    
		    break; // south-west
		  case 6:
		    cout<<"W"<<"("<<a<<","<<b<<"):\t\t"<<word<<endl;
		    break; // west
		  case 7:
		    cout<<"NW"<<"("<<a<<","<<b<<"):\t"<<word<<endl;
		    
		    break; // north-west
		  }
		}
	      }
	        }
	  }
	}
      }
    }
  }
  
  t.stop();
  cout<<count<< " words found" <<endl;
  double tim = t.getTime();
  int i = 1000000*tim;
  cout<<"Found all words in " << t.getTime() << " seconds" <<endl;
  cout<<(i)<<endl;
}
hashTable readInDict(string dictionary, int&maxlength) {
  string line;
  int size;
  int count = 0;
  ifstream file1(dictionary.c_str());
  while(getline(file1, line)) {
    size = size +1;
  }
  // vector<string> out = vector<string>();
  ifstream file2(dictionary.c_str());
  hashTable *htable = new hashTable( (int) size/load);
  //hashTable *htable = new hashTable(size); //no load factor
  while(getline(file2,line)) {
    if (line.length() > maxlength) {
      maxlength = line.length();
    }

    string prefix = line.substr(0,2);
    htable->add(htable->hash(prefix), prefix);


    unsigned int a = htable->hash(line);
    htable->add(a,line);
    //out.push_back(line);
    count++;
    
  }
  


  return *htable;
  
}





void readInDict(hashTable *htable, string dictionary, int &maxlength) {
  string line;
  
  ifstream file(dictionary.c_str());
  while(getline(file,line)) {
    if (line.length() > maxlength) {
      maxlength = line.length();
    }
    unsigned int a = htable->hash(line);
    //begin prefix work
    for(int x = 0; x<line.length();x++)
      {
	string prefix = line.substr(0,x);
	htable->add(htable->hash(prefix), prefix);
      }
    
    //end prefix work
    htable->add(a,line);
    /* include prefixes by hashing substrings*/
    
    
  }
  
}
bool readInTable(string filename, int &rows, int&cols, char table[500][500]) {
      // a C++ string to hold the line of data that is read in
    string line;
    // set up the file stream to read in the file (takes in a C-style
    // char* string, not a C++ string object)
    ifstream file(filename.c_str());
    // upon an error, return false
    if ( !file.is_open() )
        return false;
    // the first line is the number of rows: read it in
    file >> rows;
     getline (file,line); // eats up the return at the end of the line
    // the second line is the number of cols: read it in and parse it
    file >> cols;
    //cout << "There are " << cols << " cols." << endl;
    getline (file,line); // eats up the return at the end of the line
    // the third and last line is the data: read it in
    getline (file,line);
    // close the file
    file.close();
    // convert the string read in to the 2-D grid format into the
    // table[][] array.  In the process, we'll print the table to the
    // screen as well.
        int pos = 0; // the current position in the input data
     for ( int r = 0; r < rows; r++ ) {
        for ( int c = 0; c < cols; c++ ) {
	  table[r][c] = line[pos++];
	  //	  cout <<table[r][c];
        }
	//        cout << endl;
     }
       // return success!
    return true;
  
    }

char* getWordInTable (int startRow, int startCol, int dir, int len,
                      int numRows, int numCols, char grid[500][500]) {
    // the static-ness of this variable prevents it from being
    // re-declared upon each function invocataion.  It also prevents it
    // from being deallocated between invocations.  It's probably not
    // good programming practice, but it's an efficient means to return
    // a value.
    static char output[256];
    // make sure the length is not greater than the array size.
    if ( len >= 255 )
        len = 255;
    // the position in the output array, the current row, and the
    // current column
    int pos = 0, r = startRow, c = startCol;
    // iterate once for each character in the output
    for ( int i = 0; i < len; i++ ) {
        // if the current row or column is out of bounds, then break
        if ( (c >= numCols) || (r >= numRows) || (r < 0) || (c < 0) )
            break;
        // set the next character in the output array to the next letter
        // in the table
        output[pos++] = grid[r][c];
        // move in the direction specified by the parameter
        switch (dir) { // assumes table[0][0] is in the upper-left
            case 0:
                r--;
                break; // north
            case 1:
                r--;
                c++;
                break; // north-east
            case 2:
                c++;
                break; // east
            case 3:
                r++;
                c++;
                break; // south-east
            case 4:
                r++;
                break; // south
            case 5:
                r++;
                c--;
                break; // south-west
            case 6:
                c--;
                break; // west
            case 7:
                r--;
                c--;
                break; // north-west
        }
    }
    // set the next character to zero (end-of-string)
    output[pos] = 0;
    // return the string (a C-style char* string, not a C++ string
    // object)
    return output;
}
