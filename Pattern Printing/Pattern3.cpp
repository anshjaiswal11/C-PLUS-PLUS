// solid square
// 4 input
//  * * * *
//  * * * *
//  * * * *
//  * * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
        cout<<" "<<"*";
        }
        cout<<endl;
    }
}

// pattern
// 1111
// 2222
// 3333
// 4444
// if we take input =  4

int main(){
    int n,num=0;
    cin>>n;
    for(int i=0; i<n; i++){
        num++;
        for(int j=0; j<n;j++){
            cout<<num;
        }
        cout<<endl;
    }
}



// pattern
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// if we take input =  4 

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
}

// 4 input
//  1
//  1 2
//  1 2 3
//  1 2 3 4

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
}

// odd number triangle
// 4 input
// 1 
// 1 3 
// 1 3 5
// 1 3 5 7

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<" "<<2*j-1; // odd 
        }
        cout<<endl;
    }
}
// another way
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i*2-1;j+=2){
            cout<<" "<<j;
        }
        cout<<endl;
    }
}
