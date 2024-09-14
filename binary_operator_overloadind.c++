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
        cout<<"x = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
        cout<<"Z = "<<z<<endl;
    }
    binary operator +(binary b2)
    {
        binary b3;
        b3.x=x+b2.x;
        b3.y=y+b2.y;
        b3.z=z+b2.z;
        return(b3);
    }
};
int main()
{
    binary b1,b2,b3;
    int a,b,c,d,e,f;
    cout<<"Ente the first three numbers : ";
    cin>>a>>b>>c;
    cout<<"Ente the second three number  : ";
    cin>>d>>e>>f;
    b1.getdata(a,b,c);
    b2.getdata(d,e,f);
    b3=b1+b2;         //caliing 
    b3.display();
    return(0);

}