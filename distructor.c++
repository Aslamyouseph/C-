#include <iostream>
using namespace std;
class student
{
    int rno;
    char name[20];

public:
    student() // constructor
    {
        cout << "Enter the name of he stuudent : ";
        cin >> name;
        cout << "Enter the roll number : ";
        cin >> rno;
    }
    void display();
    ~student() // distructor
    {
        cout << "Distructor called : " << endl;
    }
};
void student::display()
{
    cout << "Name of the student is " << name << endl;
    cout << "Roll number of the student is " << rno << endl;
}
int main()
{
    student s;
    s.display();
    return 0;
}