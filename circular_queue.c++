#include <iostream>
using namespace std;

class circle_queue
{
public:
    int front, rear, max;
    int a[10];

    circle_queue(int max)
    {
        front = -1;
        rear = -1;
        max = max;
    }

    void enter_queue()
    {
        int element, i;
        if ((front == 0 && rear == max - 1) || (rear == (front - 1) % (max - 1)))
        {
            cout << "The circular queue is full." << endl;
        }
        else
        {
            if (front == -1)
            {
                front = rear = 0;
            }
            else
            {
                rear = (rear + 1) % max;
            }
            cout << "Enter element the of the circular queue: ";
            cin >> element;
            a[rear] = element;
            cout << element << " is inserted into the circular queue." << endl;
        }
    }

    void deleted_queue()
    {
        if (front == -1)
        {
            cout << "The circular queue is empty." << endl;
        }
        else
        {
            int removedElement = a[front];
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = (front + 1) % max;
            }
            cout << removedElement << " is removed from the circular queue." << endl;
        }
    }

    void display()
    {
        if (front == -1)
        {
            cout << "The circular queue is empty." << endl;
        }
        else
        {
            cout << "The circular queue is:" << endl;
            int i = front;
            while (true)
            {
                cout << a[i] << endl;
                if (i == rear)
                    break;
                i = (i + 1) % max;
            }
        }
    }
};

int main()
{
    int max, choice, choice2, again;
    cout << "Enter the limit of the circular queue (between 1 - 10): ";
    cin >> max;
    circle_queue q(max);
    while (again)
    {
        cout << "1 = enter_queue"
             << "\n"
                "2 = deleted_queue "
             << "\n"
                "3 = display "
             << "\n";
        cout << "Enter your choice : " << endl;
        cin >> choice;
        if (choice == 1)
        {
            q.enter_queue();
        }
        else if (choice == 2)
        {
            q.deleted_queue();
        }
        else if (choice == 3)
        {
            q.display();
        }
        else
        {
            cout << "Invalid entry ... ";
        }
        cout << "If you want to continue   1 =yes ,2 =no ";
        cin >> choice2;
        if (choice2 == 1)
        {
            again = true;
        }
        else
        {
            again = false;
            cout << "Thank you";
            break;
        }
    }
    return 0;
}
