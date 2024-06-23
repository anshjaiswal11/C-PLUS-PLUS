#include<iostream>
using namespace std;
int main(){
    int arr[]={5, 4, 3, 2, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;


    // two ways
    // for(int i=1; i<n; i++){
    //     int j = i;
    //     while(j>=i){
    //         if(arr[j]<arr[j-1]){
    //             int temp=arr[j];
    //             arr[j]=arr[j-1];
    //             arr[j-1]=temp;
    //         }
    //         j--;
    //     }
    // }
}