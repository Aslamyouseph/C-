#include<iostream>
#include<math.h>
using namespace std;
class complex
{
    public:
    float real,imaginary,modulas,r,i,m;
    void getdata();
    void operation();
    void display();
};
void complex::getdata()
{
    cout<<"Enter the real part of the complex number : ";
    cin>>real;
    cout<<"Ente the imaginary part of the complex  number : ";
    cin>>imaginary;
}
void complex::operation()
{
    r=real*real;
    i=imaginary*imaginary;
    m=r+i;
    modulas=sqrt(m);
}
void complex::display()
{
    cout<<"The modulas of the complex number is : "<<modulas<<endl;
}
int main()
{
    complex c;
    c.getdata();
    c.operation();
    c.display();
    return (0);
}