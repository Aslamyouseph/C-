#include <iostream>
using namespace std;

class quick
{
public:
    int pivot, j, i, limit, a[20], l, h;
    void getdata();
    int partition(int, int);
    void sort(int, int);
    void display();
};

void quick::getdata()
{
    cout << "Enter the limit of the array : ";
    cin >> limit;
    cout << "Enter the array values : ";
    for (i = 0; i < limit; i++)
    {
        cin >> a[i];
    }
}

int quick::partition(int l, int h)
{
    pivot = a[l];
    i = l;
    j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[l], a[j]); // it is a funtion used to swapp two values without manuallu (like temp=a ,a=b ,b=temp)
    return (j);
}

void quick::sort(int l, int h)
{
    if (l < h)
    {
        j = partition(l, h);
        sort(l, j);
        sort(j + 1, h);
    }
}

void quick::display()
{
    cout << "The sorted array is: " << endl;
    for (i = 0; i < limit; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    quick q;
    q.getdata();
    q.sort(0, q.limit);
    q.display();
    return (0);
}
