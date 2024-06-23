#include<iostream>
using namespace std;
int main(){
    int arr[]={5, 4, 3, 2, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// better then bubble sort
// Time complexity: O(n^2)