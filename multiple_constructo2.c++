#include<iostream>
using namespace std;
class student
{
public:
    int stud_id1;
    char name1[20];
    float m1,m2,total1,per1;
    student()
    {
        cout<<"Defult constructor : "<<endl;
        cout<<"Enter the name of the student : ";
        cin>>name1;
        cout<<"Enter the student id of the employee : ";
        cin >>stud_id1;
        cout<<"Enter the mark of the  three subjects : ";
        cin>>m1>>m2;
        total1=m1+m2;
        per1=total1/200*100;
        cout<<endl;
        cout<<"Name of the student is : "<<name1<<endl;
        cout<<"Roll number of the  student is : "<<stud_id1<<endl;
        cout<<"Total mark of the student is : "<<total1<<endl;
        cout<<"Persentage of the student is : "<<per1<<endl;
        cout<<endl;
    }
    
    student(char a,int b,float c,float d)
    {
        name1[0]=a;
        stud_id1=b;
        m1=c;
        m2=d;
        total1=c+d;
        per1=total1/200*100;
        cout<<"name of the student is : "<<name1<<endl;
        cout<<"Student id is : "<<stud_id1<<endl;
        cout<<"Total mark of the student is : "<<total1<<endl;
        cout<<"Persentage of the student is : "<<per1<<endl;
        
    }
};
int main()
{
    student st();
    char w[20];
    int x;
    float y,z;
    cout<<"Parametrised constructor : "<<endl;
    cout<<"Enter the name te student  : ";
    cin>>w;
    cout<<"Enter the roll number of the student : ";
    cin>>x;
    cout<<"Enter the mark of he two subjects :  ";
    cin>>y>>z;
    student stu1(w,x,y,z);
    cout<<endl;
    cout<<"copy constructor : ";
    student stu3=stu1;
    return(0);
}

