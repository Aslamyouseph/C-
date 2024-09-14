#include<iostream>
using namespace std;
class student
{
    char classs[30];
    public:
    void getdata1();
    void display1();
};
void student::getdata1()
{
    cout<<"Enter the class of the student : ";
    cin>>classs;
}
void student::display1()
{
   cout<<"Class of the student is "<<classs<<endl;
}
class details:public student
{ 
    char name[20];
    int rno;
    public:
    void getdata2();
    void display2();
};
void details ::getdata2()
{
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the roll number opf the student : ";
    cin>>rno;
}
void details::display2()
{
    cout<<endl;
    cout<<"Name of the student is "<<name<<endl;
    cout<<"Roll number of the student is "<<rno<<endl;
}
int main()
{
    details det;
    det.getdata2();
    det.getdata1();
    det.display2();
    det.display1();
    return (0);
}