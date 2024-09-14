#include <iostream>
using namespace std;

class Stack
{
public:
    int a[10];
    int top; // To keep track of the top element in the stack
    Stack()
    {
        top = -1; // Constructor to initialize the top to -1
    }
    void getdata(int);
    void display();
};

void Stack::getdata(int value)
{
    if (top == 9)
    {
        cout << "The stack is full." << endl;
    }
    else
    {
        a[++top] = value;
        cout << "Element " << value << " pushed onto the stack." << endl;
    }
}

void Stack::display()
{
    cout << "The stack is: " << endl;
    for (int i = 0; i <= top; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    Stack s;
    int limit, element;

    cout << "Enter the limit (between 1 - 10 ): ";
    cin >> limit;

    if (limit > 10)
    {
        cout << "Stack size exceeded." << endl;
        return 1; // it need any returning values becose of the int main(int is present in here )
    }

    for (int i = 0; i < limit; i++)
    {
        cout << "Enter the  " << i + 1 << " element : ";
        cin >> element;
        s.getdata(element);
    }
    s.display();
    return 0;
}
