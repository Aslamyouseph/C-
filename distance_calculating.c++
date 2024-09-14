#include<iostream>
using namespace std;
class distances
{
    public:
    int feet,inche;
    int f1,f2,i1,i2,r1;
    void getdata();
    void operation();
    void display();
};
void distances::getdata()
{
    cout<<"Enter the first feet : ";
    cin>>f1;
    cout<<"Ente the first inches : ";
    cin>>i1;
    cout<<"Enter the second feet : ";
    cin>>f2;
    cout<<"Enter the second inches : ";
    cin>>i2;
}
void distances::operation()
{
    feet=f1+f2;
    inche=i1+i2;
    if(inche>12)
    {
        feet=feet+1 ;
        inche=inche-12;
    }
    else
    {
        feet=f1+f2;
        inche=i1+i2;
    }
}
void distances::display()
{
    cout<<"feet = : "<<feet<<endl;
    cout<<"Inches = :"<<inche<<endl;
}
int main()
{
    distances d;
    d.getdata();
    d.operation();
    d.display();
    return (0);
}