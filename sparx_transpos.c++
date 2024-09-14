// its not a correct onr just for studey the logic only
#include <iostream>
using namespace std;

class sparx
{
public:
    int a[10][10], row, coloum, i, j, nz, temp[10][10];
    void getdata();
    void sparx_transpos();
    void display();
};

void sparx::getdata()
{
    cout << "Enter the row size of the matrix: ";
    cin >> row;
    cout << "Enter the column size of the matrix: ";
    cin >> coloum;
    cout << "Enter the non-zero elements: ";
    cin >> nz;
    a[0][0] = row;
    a[0][1] = coloum;
    a[0][2] = nz;
    cout << "Enter the elements of the matrix: ";
    for (i = 1; i <= nz; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
}

void sparx::sparx_transpos()
{
    // Transpose the matrix
    temp[0][0] = coloum;
    temp[0][1] = row;
    temp[0][2] = nz;
    for (i = 0; i < coloum; i++)
    {
        for (j = 1; j <= nz; j++)
        {
            if (a[j][1] == i)
            {
                temp[i + 1][0] = i;
                temp[i + 1][1] = a[j][0];
                temp[i + 1][2] = a[j][2];
            }
        }
    }

    // Uncomment this part to update the original matrix with the transpose
    for (i = 0; i <= nz; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = temp[i][j];
        }
    }
}

void sparx::display()
{
    for (i = 0; i <= nz; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main()
{
    sparx s1;
    s1.getdata();
    cout << "matrix 1 : " << endl;
    s1.display();
    s1.sparx_transpos(); // Call the function to transpose the matrix
    cout << "matrix 3 : " << endl;
    s1.display(); // Display the transposed matrix
    return 0;
}
