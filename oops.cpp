// non inline member functions
#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int section;
    int teacher;
    static void member();
    public:
    void input();
    void value();
};
inline void student::input(){
    cout<<"Enter the section: ";
    cin>>section;
    cout<<"Enter the teacher: ";
    cin>>teacher;
}
inline void student::value(){
    cout<<"Section: "<<section<<endl;
    cout<<"Teacher: "<<teacher<<endl;
}
 void student::member(){
    cout<<"This is a static member function"<<endl;
}
int main(){
    student obj;
    obj.input();
    obj.value();
    student::member();
}

