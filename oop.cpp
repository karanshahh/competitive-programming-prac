#include <iostream>
using namespace std;

class student
{
    // private data members can be accessed by creating a getter or setter.

public:
    string name;
    int age;
    bool gender;

    student()
    {
    }

    student(string n, int a, bool g)
    {
        name = n;
        age = a;
        gender = g;
    }

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main()
{

    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name: ";
        cin >> arr[i].name;
        cout << "Age: ";
        cin >> arr[i].age;
        cout << "Gender: ";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }

    return 0;
}