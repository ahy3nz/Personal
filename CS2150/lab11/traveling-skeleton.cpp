#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cstdlib>
using namespace std;

#include "middleearth.h"

float computeDistance (MiddleEarth &me, string start, vector<string> dests);
void printRoute (string start, vector<string> dests);

int main (int argc, char **argv) {
    // check the number of parameters
  /* if ( argc != 6 ) {
        cout << "Usage: " << argv[0] << " <world_height> <world_width> "
             << "<num_cities> <random_seed> <cities_to_visit>" << endl;
        exit(0);
	}*/
    // we'll assume the parameters are all well-formed
    int width, height, num_cities, rand_seed, cities_to_visit;
    /*sscanf (argv[1], "%d", &width);
    sscanf (argv[2], "%d", &height);
    sscanf (argv[3], "%d", &num_cities);
    sscanf (argv[4], "%d", &rand_seed);
    sscanf (argv[5], "%d", &cities_to_visit);*/
    width = 20;
    height = 20;
    num_cities = 20;
    rand_seed = 14;
    cities_to_visit = 4;
    // Create the world, and select your itinerary
    MiddleEarth me(width, height, num_cities, rand_seed);
    vector<string> dests = me.getItinerary(cities_to_visit);
    string start = dests.at(0);
    cout<<dests.at(0)<<endl;
    dests.erase(dests.begin());
    //  printRoute(dests.at(0), dests);
    //    dests.push_back(dests.at(0));
    float mindistance;
    vector<string> minvector=dests;
      sort(dests.begin(),dests.end());
    int count =0;
    do {
      ++count;
      vector<string> full = dests;
      // full.insert(full.begin(), start);
      full.push_back(start);
      full.insert(full.begin(), start);
      // printRoute(dests.at(0), dests);
      //printRoute(start, full);
      printRoute(dests.at(0), dests);
      //    printRoute(full
      /*float temp = computeDistance(me, dests.at(0),dests);
      if(temp<mindistance) {
	mindistance=temp;
	minvector = dests;
	}*/

    } while(next_permutation(dests.begin()  ,dests.end()));
    //cout << computeDistance(me, minvector.at(0), minvector) << endl;
    cout<<count<<"permutations"<<endl;
    // printRoute(minvector.at(0), minvector);
    //cout << mindistance <<endl;
    // YOUR CODE HERE
    return 0;
}

// This method will compute the full distance of the cycle that starts
// at the 'start' parmater, goes to each of the cities in the dests
// vector IN ORDER, and ends back at the 'start' parameter.
float computeDistance (MiddleEarth &me, string start, vector<string> dests) {
  float dist;
  //string city1 ;
  //string city2 ;
  for(vector<string>:: iterator it = dests.begin() ; it!=dests.end()-1; ++it ) {
    dist = dist + me.getDistance(*it, *(it+1));
  }


    // YOUR CODE HERE
  return dist;
}

// This method will print the entire route, starting and ending at the
// 'start' parameter.  
void printRoute (string start, vector<string> dests){
  //cout << start << " -> ";
  for(vector<string>::iterator it = dests.begin(); it != dests.end(); ++it) {
    /* if(++it == dests.end()-1) {
      cout << *it<<endl;
      }*/
    // else 
    //{
    cout << *it << " -> " ;
    //}
   
  }
  cout <<endl;
  // YOUR CODE HERE
}
