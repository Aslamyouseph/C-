#include <iostream>
using namespace std;
class friends
{
public:
    int num1, num2; // data member is alwas in public section
    void getdata();
    friend int sum();
};
void friends::getdata()
{
    cout << "Ente the first number : ";
    cin >> num1;
    cout << "Enter the sceond number : ";
    cin >> num2;
}
int sum(friends f)
{
    return (f.num1 + f.num2); // want to create an object
}
int main()
{
    friends f;
    f.getdata();
    cout << "Sum of two numbber is : " << sum(f); // want to pass te above  object
    return 0;
}