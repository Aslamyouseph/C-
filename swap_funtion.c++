#include <iostream>
using namespace std;
int main()
{
    int a;
    int b, temp;
    a = 10;
    b = 20;
    // temp = a;
    // a = b;
    // b = temp;
    // cout << "a =" << a;       done without swap funtion (manualynn)
    // cout << " b = " << b;

    cout << endl; // done with swap funtion (essear way )
    swap(a, b);
    cout << "a =" << a;
    cout << " b = " << b;
}
