#include<iostream>
using namespace std;
class father 
{
    char name[30];
    int age;
    public:
    void getdata1();
    void display1();
};
void father::getdata1()
{
    cout<<"Enter the name of the father : ";
    cin>>name;
    cout<<"Enter the age of the father : ";
    cin>>age;
}
void father::display1()
{
    cout<<"Father name is "<<name<<endl;
    cout<<"age of father is "<<age<<endl;
}
class son:public father
{
    int age;
    char name[30];
    public:
    void getdata2();
    void display2();
};
void son::getdata2()
{
    cout<<endl;
    cout<<"Enter the name of the son : ";
    cin>>name;
    cout<<"Enter the age of the son : ";
    cin>>age;
    father::getdata1();
    cout<<endl;
}
void son::display2()
{
    cout<<endl;
    cout<<"Name of the son is "<<name<<endl;
    cout<<"Age of the son is "<<age<<endl;
    father::display1();
    cout<<endl;
}
class daughter:public father
{
    int age;
    char name[30];
    public:
    void getdata3();
    void display3();
};
void daughter::getdata3()
{
    cout<<"Enter the name of the daughter : ";
    cin>>name;
    cout<<"Enter the age of the daughter : ";
    cin>>age;
    father::getdata1();
}
void daughter::display3()
{
    cout<<"Name of the daughter is "<<name<<endl;
    cout<<"Age of the daughter is "<<age<<endl;
     father::display1();
}
int main()
{
    son s;
    daughter d;
    s.getdata2();
    d.getdata3();
    s.display2();
    d.display3();
    return 0;
}
