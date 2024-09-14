#include <iostream>
using namespace std;

struct node // node decleration section from 4-8 line
{
    int info;
    struct node *next;
} *start;
class single_linked
{
public:
    node *create_node(int); // new node is creating
    void insert_beg();
    void insert_last();
    void insert_pos();
    void deletee();
    void search();
    void display();

    single_linked() // constructor
    {
        start = NULL;
    }
};

node *single_linked::create_node(int value)
{
    struct node *temp;        // declearing the varible (temp)
    temp = new (struct node); // allocating memory for temp

    if (temp == NULL) // no memory is allocated then
    {
        cout << "Memory not allocated : " << endl;
        return 0;
    }
    else
    {
        temp->info = value; // creating a new node when the bellow funtion are calling time
        temp->next = NULL;
        return temp; // returning the newly created node back to calling funtion
    }
}

void single_linked::insert_beg()
{
    int value;
    cout << "Enter the value to be inserted : ";
    cin >> value;
    struct node *temp, *ptr;   // delecraing the varible
    temp = create_node(value); // calling the 26 line (for creating the new node )

    if (start == NULL) // if no node is present then the temp is the first node
    {
        start = temp;
        start->next = NULL;
    }
    else
    {
        ptr = start; // alredy a node is present
        start = temp;
        start->next = ptr;
    }
    cout << "The element is inserted  : " << endl;
}

void single_linked::insert_last()
{
    int value;
    cout << "Enter the value to be inserted : ";
    cin >> value;
    struct node *temp, *ptr;
    temp = create_node(value);
    ptr = start;

    while (ptr->next != NULL) // used to find the last node
    {
        ptr = ptr->next;
    }
    temp->next = NULL;
    ptr->next = temp;
    cout << "The element is inserted at the last position : " << endl;
}

void single_linked::insert_pos()
{
    int value, pos, counter = 0, i;
    cout << "Enter the value to be inserted : ";
    cin >> value;
    struct node *temp, *s, *ptr;
    temp = create_node(value);
    cout << "Enter the position at which node to be inserted : ";
    cin >> pos;
    s = start;

    while (s != NULL) // used to find howmany node are present
    {
        s = s->next;
        counter++; // in each time counder will increment
    }

    if (pos == 1) // user  want to insert the element into the first possition
    {
        if (start == NULL)
        {
            start = temp;
            start->next = NULL;
        }
        else
        {
            ptr = start;
            start = temp;
            start->next = ptr;
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

void single_linked::deletee()
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
    s = start; // now start is free (doesnot contain any parameters )
    if (pos == 1)
    {
        start = s->next; // pointing to the next nodesss
        delete s;
    }
    else
    {
        while (s != NULL) // used to find howmany node are present
        {
            s = s->next;
            counter++; // in each time counder will increment
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
            delete s;
        }
        else
        {
            cout << "Position is out of range : " << endl;
        }
        cout << "Element is deleted : " << endl;
    }
}

void single_linked::search()
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
    while (s != NULL) // if "s" become null then it indicate that is the end of the list
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

void single_linked::display()
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
        cout << s->info << " ->  "; // printing the information part
        s = s->next;                // pointing to the next node
    }
    cout << "NULL" << endl;
}

int main()
{
    int choice;
    single_linked sl; // object creating for class
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
