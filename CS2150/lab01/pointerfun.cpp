#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int *p;
    *p = n;
    p = &n;
    cout << *p << endl;
    cout << p << endl;
    cout << &n << endl;
    n = 4;
    cout << *p << endl;
    cout <<p<<endl;
    cout<<&n<<endl;
    return 0;
}
