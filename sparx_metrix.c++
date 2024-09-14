#include <iostream>
using namespace std;
class sparx
{
public:
    int a[10][10], b[10][10], row, coloum, i, j, k = 1;
    void getdata();
    void operation();
    void display();
};
void sparx::getdata()
{
    cout << "Enter the row size of the metrix : ";
    cin >> row;
    cout << "Enter the coloum size of the metrix : ";
    cin >> coloum;
    cout << "Enter the elemets of the metrix : ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            cin >> a[i][j];
        }
    }
}
void sparx::operation()
{
    // reffer a sparx matrix
    b[0][0] = row;
    b[0][1] = coloum;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
        b[0][2] = k - 1;
    }
}
void sparx::display()
{
    cout << "The orginal metrix is " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "The sparx metrix is " << endl;
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < coloum; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    sparx s;
    s.getdata();
    s.operation();
    s.display();
    return (0);
}