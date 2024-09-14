#include<iostream>
using namespace std;
class dm
{
    public :
    float meter,cm;
    void getdata1();
    friend float operation1(float,dm&); 
    friend float operation2(float,dm&);
};
void dm ::getdata1()
{
    cout<<"Enter the metere : ";
    cin>>meter;
    cout<<"Ente the centemeter : ";
    cin>>cm;
}
float operation1(float x,dm &a)
{
    x=x/3.2;
    a.meter=a.meter+x;
    return(a.meter);
}
float operation2(float y, dm &b )
{
    y=y*2.5;
    b.cm=b.cm+y;
    return(b.cm);
}
class db
{
    public:
    float feet,inches;
    void getdata2();
    void display2();
};
void db::getdata2()
{
    cout<<"Enter the feet : ";
    cin>>feet;
    cout<<"Enter the inches : ";
    cin>>inches;
}
void db::display2()
{

    float a,b;
    a=operation1(feet,dmm);
    b=operation2(inches,dmm);
    cout<<"meter is "<<a<<endl;
    cout<<"Centemeter is "<<b<<endl;
}
int main()
{
    dm dmm;
    dmm.getdata1();
    db dbb;
    dbb.getdata2();
    dbb.display2();
    return(0);
}
