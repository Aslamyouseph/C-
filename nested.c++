#include<iostream>
using namespace std;
class student
{
    int rno;
    char name[20],classs[30];
    public:
    void getdata();
    void display();
};
void student::getdata()
{
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the class of the student : ";
    cin>>classs;
    cout<<"Enter the rollnumber of the student :";
    cin>>rno;
    display();
}
void student::display()
{
    cout<<"Name of the student is "<<name<<endl;
    cout<<"class of the student is "<<classs<<endl;
    cout<<"rollnumber of the student is "<<rno<<endl;
}
int main()
{
    student stu;
    stu.getdata();
    return 0;

}