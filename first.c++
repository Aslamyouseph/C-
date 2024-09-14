#include<iostream>
using namespace std;
class one
{
    public:
    char name[20];
    void getdata()
    {
        cout<<"Ente the name " ;
        cin>>name;
    }
    void display()
    {
        cout<<"Name is :"<<name;
    }
};
int main()
{
    one o;
    o.getdata();
    o.display();
    return 0;
}