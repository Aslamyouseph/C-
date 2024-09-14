#include<iostream>
using namespace std;
class student
{
    public :
    int rno,m1,m2,m3,num;
    float per,total;
    char name[20];
    void getdata();
    void operation();
    void display();
};
void student::getdata()
{
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the roll number of the student : ";
    cin>>rno;
    cout<<"Ente the mark of first subject : ";
    cin>>m1;
    cout<<"Enter the mark of the second subject : ";
    cin>>m2;
    cout<<"Ente the mark of the third subject  : ";
    cin>>m3;
    cout<<endl;
}
void student::operation()
{

    total=(m1+m2+m3);
    per=total/300*100;
}
void student::display()
{
    if(per>60)
    {
        //num=num+1;
        cout<<"Name of the student is : "<<name<<endl;
        cout<<"Total mark of the student is : "<<total<<endl;
        cout<<"Persentage of the student is : "<<per<<endl;
        cout<<endl;
    }
}
int main()
{
    student s[20];
    int i,limit;
    cout<<"Ente the number of the students : ";
    cin>>limit;
    cout<<endl;
    for(i=0;i<limit;i++)
    {
        s[i].getdata();
    }
    for(i=0;i<limit;i++)
    {
        s[i].operation();
    }
    for(i=0;i<limit;i++)
    {
        s[i].display();
    }
    return (0);
}