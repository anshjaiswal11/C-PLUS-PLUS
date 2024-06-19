// only if input is odd
// input = 9
// *       *       *
//   *     *     *
//     *   *   *
//       * * *
// * * * * * * * * * 
//       * * *
//     *   *   *
//   *     *     *
// *       *       *
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 || j==n/2 || i==j || i+j==n-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// n=odd 
//      *  
//      *
// *  * * *  *
//      * 
//      * 
 
int main(){
    int n;
    cin>>n;
    int mid = n/2 + 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==mid || j==mid){
                cout<<"*";
            }else{
                cout<<" ";
            }
    }
    cout<<endl;
}
}

// input is  = 5
// *    *
//  *  *
//   *
//  *  *
// *    *
 int main(){
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i==j || i+j==n+1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
 }