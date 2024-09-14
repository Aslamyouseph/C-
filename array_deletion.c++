#include<iostream>
using namespace std;
class deletion
{
    int a[20],limit,num,pos,i;
    public:
    void getdata();
    void operation();
    void display();
};
void deletion::getdata()
{
    cout<<"Enter the limit of the array : ";
    cin>>limit;
    cout<<"Enter the elements of an arry : ";
    for(i=1;i<=limit;i++)
    {
        cin>>a[i];
    }
    cout<<"Ente the element wand to remove :";
    cin>>num;
    cout<<"Enter the possition of the element : ";
    cin>>pos;
}
void deletion::operation()
{
    for(i=pos;i<limit;i++)
    {
        a[i]=a[i+1];
    }
    limit=limit-1;
}
void deletion::display()
{
    cout<<"The new arry is :";
    for(i=1;i<=limit;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
    deletion del;
    del.getdata();
    del.operation();
    del.display();
    return (0);
}