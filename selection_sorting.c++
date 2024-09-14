#include <iostream>
using namespace std;
class sorting
{
    int num[20], limit, i, j, temp;

public:
    void getdata();
    void operation();
    void display();
};
void sorting ::getdata()
{
    cout << "Enter the limit : ";
    cin >> limit;
    cout << "Enter the elements : ";
    for (i = 0; i < limit; i++)
    {
        cin >> num[i];
    }
}
void sorting::operation()
{
    for (i = 0; i < limit - 1; i++)
    {
        for (j = i + 1; j < limit; j++)
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
    }
}
void sorting::display()
{
    cout << "The sorted arry is : " << endl;
    for (i = 0; i < limit; i++)
    {
        cout << num[i] << endl;
    }
}
int main()
{
    sorting s;
    s.getdata();
    s.operation();
    s.display();
    return 0;
}