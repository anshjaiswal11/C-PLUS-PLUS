// make calculator using oops concept c++
#include<iostream>
using namespace std;
class calculator{
    private:
        int num1;
        int num2;
        char oper;
    public:
        void addition(int a, int b){
            int sum = a + b;
            cout<< "addition is: "<<sum<<endl;
        }
        void subtraction(int a, int b){
            int sub = a - b;
            cout<< "subtraction is: "<<sub<<endl;
        }
        void multiplication(int a, int b){
            int mul = a * b;
            cout<< "multiplication is: "<<mul<<endl;
        }

};
int main(){
    calculator calc;
    int num3,num2;
    char oper;
    cout<<"enter the number";
    cin>>num3>>num2;
    cout<<"enter the operator: +, -, *";
    cin>>oper;
    switch(oper){
        case '+':{
            calc.addition(num3,num2);
            break;
        }
        case '-':{
            calc.subtraction(num3,num2);
            break;
        }
        case '*':{
            calc.multiplication(num3,num2);
            break;
    }
return 0;
}
};