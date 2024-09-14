#include <iostream>
using namespace std;
class student
{
    public:
    char name[20];
    int rno;
    void getdata();
    void display();
};
void student ::getdata()
{
    cout<<"Enter the name of the student : ";
    cin>>name ;
    cout<<"Enter the roll numbe of the student : ";
    cin>>rno;
}
void student::display()
{
    cout<<"Name of the student is "<<name<<endl;
    cout<<"Rollnumber of the student is "<<rno<<endl;
}
int main()
{
    student stu;
    stu.getdata();
    stu.display();
    return(0);
}