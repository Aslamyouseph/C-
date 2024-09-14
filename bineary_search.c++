#include<iostream>
using namespace std;
class searching
{
    int i,limit,values[30],item,temp=0,j,stating=0,ending,mid;    // we not able to declear the ending is limit 
    public:
    void getdata();
    void display();
};
void searching::getdata()
{
    cout<<"Enter the array limit : ";
    cin>>limit;
    cout<<"Enter the array values : ";
    for(i=0;i<limit;i++)
    {
        cin>>values[i];
    }
    cout<<"Enter the search key : ";
    cin>>item;
    ending=limit - 1;   // we declear ending is limit -1
}
void searching::display()
{
    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
        if(values[i]>values[j])   //making the array sorting oder 
        {
            temp=values[i];
            values[i]=values[j];
            values[j]=temp;
        }
        }
    }
    cout<<"The arry in assending order : "<<endl;
    for(i=0;i<limit;i++)
    {
        cout<<values[i]<<endl;    //printing the sorted array 
    }
    
    while(stating<=ending)   // always last index is large 
    {
        mid=(stating+ending)/2;   //setting mid value 
        if(values[mid]==item)
        {
            cout<<"The element is founded & possition is "<<mid<<endl;
            return;   //in here bwe want to give return statement becouse if we give break it go to outside of while loop
                    // so it print elemnets are not found when we give return then it go to s.display section(calling section)
        }
        else if(values[mid]<item)
        {
            stating=mid+1;   
        }
        else
        {
            ending=mid-1;
        }
    }
    cout<<"Element are not founded from the array : "<<endl;

}
int main()
{
    searching s;
    s.getdata();
    s.display();
    return 0;
}