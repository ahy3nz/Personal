#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
class bitCounter {
public:
  bitCounter();
  int count(int x);
};
bitCounter::bitCounter() {
}
int bitCounter::count(int x) {
  if(x==1){
    return 1;
  }
  else if(x%2 == 0) {
    return 0 + count(x/2);
  }
  else if(x%2 == 1) {
    return 1 + count(x/2);
  }
  else {
   return 0;
   }
}

int main(int argc, char **argv) {
  bitCounter* act = new bitCounter;
  if (argc==1) {
    cout << "Error: enter a command-line parameter" << endl;
  }
  else {
    for (int i=1; i<argc; i++) {
      cout << "Number of binary ones in "<<argv[i]<<": "<< act->count(atoi(argv[i])) <<endl;
    }
  }
  return 0;
}
