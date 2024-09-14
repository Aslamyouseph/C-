// definnig inside the class itself
#include <iostream>
using namespace std;
int a[30], top, item, temp, i, limit;
class stackk
{
public:
    void push()
    {
        if (top >= limit)
        {
            cout << "The stack is overflow " << endl;
        }
        else
        {
            cout << "Enter the element : ";
            cin >> item;
            top++;
            a[top] = item;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "The stack is underflow : " << endl; // in pop section we didnot able to watch the delectig elemeents
        }                                                // only seen when we call the travesl time
        else
        {
            temp = a[top];
            top--;
        }
    }
    void traversal()
    {
        if (top == -1)
        {
            cout << "There is not elemeent : ";
        }
        else
        {
            cout << "The elemets are " << endl;
            for (i = top; i > 0; i--)
            {
                cout << a[i] << endl;
            }
        }
    }
};
int main()
{
    stackk s;
    int choice, again, choice2; // (again) always give as a local varible
    top = a[30];
    cout << "Enter the limit : ";
    cin >> limit;
    while (again)
    {
        cout << "1 = push"
             << "\n"
                "2 = pop "
             << "\n"
                "3 = traversal "
             << "\n";
        cout << "Enter your choice : " << endl;
        cin >> choice;
        if (choice == 1)
        {
            s.push();
        }
        else if (choice == 2)
        {
            s.pop();
        }
        else if (choice == 3)
        {
            s.traversal();
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

    return (0);
}
// defining outside the class
//
//
//
// #include <iostream>
//  using namespace std;
//  int top, limit, a[30], item, temp, i, choice1, choice2;
//  class stackk
//  {
//  public:
//      void push();
//      void pop();
//      void traversal();
//  };
//  void stackk::push()
//  {
//      if (top >= limit)
//      {
//          cout << "Stack is overflow " << endl;
//      }
//      else
//      {
//          cout << "Enter the elemenet : ";
//          cin >> item;
//          top++;
//          a[top] = item;
//          }
//  }
//  void stackk::pop()
//  {
//      if (top == -1)
//      {
//          cout << "The stack is underflow   " << endl;
//      }
//      else
//      {
//          temp = a[top];
//          top--;
//      }
//  }
//  void stackk::traversal()
//  {
//      cout << "The elements are : " << endl;
//      for (i = top; i > 0; i--)
//      {
//          cout << a[i] << endl;
//      }
//  }
//  int main()
//  {
//      stackk s;
//      top = a[30];
//      int again;
//      cout << "Enter the limit : ";
//      cin >> limit;
//      while (again)
//      {
//          cout << "1 = push "
//               << "\n"
//               << "2 = pop "
//               << "\n"
//               << "3 = traversal ";
//          cout << "Enter your choice : ";
//          cin >> choice1;

//         if (choice1 == 1)
//         {
//             s.push();
//         }
//         else if (choice1 == 2)
//         {
//             s.pop();
//         }
//         else if (choice1 == 3)
//         {
//             s.traversal();
//         }
//         else
//         {
//             cout << "Invalid entry .....";
//         }
//         cout << "If you want  to continues  yes / no " << endl;
//         cout << "1 = yes - 2 = no ";
//         cin >> choice2;
//         if (choice2 == 1)
//         {
//             again = true;
//         }
//         else
//         {
//             again = false;
//             cout << "Thank you ....";
//             break;
//         }
//     }
// }