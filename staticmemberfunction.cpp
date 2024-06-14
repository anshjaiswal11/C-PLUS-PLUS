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
void input()//access data members or give value to data members,member functions takes the values of data members
{
cout<<"enter details";
cin>>regno>>name>>cgpa;

}



void output()//Member function defined inside the class
{ cout<<"output details";
cout<<regno<<name<<cgpa;

}//when any member function defined inside the class, It is known as inline member function
void take();
void out();
static void taken(); //can only access static data members
};
int student::a;//initialization of static data member
void student:: take()
{
cout<<"take the value of a";
a=5;
}
void student:: out()
{cout<<a;}
void student::taken()
{
cout<<endl<<a;
}
main()
{
student obj,obj2;//Memory allocation takes place

//obj.input();//public
//obj.output();//public
obj.take();
obj2.out();
student::taken();//access of stratic member function can be done using classname
getch();
}