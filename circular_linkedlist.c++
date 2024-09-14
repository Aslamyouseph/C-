#include <iostream>
using namespace std;

struct node
{
    int info;
    struct node *next;
} *start;
class circular_linked
{
public:
    node *create_node(int);
    void insert_beg();
    void insert_last();
    void insert_pos();
    void deletee();
    void search();
    void display();

    circular_linked()
    {
        start = NULL;
    }
};

node *circular_linked::create_node(int value)
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
void circular_linked::insert_beg()
{
    int value;
    cout << "Enter the value to be inserted : ";
    cin >> value;
    struct node *temp, *ptr;
    temp = create_node(value);

    if (start == NULL)
    {
        start = temp;
        start->next = start; // Circular link creating
    }
    else
    {
        ptr = start;
        while (ptr->next != start) // Traverse to find the last node
        {
            ptr = ptr->next;
        }
        ptr->next = temp;   // Link the last node to the new node
        temp->next = start; // Link the new node to the start
        start = temp;       // now the temp is set as the start so code is started from the last
    }
    cout << "The element is inserted  : " << endl;
}

void circular_linked::insert_last()
{
    int value;
    cout << "Enter the value to be inserted : ";
    cin >> value;
    struct node *temp, *ptr;
    temp = create_node(value);

    if (start == NULL) // only one node is present time
    {
        start = temp;
        start->next = start; // Circular link
    }
    else
    {
        ptr = start;
        while (ptr->next != start) // used to find the last node
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = start;
    }
    cout << "The element is inserted at the last position : " << endl;
}

void circular_linked::insert_pos()
{
    int value, pos, counter = 0, i;
    cout << "Enter the value to be inserted : ";
    cin >> value;
    struct node *temp, *s, *ptr;
    temp = create_node(value);
    cout << "Enter the position at which node to be inserted : ";
    cin >> pos;

    s = start;
    while (s->next != start) // used to find howmany node are present
    {
        s = s->next;
        counter++; // in each time counder will increment
    }

    if (pos == 1) // user  want to insert the element into the first possition
    {
        if (start == NULL)
        {
            start = temp;
            start->next = start;
        }
        else
        {
            ptr = start;
            start = temp;
            start->next = ptr;
            s->next = start;
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
        temp->next = s;
    }
    else
    {
        cout << "The element is out of range : " << endl;
    }
}

void circular_linked::deletee()
{
    int pos, counter = 0, i;
    cout << "Enter the position of the element to be deleted : ";
    cin >> pos;
    struct node *s, *ptr;
    if (start == NULL)
    {
        cout << "The list is empty : " << endl;
        return;
    }
    s = start; // now start is free (does not contain any parameters )
    if (pos == 1)
    {
        start = s->next; // pointing to the next node
        delete s;
        ptr = start;
        while (ptr->next != start) // traverse to the last node
        {
            ptr = ptr->next;
        }
        ptr->next = start; // update the next pointer of the last node
    }
    else
    {
        while (s->next != start) // used to find how many nodes are present
        {
            s = s->next;
            counter++; // increment before moving to the next node
        }
        counter++; // count the last node

        if (pos > 0 && pos <= counter)
        {
            s = start;
            for (i = 1; i < pos; i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
            delete s;
        }
        else
        {
            cout << "Position is out of range : " << endl;
            return;
        }
    }
    cout << "Element is deleted : " << endl;
}
void circular_linked::search()
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
    while (s != start || pos == 0) // Execute at least once to traverse the circular linked list
    {
        pos++;
        if (s->info == value)
        {
            flag = true;
            cout << "Element " << value << " is found at position " << pos << endl;
            return;
        }
        s = s->next;
    }
    if (flag == false)
    {
        cout << "Element " << value << " is not found : " << endl;
    }
}

void circular_linked::display()
{
    struct node *s;
    if (start == NULL)
    {
        cout << "The list is empty : " << endl;
        return;
    }
    s = start;
    cout << "Elements in the list are: ";
    do
    {
        cout << s->info << " ->  "; // printing the information part
        s = s->next;
    } while (s != start); // it indicate the last node
    cout << "head" << endl;
}

int main()
{
    int choice;
    circular_linked sl; // object creating for class
    while (1)
    {
        cout << "Operations on the single linked_list : " << endl;
        cout << "1 = inserting node at the beginning : " << endl;
        cout << "2 = inserting node at the last: " << endl;
        cout << "3 = inserting node at a specific position : " << endl;
        cout << "4 = deleting node at a specific position : " << endl;
        cout << "5 = searching a particular element   " << endl;
        cout << "6 = displaying the linked list : " << endl;
        cout << "7 = exit : " << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Inserting node at the beginning : " << endl;
            sl.insert_beg();
            cout << endl;
            break;
        case 2:
            cout << "Inserting node at the last : " << endl;
            sl.insert_last();
            cout << endl;
            break;
        case 3:
            cout << "Inserting node at a specific position  : " << endl;
            sl.insert_pos();
            cout << endl;
            break;
        case 4:
            cout << "Deleting node at a specific position : " << endl;
            sl.deletee();
            cout << endl;
            break;
        case 5:
            cout << "Searching a particular element :  " << endl;
            sl.search();
            cout << endl;
            break;
        case 6:
            cout << "Displaying the linked list : " << endl;
            sl.display();
            cout << endl;
            break;
        case 7:
            cout << "Exiting : " << endl;
            exit(0); // used to over the iteration of while loop
            break;
        default:
            cout << "Invalid entry : ";
        }
    }
    return (0);
}
