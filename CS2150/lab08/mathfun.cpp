#include <iostream>
#include <cstdlib>

using namespace std;

extern "C" int product(int,int);
extern "C" int power(int,int);

int main(){
  int a,b;
  cout << "First parameter: ";
  cin >> a;
  cout << "Second parameter: ";
  cin >> b;

  int prod = product(a,b);
   cout<<prod<<endl;
   int powe = power(a,b);
   cout<<powe<<endl;
  return 0;
}
