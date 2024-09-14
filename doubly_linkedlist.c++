#include <iostream>
using namespace std;

struct node
{
    int info;
    struct node *next;
    struct node *prve;
} *start;

class doubly_linked
{
public:
    node *create_node(int);
    void insert_beg();
    void insert_last();
    void insert_pos();
    void deletee();
    void search();
    void display_frond();
    void display_back();

    doubly_linked()
    {
        start = NULL;
    }
};

node *doubly_linked::create_node(int value)
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
        temp->prve = NULL;
        return temp;
    }
}

void doubly_linked::insert_beg()
{
    int value;
    cout << "Enter the value to be inserted : ";
    cin >> value;
    struct node *temp, *ptr;
    temp = create_node(value);

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        start = temp;
        start->next = ptr;
        ptr->prve = start;
    }
    cout << "The element is inserted  : " << endl;
}

void doubly_linked::insert_last()
{
    int value;
    cout << "Enter the value to be inserted : ";
    cin >> value;
    struct node *temp, *ptr;
    temp = create_node(value);
    ptr = start;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    temp->prve = ptr;
    ptr->next = temp;
    cout << "The element is inserted at the last position : " << endl;
}

void doubly_linked::insert_pos()
{
    int value, pos, counter = 0, i;
    cout << "Enter the value to be inserted : ";
    cin >> value;
    struct node *temp, *s, *ptr;
    temp = create_node(value);
    cout << "Enter the position at which node to be inserted : ";
    cin >> pos;
    s = start;

    while (s != NULL)
    {
        s = s->next;
        counter++;
    }

    if (pos == 1)
    {
        if (start == NULL)
        {
            start = temp;
        }
        else
        {
            ptr = start;
            start = temp;
            start->next = ptr;
            ptr->prve = start;
        }
    }
    else if (pos > 1 && pos <= counter)
    {
        s = start;
        for (i = 1; i < pos; i++)
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;
        temp->prve = ptr;
        temp->next = s;
        s->prve = temp;
    }
    else
    {
        cout << "The element is out of range : " << endl;
    }
}

void doubly_linked::deletee()
{
    int pos, counter = 0, i;
    if (start == NULL)
    {
        cout << "The list is empty : " << endl;
        return;
    }
    cout << "Enter the possition of the element to be deleted : ";
    cin >> pos;
    struct node *s, *ptr;
    s = start;
    if (pos == 1)
    {
        start = s->next;
        if (start != NULL)
        {
            start->prve = NULL;
        }
        delete s;
    }
    else
    {
        while (s != NULL)
        {
            s = s->next;
            counter++;
        }
        if (pos > 0 && pos <= counter)
        {
            s = start;
            for (i = 1; i < pos; i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
            s->next->prve = ptr;

            delete s;
        }
        else
        {
            cout << "Position is out of range : " << endl;
        }
        cout << "Element is deleted : " << endl;
    }
}

void doubly_linked::search()
{
    int value, pos = 0;
    bool flag = false;
    if (start == NULL)
    {
        cout << "The list is empty : ";
        return;
    }
    cout << "Enter the value to be searched : ";
    cin >> value;
    struct node *s;
    s = start;
    while (s != NULL)
    {
        pos++;
        if (s->info == value)
        {
            flag = true;
            cout << "Element " << value << " is found at position " << pos << endl;
        }
        s = s->next;
    }
    if (!flag)
    {
        cout << "Element " << value << " is not found : " << endl;
    }
}

void doubly_linked::display_frond()
{
    struct node *s;
    if (start == NULL)
    {
        cout << "The list is empty : " << endl;
        return;
    }
    s = start;
    cout << "Elements in the list are: ";
    while (s != NULL) // it means the last node
    {
        cout << s->info << " ->  ";
        s = s->next;
    }
    cout << "NULL" << endl;
}

void doubly_linked::display_back()
{
    struct node *s;
    if (start == NULL)
    {
        cout << "The list is empty : " << endl;
        return;
    }
    cout << "Elements in the list are: ";
    s = start;
    while (s->next != NULL) // used to find the last node
    {
        s = s->next;
    }
    while (s != NULL) // it means the last node
    {
        cout << s->info << " ->  ";
        s = s->prve;
    }
    cout << "NULL" << endl;
}

int main()
{
    int choice;
    doubly_linked dl;
    while (1)
    {
        cout << "Operations on the doubly linked_list : " << endl;
        cout << "1 = inserting node at the beginning : " << endl;
        cout << "2 = inserting node at the last: " << endl;
        cout << "3 = inserting node at a specific position : " << endl;
        cout << "4 = deleting node at a specific position : " << endl;
        cout << "5 = searching a particular element   " << endl;
        cout << "6 = displaying the linked list forward direction : " << endl;
        cout << "7 = displaying the linked list in backward direction : " << endl;
        cout << "8 = exit : " << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Inserting node at the beginning : " << endl;
            dl.insert_beg();
            cout << endl;
            break;
        case 2:
            cout << "Inserting node at the last : " << endl;
            dl.insert_last();
            cout << endl;
            break;
        case 3:
            cout << "Inserting node at a specific position  : " << endl;
            dl.insert_pos();
            cout << endl;
            break;
        case 4:
            cout << "Deleting node at a specific position : " << endl;
            dl.deletee();
            cout << endl;
            break;
        case 5:
            cout << "Searching a particular element :  " << endl;
            dl.search();
            cout << endl;
            break;
        case 6:
            cout << "Displaying the linked list in forward direction : " << endl;
            dl.display_frond();
            cout << endl;
            break;
        case 7:
            cout << "Displaying the linked list in backward direction : " << endl;
            dl.display_back();
            cout << endl;
            break;
        case 8:
            cout << "Exiting : " << endl;
            exit(0);
            break;
        default:
            cout << "Invalid entry : ";
        }
    }
    return (0);
}
