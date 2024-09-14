#include<iostream>
using namespace std;
class binary
{
    public:
    int x,y,z;
    void getdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
        cout<<"Z = "<<z<<endl;
    }
    friend binary operator +(binary b1,binary b2)
    {
        binary b3;
        b3.x=b1.x+b2.x;
        b3.y=b1.y+b2.y;
        b3.z=b1.z+b2.z;
        return(b3);
    }
};
int main()
{
    int a,b,c,d,e,f;
    cout<<"Enter the first three number : ";
    cin>>a>>b>>c;
    cout<<"Enter the second three number : ";
    cin>>d>>e>>f;
    binary b1,b2,b3;
    b1.getdata(a,b,c);
    b2.getdata(d,e,f);
    b3=b1+b2;
    b3.display();
    return(0);
}