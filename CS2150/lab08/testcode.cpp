#include <iostream>
#include <cstdlib>

using namespace std;

int arrayop(int[]);
int numop(int);

int main() {
  //int array[3] = {1,2,3};
  int x = 3;
    //  int num = arrayop(array);
  int num = numop(x);
  cout << num << endl;
}

int arrayop(int array[]) {
  int ret = array[0] + array[1] + array[2];
  return ret;
}

int numop(int x) {
  int ret = x*3;
  return ret;
}
