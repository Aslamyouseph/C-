#include<iostream>
using namespace std;
class g_father
{
    int age;
    char name[30];
    public:
    void getdata1();
    void display1();
};
void g_father::getdata1()
{
    cout<<"Enter the name of the grand father : ";
    cin>>name;
    cout<<"Enter the age of the grandfather : ";
    cin>>age;
}
void g_father::display1()
{
    cout<<"Name of the grandfather is "<<name<<endl;
    cout<<"Age of the grandfather is "<<age<<endl;
}
class father:virtual public g_father          //vritual_funtion
{
    public:
    int age;
    char name[30];
    void getdata2();
    void display2();
};
void father::getdata2()
{
    cout<<"Enter the name of the father : ";
    cin>>name;
    cout<<"enter the age of the father : ";
    cin>>age;
}
void father::display2()
{
    cout<<"Name of the father is "<<name<<endl;
    cout<<"Age of the father is "<<age<<endl;

}
class mother:virtual public g_father               //vritual_funtion 
{
    public:
    int age;
    char name[30];
    void getdata3();
    void display3();
};
void mother::getdata3()
{
    cout<<"Enter the name of the mother : ";
    cin>>name;
    cout<<"enter the age of the mother: ";
    cin>>age;
}
void mother::display3()
{
    cout<<"Name of the mother is "<<name<<endl;
    cout<<"Age of the mother is "<<age<<endl;

}
class son :public father,public mother
{
    public:
    int age;
    char name[30];
    void getdata4();
    void display4(); 
};
void son::getdata4()
{
    cout<<"Enter the name of the son : ";
    cin>>name;
    cout<<"enter the age of the son : ";
    cin>>age;
}
void son::display4()
{
    cout<<"Name of the son is "<<name<<endl;
    cout<<"Age of the son is "<<age<<endl;

}
int main()
{
    son s;
    s.getdata1();
    s.getdata2();
    s.getdata3();
    s.getdata4();
    cout<<endl;
    s.display1();
    s.display2();
    s.display3();
    s.display4();
    return 0;
}