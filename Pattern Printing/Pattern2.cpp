#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
}
// Output:
// Enter the number of rows: 4
// Enter the number of columns: 2
// **
// **
// **
// **