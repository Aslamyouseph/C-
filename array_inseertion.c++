#include<iostream>
using namespace std;
class insertion
{
    int a[20],limit,i,pos,num;
    public:
    void getdata();
    void operation();
    void display();
};
void insertion::getdata()
{
    cout<<"Enter the limit of an array : ";
    cin>>limit;    
    cout<<"Enter the arry elements : ";
    for(i=1;i<=limit;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number want to insert : ";
    cin>>num;
    cout<<"Enter the possition of the arry : ";
    cin>>pos;
}
void insertion::operation()
{
    for(i=limit;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=num;
    limit++;
}
void insertion::display()
{
    cout<<"The new array is :";
    for(i=1;i<=limit;i++)
    {
        cout<<a[i] <<endl ;
    }
}
int main()
{
    insertion ins;
    ins.getdata();
    ins.operation();
    ins.display();
    return (0);
}
