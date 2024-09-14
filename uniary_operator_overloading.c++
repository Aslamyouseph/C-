#include<iostream>
using namespace std;
class over
{
    public:
    int x,y,z;
    void getdata(int ,int,int );
    void display();
    void operator -();                      // decleration section 
};
void over::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void over::display()
{
    cout<<"X = "<<x<<endl;
    cout<<"y ="<<y<<endl;
    cout<<"Z = "<<z<<endl;
}
void over::operator -()             //definition section 
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    over o;
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    cout<<endl;
    o.getdata(a,b,c);
    o.display();
    -o;                               //calling section 
    cout<<endl;
    o.display();
    return (0);
}