#include<iostream>
using namespace std;
class student
{
int rno,age;
char name[20],classs[20];
public:
void getdata();
void display();
};
void student::getdata()
{
cout<<"Enter the name of the student : ";
cin>>name;
cout<<"Enter the  class of the student : ";
cin>>name;
cout<<"Enter the roll number of thr student : ";
cin>>rno;
cout<<"Enter the age of the student : ";
cin>>age;
cout<<endl;
} 
void student::display()
{
cout<<"Name of the student is "<<name<<endl;
cout<<"Class of the student is "<<classs<<endl;
cout<<"Roll number os the student is "<<rno<<endl;
cout<<"Age of the student is "<<age <<endl;
}
int main()
{
    student stu;
    stu.getdata();
    stu.display();
    return 0;
}