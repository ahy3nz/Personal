/* Alex Yang ahy3nz */
#include "hashTable.h"
#include <string>
#include <vector>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <list>

/*We want to put the dictionary into a hashtable
this means take a word (a string) and hash it by assigning it an
index number/address in the hash table. If multiple words (strings)
have the same index/hash value, then let's use separate chaining
by putting linked lists in each spot in the hashtable*/
hashTable::hashTable() {
  //  primenumber p = new primenumber;
  //  p.getNextPrime(n);
  //  list<string> table[n];
  // list<string> table[25147];
  
}
hashTable::hashTable(int size) {
  int  s = getNextPrime(size);
  //  table = new vector<list<string> >(s);
  table.resize(s);
}

unsigned int hashTable::hash(string s) {
  /*  unsigned int  sum = 0;
  int len = s.length()+1;
  char * a = new char[len];
  strcpy(a, s.c_str());
  for(int x =0; x< s.size()+1; x++) {
    sum = sum + a[x]*pow(37,x);
    } */

  //another hash function
  unsigned int sum = 0;
  int len = s.length() + 1;
  char *a =new char[len];
  strcpy(a, s.c_str());
  while (*a) {
    sum = sum*101+ *a++;
  }
  return (sum % table.size()); //mod the sum by the table size
  
}

void hashTable::add(unsigned int n, string s) {
  table[n].push_back(s);
}

bool hashTable::contains(const char *word) {
  string s(word);
  for( list<string>::iterator it=  table[hash(word)].begin(); it!=table[hash(word)].end(); it++) {
    
    if (s.compare(*it)==0) {
      //  cout <<s<<*it<<endl;
      return true;
    }
  }

  return false;
}
bool hashTable::checkprime(unsigned int p) {
    if ( p <= 1 ) // 0 and 1 are not primes; the are both special cases
        return false;
    if ( p == 2 ) // 2 is prime
        return true;
    if ( p % 2 == 0 ) // even numbers other than 2 are not prime
        return false;
    for ( int i = 3; i*i <= p; i += 2 ) // only go up to the sqrt of p
        if ( p % i == 0 )
            return false;
    return true;
}

int hashTable::getNextPrime (unsigned int n) {
    while ( !checkprime(++n) );
    return n; // all your primes are belong to us
}
