#include<iostream>
using namespace std;
class complex
{
    public:
    int r,i;
    float result;
    void getdata(int a,int b)
    {
        r=a;
        i=b;
    }
    void display()
    {
        cout<<"The difference between two complex number is :"<< r <<"+" <<i <<"i";
    }
    friend complex operator-(complex co1,complex co2)
    {
        complex co3;
        co3.r=co1.r-co2.r;
        co3.i=co1.i - co2.i;
        return(co3);
    }
    
};
int main()
{
    int a,b,c,d;
    cout<<"Enter the real part of the first complex number : ";
    cin>>a;
    cout<<"Enter the imaginary part of fiest complex number : ";
    cin>>c;
    cout<<"Enter the real part of second complex number : ";
    cin>>b;
    cout<<"Enter the imaginary part of the second complex number : ";
    cin>>d;
    complex co1,co2,co3;
    co1.getdata(a,c);
    co2.getdata(b,d);
    co3=co1 - co2;
    co3.display();
    return (0);
}

