#include <iostream>
using namespace std;

struct node
{
    int info;
    struct node *next;
    struct node *prve;
} *start;

class circular_doubly_linked
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
    circular_doubly_linked()
    {
        start = NULL;
    }
};

node *circular_doubly_linked::create_node(int value)
{
    struct node *temp;
    temp = new (struct node);
    if (temp == NULL)
    {
        cout << "Memory not allocated." << endl;
        return NULL;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
        temp->prve = NULL;
        return temp;
    }
}

void circular_doubly_linked::insert_beg()
{
    int value;
    cout << "Enter the value to be inserted: ";
    cin >> value;
    struct node *temp;
    temp = create_node(value);
    if (start == NULL)
    {
        start = temp;
        start->next = start;
        start->prve = start;
    }
    else
    {
        temp->next = start;
        start->prve = temp;
        temp->prve = start->prve;
        start->prve->next = temp;
        start = temp;
    }
    cout << "Element inserted." << endl;
}

void circular_doubly_linked::insert_last()
{
    int value;
    cout << "Enter the value to be inserted: ";
    cin >> value;
    struct node *temp, *ptr;
    temp = create_node(value);
    if (start == NULL)
    {
        start = temp;
        start->next = start;
        start->prve = start;
    }
    else
    {
        temp->next = start;
        temp->prve = start->prve;
        start->prve->next = temp;
        start->prve = temp;
    }
    cout << "Element inserted at the last position." << endl;
}

void circular_doubly_linked::insert_pos()
{
    int value, pos, counter = 0, i;
    cout << "Enter the value to be inserted: ";
    cin >> value;
    struct node *temp, *s;
    temp = create_node(value);
    cout << "Enter the position at which node to be inserted: ";
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
            start->next = start;
            start->prve = start;
        }
        else
        {
            temp->next = start;
            temp->prve = start->prve;
            start->prve->next = temp;
            start->prve = temp;
            start = temp; // Update start to the newly inserted node

            // Update the next pointer of the last node to point to the new start
            temp->prve->next = start;
        }
    }
    else if (pos > 1 && pos <= counter)
    {
        s = start;
        for (i = 1; i < pos; i++)
        {
            s = s->next;
        }
        temp->next = s;
        temp->prve = s->prve;
        s->prve->next = temp;
        s->prve = temp;
    }
    else
    {
        cout << "The position is out of range." << endl;
        delete temp;
        return;
    }
    cout << "Element inserted at position " << pos << "." << endl;
}

void circular_doubly_linked::deletee()
{
    if (start == NULL)
    {
        cout << "The list is empty." << endl;
        return;
    }

    int pos;
    cout << "Enter the position of the element to be deleted: ";
    cin >> pos;

    node *s = start;
    for (int i = 1; i < pos; i++)
    {
        s = s->next;
        if (s == start)
        {
            cout << "Position is out of range." << endl;
            return;
        }
    }

    if (s->next == s)
    {
        delete s;
        start = NULL;
    }
    else
    {
        s->prve->next = s->next;
        s->next->prve = s->prve;
        if (s == start)
        {
            start = s->next;
        }
        delete s;
    }

    cout << "Element deleted from position " << pos << "." << endl;
}

void circular_doubly_linked::search()
{
    if (start == NULL)
    {
        cout << "The list is empty." << endl;
        return;
    }

    int value, pos = 0;
    bool found = false;
    cout << "Enter the value to be searched: ";
    cin >> value;

    node *s = start;
    do
    {
        pos++;
        if (s->info == value)
        {
            found = true;
            cout << "Element " << value << " is found at position " << pos << "." << endl;
            break;
        }
        s = s->next;
    } while (s != start);

    if (!found)
    {
        cout << "Element " << value << " is not found." << endl;
    }
}

void circular_doubly_linked::display_frond()
{
    if (start == NULL)
    {
        cout << "The list is empty." << endl;
        return;
    }

    node *s = start;
    cout << "Elements in the list are: ";
    do
    {
        cout << s->info << " -> ";
        s = s->next;
    } while (s != start);
    cout << "NULL" << endl;
}

void circular_doubly_linked::display_back()
{
    if (start == NULL)
    {
        cout << "The list is empty." << endl;
        return;
    }

    node *s = start->prve;
    cout << "Elements in the list are: ";
    do
    {
        cout << s->info << " -> ";
        s = s->prve;
    } while (s != start->prve);
    cout << "NULL" << endl;
}

int main()
{
    int choice;

    circular_doubly_linked s1;

    while (true)
    {
        cout << "Operations on the doubly linked list:" << endl;
        cout << "1 = Inserting node at the beginning." << endl;
        cout << "2 = Inserting node at the last." << endl;
        cout << "3 = Inserting node at a specific position." << endl;
        cout << "4 = Deleting node at a specific position." << endl;
        cout << "5 = Searching a particular element." << endl;
        cout << "6 = Displaying the linked list in forward direction." << endl;
        cout << "7 = Displaying the linked list in backward direction." << endl;
        cout << "8 = Exit." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Inserting node at the beginning." << endl;
            s1.insert_beg();
            break;
        case 2:
            cout << "Inserting node at the last." << endl;
            s1.insert_last();
            break;
        case 3:
            cout << "Inserting node at a specific position." << endl;
            s1.insert_pos();
            break;
        case 4:
            cout << "Deleting node at a specific position." << endl;
            s1.deletee();
            break;
        case 5:
            cout << "Searching a particular element." << endl;
            s1.search();
            break;
        case 6:
            cout << "Displaying the linked list in forward direction." << endl;
            s1.display_frond();
            break;
        case 7:
            cout << "Displaying the linked list in backward direction." << endl;
            s1.display_back();
            break;
        case 8:
            cout << "Exiting." << endl;
            exit(0);
        default:
            cout << "Invalid entry." << endl;
        }
    }
    return 0;
}
