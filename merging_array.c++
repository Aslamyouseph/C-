#include <iostream>
using namespace std;
class merging
{
    int a[20],b[20],limit1,limit2,i,c[30],k;
    public:
    void getdata();
    void operation();
    void display();
};
void merging::getdata()
{
    cout<<"Ente the first array limit :  ";
    cin>>limit1;
    cout<<"Ente the first array elements : ";
    for(i=0;i<limit1;i++)
    {
        cin>>a[i];
    }
    cout<<"Ente the second array limit : ";
    cin>>limit2;
    cout<<"Ente the second array values : ";
    for(i=0;i<limit2;i++)
    {
        cin>>b[i];
    }
}
void merging::operation()
{
    for(i=0;i<limit1+limit2;i++)
    {
        if(i<limit1)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[i-limit1];
        }
    }

}                                    
void merging::display()
{
    cout<<"The first array is "<<endl;
    for (i=0;i<limit1;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"The second array is "<<endl;
    for (i=0;i<limit2;i++)
    {
        cout<<b[i]<<endl;
    }
    cout<<"The merged array is "<<endl;
    for(i=0;i<limit1+limit2;i++)
    {
        cout<<c[i]<<endl;
    }
}
int main()
{
    merging mer;
    mer.getdata();
    mer.operation();
    mer.display();
    return (0);

    
}