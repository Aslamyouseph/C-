#include<iostream>
using namespace std;
class insertion
{
    int i,limit,a[50],temp=0,j;
    public:
    void getdata();
    void display();
};
void insertion::getdata()
{
    cout<<"Enter the limit of the array : ";
    cin>>limit;
    cout<<"Enter the array elements  : ";
    for(i=0;i<limit;i++)
    {
        cin>>a[i];
    }
}
void insertion::display()
{
    for(i=1;i<limit;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }

    cout<<"The insertion sorting array is "<<endl;
    for(i=0;i<limit;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
    insertion in;
    in.getdata();
    in.display();
    return 0;
}














