#include<iostream>
using namespace std;
class area
{
    public:
    int l,b;
    float h,b1,r;
    void getdata();
    void display();
};
void area::getdata()
{
    cout<<"Enter the length of rectangle : ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle : ";
    cin>>b;
    cout<<"Enter the height of trinagle : ";
    cin>>h;
    cout<<"Enter the breadth of triangle : ";
    cin>>b1;
    cout<<"Enter the radious of circle : ";
    cin>>r;

}
int areas(int a,int b)
{
    return (a*b);
}
float areas (float ra)
{
    return (3.14*(ra*ra));
}
float areas(float ta,float tb)
{
    return(( ta* tb)/2);
}

void area::display()
{
    cout<<endl;
    cout<<"area of the rectangle is : "<<areas(l,b)<<endl;
    cout<<"area of the circle is : "<<areas(r)<<endl;
    cout<<"Area of the trinagle is : "<<areas(b1,h)<<endl;
}
int main()
{
    area ar;
    ar.getdata();
    ar.display();
    return (0);
}
