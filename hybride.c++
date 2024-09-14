#include<iostream>
using namespace std;
class student
{
    public:
    int rno;
    char name[30],dep[30];                //base class
    void getdata1();                                
};
void student ::getdata1()
{
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the class of the studenmt : ";
    cin>>dep;
    cout<<"Enter the roll number of the student : ";
    cin>>rno;
}
class mark:public student
{
    public:
    int phy,chem,math;                       //single inheritance
    void getdata2();
};
void mark::getdata2()
{
    cout<<"Enter the mark of physics : ";
    cin>>phy;
    cout<<"Enter the mark of chemistry : ";
    cin>>chem;
    cout<<"Enter the mark of maths : ";
    cin>>math;
}
class sports
{
    public:
    int spmark;                         //base class
    void getdata3();
};
void sports ::getdata3()
{
    cout<<"Enter the sports mark of the student : ";
    cin>>spmark;
}
class result:public mark,public sports
{
    public:
    int total,avg;               //multiple inheritance
    void display();
};
void result::display()
{
    total=phy+chem+math;
    avg=total/3;
    cout<<endl;
    cout<<"Total mark of the subject is : "<<total<<endl;
    cout<<"Average mak of the subject is : "<<avg<<endl;
    cout<<"final mark is : "<<total+spmark<<endl;
}
int main()
{
    result r;
    r.getdata1();
    r.getdata2();
    r.getdata3();
    r.display();
    return 0;
}




//  1  base class
//    2  single inheritance
//  3  base class
//  2  3   mutiple inheitace   