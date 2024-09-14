#include <iostream>
using namespace std;

class queu
{
public:
    int front, rear, a[10], limit, i;

    queu(int limit)
    {
        front = -1;
        rear = -1;
        limit = limit;
    }

    void getdata(int);
    void display();
};

void queu::getdata(int element)
{
    if (rear == limit - 1)
    {
        cout << "The queue is full." << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        a[++rear] = element;
        cout << element << " is inserted into the queue." << endl;
    }
}

void queu::display()
{
    if (front == -1)
    {
        cout << "The queue is empty." << endl;
    }
    cout << "The queue is:" << endl;
    for (i = front; i <= rear; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    int limit, element;
    cout << "Enter the limit of the queue (between 1 - 10): ";
    cin >> limit;

    if (limit > 10)
    {
        cout << "Invalid limit. Please enter a limit between 1 and 10." << endl;
        return 1;
    }

    queu q(limit);

    for (int i = 0; i < limit; i++)
    {
        cout << "Enter the " << i + 1 << " element of the queue: ";
        cin >> element;
        q.getdata(element);
    }

    q.display();
    return 0;
}
