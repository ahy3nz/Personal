#include <iostream>
#include <cstdlib>
#include "timer.h"

using namespace std;

extern "C" int threexplusone(int);

int main(){
  int x;
  int n;
  cout<<"Number to process?"<<endl;
  cin>> x;
  cout<<"Number of runs?"<<endl;
  cin>>n;

  timer t;
  t.start();
  for (int z = 0;z<n;z++)
    {
      cout<<threexplusone(x)<<endl;
    }
  t.stop();
  double duration = t.getTime();
  double time = 1000*duration;
  cout << time/n << " milliseconds per run" << endl;

  return 0;
}
