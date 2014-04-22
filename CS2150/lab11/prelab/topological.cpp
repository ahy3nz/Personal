#include <iostream>
#include <algorithm>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <vector>

using namespace std;

class node {
public:
  /*@brief Default constructor for node
   *@remark This node has indegree 0 and "" for a name
   */
  node() {
    name = "";
    indegree = 0;
   
  }
  /*@brief Constructor for node
   *@remark name and indegree are specified
   *@param name1 the name for the node or the assoiated data string
   *@param temp the indegree for the node
   */
  node(string name1, int temp) {
  name = name1;
  indegree = temp;
  
}
  /*@return return the indegree of the node
   */
  int getIndegree() {
    return indegree;
  }
  /*@return return the name of the node or the data in the string
   */
  string getName() {
    return name;
  }
  /*@return return a vector of all the outgoing edges, or the nodes that are pointed to
   */
  vector<node> getOutgoing() {
    return outgoing;
  }
  /*@brief set the indegree */
  void setIndegree(int temp) {
    indegree= temp;
  }
  /*@brief set the name of the node */
  void setName(string temp) {
    name = temp;
  }
  /*@brief set the outgoing nodes
    @attention this requires a vector of nodes */
  void setOutgoing(vector<node> temp) {
    outgoing = temp;
  }
  /*@brief print the name and indegree of the node */
  void print() {
    cout << name << "-" << indegree << endl;
  }

private:
  int indegree;
  string name;
  vector<node> outgoing;
};

node * getNode(string name,vector<node> courses);
bool hasNode(string name, vector<node> courses);
node * findLeastNode(vector<node>courses);

int main (int argc, char **argv) {
    // verify the correct number of parameters
    if ( argc != 2 ) {
        cout << "Must supply the input file name as the one and only parameter" << endl;
        exit(1);
    }
    // attempt to open the supplied file
    ifstream file(argv[1], ifstream::binary);
    // report any problems opening the file and then exit
    if ( !file.is_open() ) {
        cout << "Unable to open file '" << argv[1] << "'." << endl;
        exit(2);
    }
    // read in two strings
// read in two strings
    string s1, s2;
    vector<node> courses;
    vector<string> ids;
    while(file.is_open()) {
      file >> s1;
      
      file >> s2;
      cout<<s1<<s2<<endl;
      //if we scan two zeros, then we're done scanning
      if(s1.compare("0") == 0 && s2.compare("0") == 0) {
	break;
      }
      node *firstnode;
      node *secondnode;
      //check if we already have these nodes
      //if we don't have the node then we have ot make it and connect it
      if(!hasNode(s1,courses) ) {
	firstnode = new node(s1,0);
	courses.push_back(*firstnode);
       
      }
      else {
	firstnode = getNode(s1,courses);
      }
      //if we don't have the second string, make it
      if(!hasNode(s2,courses)) {
	secondnode= new node(s2,1);
	courses.push_back(*secondnode);
	
      }
      else {
	secondnode = getNode(s2,courses);
	secondnode->setIndegree(secondnode->getIndegree() +1 );

	
      }
      //add the second node to the first node's edges
      //increase the indegree of the second node that gets pointed to
      vector<node> firstedges = firstnode->getOutgoing();
      firstedges.push_back(*secondnode);
      firstnode->setOutgoing(firstedges);
      firstnode->print();
      secondnode->print();
    }
    file.close();
    
    //have vector of nodes and their indegrees need ot sort
    // node *temp;
    //vector<node> sorted;
    /*for(vector<node>::iterator it = courses.begin(); it!=courses.end(); ++it) {
      //find lowest indegree node
      temp =  findLeastNode(courses);
      cout << "found min" << endl;
      sorted.push_back(*temp);
      //reduce indegrees of nodes it points to
      for(vector<node>::iterator it2=temp->getOutgoing().begin(); it2!=temp->getOutgoing().end(); ++it) {
	it->setIndegree(it->getIndegree()-1);
      }
      //find lowest degree node again

    }
    for(vector<node>::iterator it = sorted.begin(); it!=sorted.end(); ++it) {
      cout<< it->getName() <<endl;
      }*/


    
    return 0;
}

node * getNode(string name,vector<node> courses) {
  for(vector<node>::iterator it = courses.begin(); it != courses.end(); ++it) {
    if(it->getName().compare(name) == 0) {
	return &*it;
      }
    
  }
  node temp = node();
  return NULL;
}
bool hasNode(string name, vector<node> courses) {
  for(vector<node>::iterator it = courses.begin(); it != courses.end(); ++it) {
    if(it->getName().compare(name) == 0) {
	return true;
      }
    
  }
  return false;
}

node * findLeastNode(vector<node>courses) {
  node * temp=  &courses.at(0);
  for(vector<node>::iterator it = courses.begin(); it!=courses.end();++it) {
    if(it->getIndegree() < temp->getIndegree()) {
      temp = &*it;
    }
  }
  cout << temp->getName() <<endl;
  return temp;
}
