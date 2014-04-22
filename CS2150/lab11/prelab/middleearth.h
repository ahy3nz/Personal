#include <iostream>
#include <vector>
#include <string>
#include <map>

#ifndef MIDDLEEARTH_H
#define MIDDLEEARTH_H

using namespace std;

// see the comments in the lab11 write-up, or in middleearth.cpp

class MiddleEarth {
private:
    int num_city_names, xsize, ysize;
    vector<float> xpos, ypos;
    vector<string> cities;
    float *distances;
    map<string, int> indices;

public:
    /**@brief Constructor for middle earth of cities and their distances from the seed
 *@date April 22, 2014
 *@result MiddleEarth and distances of cities
 *@param xsize size for x distances
 *@param ysize size for y distances
 *@param num_cities number of cities to put in this world
 *@param seed for random numbers
 *@see ~MiddleEarth() 
 */
    MiddleEarth (int xsize, int ysize, int numcities, int seed);
/**@brief Calls the destructor for middle-earth
 *@remark this is sauron
 *@attention this deletes the distances
 */
    ~MiddleEarth();
/**@brief Prints out the number of cities and their positions
 *@result Display all the cities and their positions
 *@author Not Alex Yang
 */
    void print();
/**@brief Print atable of cities and their distances
 *@return Nothing to return, just a table printed out
 */
    void printTable();
/**@brief Returns the distance between two passed cities
 *@param city1 the first city
 *@param city2 the second city
 *@return a float of the distance between the two cities
 */
    float getDistance (string city1, string city2);
/**@return a list of cities to travel to
 *@param length distance to travel
 */
    vector<string> getItinerary(unsigned int length);
};

#endif
