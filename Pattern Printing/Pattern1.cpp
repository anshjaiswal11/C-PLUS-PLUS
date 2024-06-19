// star triangle 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" "<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// Output:
// Enter the number of rows: 4
// *
// * *
// * * *
// * * * *

// star triangle reverse

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" "<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// Output:
// Enter the number of rows: 4
// * * * *
// * * *
// * *
// *
