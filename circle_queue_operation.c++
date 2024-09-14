#include <iostream>
using namespace std;

class circle
{
public:
    int a[10], rear, front, item, max = 10, i, temp;
    circle()
    {
        rear = -1;
        front = -1;
    }
    void enque();
    void deque();
    void traversal();
};

void circle::enque()
{
    if (front == (rear + 1) % max)
    {
        cout << "Queue is overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = frond + 1;
        }
        cout << "Enter the element to insert: ";
        cin >> item;
        rear = (rear + 1) % max;
        a[rear] = item;
        cout << item << " is inserted" << endl;
    }
}

void circle::deque()
{
    if (front == -1)
    {
        cout << "Queue is underflow" << endl;
    }
    else
    {
        temp = a[front];
        cout << temp << " is deleted" << endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % max;
        }
    }
}

void circle::traversal()
{
    if (front == -1)
    {
        cout << "The queue is empty" << endl;
    }
    else
    {
        if (front <= rear)
        {
            for (i = front; i <= rear; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            for (i = front; i < max; i++)
            {
                cout << a[i] << " ";
            }
            for (i = 0; i <= rear; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    circle c;
    int choice1, choice2;
    bool again = true;

    while (again)
    {
        cout << "1 = enqueue\n"
             << "2 = dequeue\n"
             << "3 = traversal" << endl;
        cout << "Enter your choice: ";
        cin >> choice1;
        switch (choice1)
        {
        case 1:
            c.enque();
            break;
        case 2:
            c.deque();
            break;
        case 3:
            c.traversal();
            break;
        default:
            cout << "Invalid entry" << endl;
        }

        cout << "Do you want to continue? 1 = yes, 0 = no "; // Change 2 to 0
        cin >> choice2;
        if (choice2 == 1)
        {
            again = true;
        }
        else
        {
            again = false;
            cout << "Thank you" << endl;
            break;
        }
    }
    return 0;
}
