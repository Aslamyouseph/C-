#include<iostream>
using namespace std;
class searching
{
    int limit,i,values[50],item,flage=0;
    public:
    void getdata();
    void display();
};
void searching::getdata()
{
    cout<<"Enter the limit of the array : ";
    cin>>limit;
    cout<<"Enter the array elements: ";
    for(i=0;i<limit;i++)
    {
        cin>>values[i];
    }
    cout<<"Enter the element you want to find : ";
    cin>>item;
}
void searching::display()
{
    for(i=0;i<limit;i++)
    {
        if(item==values[i])
        {
        flage=1;
        break;
        }
    }
    if(flage==1)
    {
        cout<<"The item is founded  & the possition is "<<i<<endl;
    }
    else
    {
        cout<<"The item is not founded : "<<endl;
    }
}
int main()
{
    searching s;
    s.getdata();
    s.display();
    return 0;
}