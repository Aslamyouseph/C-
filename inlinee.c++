#include<iostream>
using namespace std;
class inlinee
{
    int num1,num2;
    public:
    void getdata()
    {
        cout<<"Enter the  number : ";
        cin>>num1;
        cout<<"Enter the seconnd number : ";
        cin>>num2;
    }
    inline float add()
    {
        return(num1+num2);
    }
    inline float mul()
    {
        return(num1*num2);
    }
    inline float sub()
    {
        return(num1-num2);
    }
    inline float div()
    {
        return (num1/num2);
    } 
    void display()
    {
        cout<<"Addition of two number is "<<add()<<endl;
        cout<<"Subtraction of two numbers is "<<sub()<<endl;
        cout<<"multiplication  of two number is "<<mul()<<endl;
        cout<<"Divitionn of two number is "<<div()<<endl;
    }
};
int main()
{
    inlinee i;
    i.getdata();
    i.display();
    return 0;
}