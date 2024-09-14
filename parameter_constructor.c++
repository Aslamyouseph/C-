#include<iostream>
using namespace std;
class student
{
    int num1,num2;
    public:
    student(int x,int y)
    {
        num1=x;
        num2=y;
    }
    void display();
};
void student::display()
{
    cout<<"The first  number is : "<<num1<<endl;
    cout<<"The second number is : "<<num2;
}
int main()
{
    student s(5,8);
    s.display();
    return 0;
}