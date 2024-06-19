// Alphabet square
//  A B C D
//  A B C D
//  A B C D
//  A B C D
// input = 4
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<" "<<char(65+j);
        }
        cout<< endl;
    }
}

// INPUT = 4
// A
// A B
// A B C 
// A B C D 
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" "<<char(65+j);
        }
        cout<< endl;
    }
}