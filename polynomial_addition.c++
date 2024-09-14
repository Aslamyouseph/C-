// reffer renisha's cs eduworld
#include <iostream>
using namespace std;

class poly_add
{
public:
    void operation(int a[20][2], int b[20][2], int m, int n);
};

void poly_add::operation(int a[20][2], int b[20][2], int m, int n)
{
    int c[20][2], i = 0, j = 0, k = 0; // Initialize i, j, k

    while (i < m && j < n)
    {
        if (a[i][1] == b[j][1])
        {
            c[k][0] = a[i][0] + b[j][0];
            c[k][1] = a[i][1];
            i++;
            j++;
            k++;
        }
        else if (a[i][1] > b[j][1])
        {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            i++;
            k++;
        }
        else
        {
            c[k][0] = b[j][0];
            c[k][1] = b[j][1]; // Fix the index to access exponent in array b
            j++;
            k++;
        }
    }
    // Copy the remaining terms from a and b
    while (i < m)
    {
        c[k][0] = a[i][0];
        c[k][1] = a[i][1];
        i++;
        k++;
    }
    while (j < n)
    {
        c[k][0] = b[j][0];
        c[k][1] = b[j][1];
        j++;
        k++;
    }

    cout << "The sum of two polynomials is: " << endl;
    for (i = 0; i < k; i++)
    {
        cout << c[i][0] << "x^" << c[i][1];
        if (i < k - 1)
        {
            cout << " + ";
        }
    }
    cout << endl;
}

int main()
{
    int a[20][2], b[20][2], i, j, item1, item2;
    cout << "Enter the total number of items in polynomial 1: " << endl;
    cin >> item1;
    cout << "Enter the coefficients and exponents of polynomial 1: ";
    for (i = 0; i < item1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "Enter the total number of items in polynomial 2: " << endl;
    cin >> item2;
    cout << "Enter the coefficients and exponents of polynomial 2: ";
    for (i = 0; i < item2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
    }

    poly_add p1;
    p1.operation(a, b, item1, item2);
    return 0;
}
