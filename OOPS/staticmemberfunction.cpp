#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    int regno;
    char name[20];
    float cgpa;
    static int a;

public:
    void input()
    {
        cout << "Enter details: ";
        cin >> regno >> name >> cgpa;
    }

    void output()
    {
        cout << "Output details: ";
        cout << regno << name << cgpa;
    }

    void take();
    void out();
    static void taken();
};

int student::a;

void student::take()
{
    cout << "Take the value of a: ";
    a = 5;
}

void student::out()
{
    cout << a;
}

void student::taken()
{
    cout << endl << a;
}

int main()
{
    student obj, obj2;
    obj.take();
    obj2.out();
    student::taken();
    // getch();
}