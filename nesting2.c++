#include<iostream>
using namespace std;
class nested
{
    int num1,num2,sum;
    public:
    void getdata();
    void display();
    int operation();
};
void nested::getdata()
{
    cout<<"Ente the first  number : ";
    cin>>num1;
    cout<<"ENter the second number : ";
    cin>>num2;
}
int nested::operation()
{
    return(num1+num2);
}
void nested::display()
{
    cout<<"Sum of two number is "<<operation();
    cout<<endl;
}
int main()
{
    nested n;
    n.getdata();
    n.display();
    return 0;
}