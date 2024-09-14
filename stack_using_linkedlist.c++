#include <iostream>
using namespace std;

struct node
{
    int info;
    struct node *next;
} *top;

class stack_linked
{
public:
    node *create_node(int);
    void pushing();
    void poping();
    void display();
    stack_linked()
    {
        top = NULL;
    }
};

node *stack_linked::create_node(int value)
{
    struct node *temp;
    temp = new (struct node);

    if (temp == NULL)
    {
        cout << "Memory not allocated : " << endl;
        return 0;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
        return temp;
    }
}

void stack_linked::pushing()
{
    int value;
    cout << "Enter the value to be inserted : ";
    cin >> value;
    struct node *temp;
    temp = create_node(value);

    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top; // in here the 36 line temp is changed to top (to insert the new value infrond of the old value )
        top = temp;       // top is decrementing (or top moved  in to the backward direction  )
    }
    cout << "The element is pushed to the top of the stack : " << endl;
}

void stack_linked::poping()
{
    if (top == NULL)
    {
        cout << "stack is underflow" << endl;
        return;
    }
    else
    {
        struct node *temp = top;
        top = top->next;
        delete temp;
        cout << "The element is popped " << endl;
    }
}

void stack_linked::display()
{
    if (top == NULL)
    {
        cout << "The stack is empty  " << endl;
        return;
    }

    cout << "The elements are : ";
    struct node *temp = top;
    while (temp != NULL)
    {
        cout << temp->info << "-> ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int choice;
    stack_linked sl;

    while (1)
    {
        cout << "Operations on the stack linked_list : " << endl;
        cout << "1 = pushing element to the top of the stack  : " << endl;
        cout << "2 = popping element from the stack : " << endl;
        cout << "3 = Displaying the stack : " << endl;
        cout << "7 = exit : " << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "pushing element to the top of the stack " << endl;
            sl.pushing();
            break;
        case 2:
            cout << "popping element from the stack" << endl;
            sl.poping();
            break;
        case 3:
            cout << "Displaying the stack" << endl;
            sl.display();
            break;
        case 7:
            cout << "Exiting : " << endl;
            exit(0);
        default:
            cout << "Invalid entry : ";
        }
    }
    return 0;
}
