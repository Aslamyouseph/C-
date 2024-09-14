#include <iostream>
using namespace std;
class que
{
public:
    int max = 6, rear, frond, item, a[5], temp, i;
    que()
    {
        rear = -1;
        frond = -1;
    }
    void endque();
    void deque();
    void traversal();
};
void que::endque()
{
    if (rear >= max)
    {
        cout << "The queu is overflow  ..  ";
    }
    else
    {
        if (frond == -1)
        {
            frond = frond + 1;
        }
        cout << "Enter the elements into the queue : ";
        cin >> item;
        rear = rear + 1;
        a[rear] = item;
        cout << item << " is inserted  " << endl;
    }
}
void que::deque()
{
    if (frond == -1)
    {
        cout << "Queue is underflow ...." << endl;
    }
    else
    {
        temp = a[frond];
        frond = frond + 1;
        cout << temp << "is deleted " << endl;
    }
    if (frond > rear) // it means there is no any elements so again set frond and rear == -1
    {
        frond = -1;
        rear = -1;
    }
}
void que::traversal()
{
    if (frond == -1)
    {
        cout << "The queue is empty  " << endl;
    }
    else
    {
        cout << "The queue is " << endl;
        for (i = frond; i <= rear; i++)
        {
            cout << a[i] << endl;
        }
    }
}
int main()
{
    que q;
    int choice1, choice2, again;
    while (again)
    {
        cout << "1 = enqueue "
             << "\n"
             << "2 = dequeue "
             << "\n"
             << "3 = traversal " << endl;
        cout << "Enter your choice : ";
        cin >> choice1;
        if (choice1 == 1)
        {
            q.endque();
        }
        else if (choice1 == 2)
        {
            q.deque();
        }
        else if (choice1 == 3)
        {
            q.traversal();
        }
        else
        {
            cout << "Invalid entry  " << endl;
        }
        cout << "Do you want to continoue  : 1 = yes ,2 =no ";
        cin >> choice2;
        if (choice2 == 1)
        {
            again = true;
        }
        else
        {
            again = false;
            break;
            cout << "Thank you " << endl;
        }
    }
}