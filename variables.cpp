#include<iostream>
using namespace std;
int main(){
    int x,i,y;
    cin>>x;
    cin>>y;
    int arr[x];
    for(i=0;i<x;i++){
        cin>>arr[i];
    }
    for( i=0;i<x;i++){
        cout<<arr[i]<<endl;
    } 
    for( i=0;i<x;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<endl;
        }
    }
    int max=arr[0];
    for( i=0;i<x;i++){
        if(max<arr[i]){
            max=arr[i];
            // cout<<i<<endl;
        }
    }
    cout<<"number of position"<<i<<endl;
    cout<<"max number is "<<max<<endl;
        // cout<<max<<endl;

    int arr[x][y];
    for(i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<arr[i][j]<<"";
        }
    }
    return 0;
}
