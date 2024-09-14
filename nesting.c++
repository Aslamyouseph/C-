#include<iostream>
using namespace std;
class student
{
    public:
    int rno;
    char name1[20];
    char name2[20];
    void getdata();
    void display();
    void father();
    void father_display();
};
void student::getdata()
{
    cout<<"Ente the name of the student : ";
    cin>>name1;
    cout<<"Enter the rollnumner of the student : ";
    cin>>rno;
}
void student::father()
{
    cout<<"Enter the father name : ";
    cin>>name2;
}
void student::father_display()
{
    cout<<"name of  the father is "<<name2<<endl;
}
void student::display()
{
    cout<<"Name of the student is "<<name1<<endl;
    cout<<"Roll number of the student is "<<rno<<endl;
    cout<<"Name of the father is "<<father_display()<<endl;

}
int main()
{
    student st;
    st.getdata()
    st.father()
    st.display()
    return (0);
}