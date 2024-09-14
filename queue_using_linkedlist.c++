#include <iostream>
using namespace std;
struct node
{

    int info;
    struct node *next;
} *frond, *rear;

class queue_linked
{
public:
    node *create_node(int);
    void endque();
    void deque();
    void display();
};
node *queue_linked::create_node(int value)
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
void queue_linked::endque()
{
    int value;
    cout << "Enter the value to be inserted to queue : ";
    cin >> value;
    struct node *temp;
    temp = create_node(value);
    if (frond == NULL)
    {
        frond = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        temp->next = NULL;
        rear = temp;
    }
    cout << "The element is inserted to queue : " << endl;
}
void queue_linked::deque()
{
    if (frond == NULL)
    {
        cout << "Queue is underflow : " << endl;
    }
    else
    {
        struct node *ptr;
        ptr = frond;
        frond = frond->next;
        free(ptr);
    }
}
void queue_linked::display()
{
    if (frond == NULL)
    {
        cout << "The queue is empty : " << endl;
    }
    struct node *s;
    s = frond;
    cout << "The elemenets are : " << endl;
    while (s != NULL)
    {
        cout << s->info << " -> ";
        s = s->next;
    }
    cout << "NULL";
}
int main()
{
    int choice;
    queue_linked sl;
    while (1)
    {
        cout << "Operations on the queue inked_list : " << endl;
        cout << "1 = inserting node to the queue : " << endl;
        cout << "2 = deleting node from queue : " << endl;
        cout << "3 = displaying the queue  : " << endl;
        cout << "4 = exit : " << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Inserting node to the queue : " << endl;
            sl.endque();
            cout << endl;
            break;
        case 2:
            cout << "deleting nod efrom the queue : " << endl;
            sl.deque();
            cout << endl;
            break;
        case 3:
            cout << "displaying node  : " << endl;
            sl.display();
            cout << endl;
            break;
        case 4:
            cout << "Exiting : " << endl;
            exit(0);
            break;
        default:
            cout << "Invalid entry : ";
        }
    }
    return (0);
}
