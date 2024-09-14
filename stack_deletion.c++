#include <iostream>
using namespace std;
class stack
{
public:
    int a[10], top, i, temp;
    stack()
    {
        top = -1;
    }
    void getdata1(int);
    void display1();
    void getdata2(int);
    void display2();
};
void stack::getdata1(int value)
{
    if (top == 10)
    {
        cout << "The stack is full : " << endl;
    }
    else
    {
        a[++top] = value;
        cout << "The " << value << " is pushed to top " << endl;
    }
}
void stack ::display1()
{
    cout << "The stack is : " << endl;
    for (i = 0; i <= top; i++)
    {
        cout << a[i] << endl;
    }
}
void stack::getdata2(int b)
{
    if (top < 0)
    {
        cout << "The stack is in under flow : " << endl;
    }
    else
    {
        temp = a[top--];
        cout << "The " << b << " is deletd from the stack :  " << endl;
    }
}
void stack::display2()
{
    cout << "The stack is : " << endl;
    for (i = 0; i < = top; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    stack s;
    int limit, i, element, element1;
    cout << "Enter the limit of stack (between 1 - 10): ";
    cin >> limit;
    if (limit > 11)
    {
        cout << "Your limit is huge  : ";
        return 1;
    }
    else
    {
        for (i = 0; i < limit; i++)
        {
            cout << "Enter the  " << i + 1 << " element  : ";
            cin >> element;
            s.getdata1(element);
        }
        s.display1();
    }
    cout << endl;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter the  last  element from the stack  : ";
        cin >> element1;
        s.getdata2(element1);
        s.display1();
    }
    return (0);
}