#include<iostream>
using namespace std;
class vectors
{
    public :
    int x,y,z;
    void getdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"The sum of two vectores are : "<<x<<"i"<<"+"<<y<<"j"<<"+"<<z<<"k"<<endl;
    }
    friend vectors operator + (vectors v1,vectors v2)
    {
        vectors v3;
        v3.x=v1.x+v2.x;
        v3.y=v1.y+v2.y;
        v3.z=v1.z+v2.z;
        return(v3);
    }
};
int main()
{
    int a,b,c,d,e,f;
    cout<<"Ente the first vector first number : ";
    cin>>a;
    cout<<"Enter the first vector second number : ";
    cin>>b;
    cout<<"Enter thr first vector third number : ";
    cin>>c;
    cout<<"Ente the second vector first number : ";
    cin>>d;
    cout<<"Enter the second vector second number : ";
    cin>>e;
    cout<<"Enter thr second vector third number : ";
    cin>>f;
    vectors v1,v2,v3;
    v1.getdata(a,b,c);
    v2.getdata(d,e,f);
    v3=v1+v2;
    v3.display();
    return(0);


}