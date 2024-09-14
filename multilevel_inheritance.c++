#include<iostream>
using namespace std;
class collage
{
    char collage_name[20],collage_location[20];
    public:
    void getdata1();
    void display1();
};
void collage::getdata1()
{
    cout<<"Enter the name of the collage : ";
    cin>>collage_name;
    cout<<"Enter the location of the collage : ";
    cin>>collage_location ;
}
void collage::display1()
{
    cout<<"Name of tyhe collage is "<<collage_name<<endl;
    cout<<"Collage location is "<<collage_location<<endl;
}
class department:public collage
{
    char dep[20];
    public:
    void getdata2();
    void display2();
};
void department::getdata2()
{
    cout<<"Enter the department name : ";
    cin>>dep;
}
void department::display2()
{
    cout<<"Name of the department is "<<dep<<endl;
}
class details:public department
{

    int rno;
    char name[20],classs[20];
    public:
    void getdata3();
    void display3();
};
void details::getdata3()
{
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the class of the student : ";
    cin>>classs;
    cout<<"Enter the rollnumber of thr student : ";
    cin>>rno;
}
void details::display3()
{
    cout<<endl;
    cout<<"Name of the student is "<<name<<endl;
    cout<<"Class of the student is "<<classs<<endl;
    cout<<"Rollnumber of the student is "<<rno<<endl;
}
int main()
{
    details det; 
    det.getdata3();
    det.getdata2();
    det.getdata1();
    det.display3();
    det.display2();
    det.display1();
    return 0;
}
