#include <iostream>
#include <algorithm>
using namespace std;
void reverseArray(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftRotatebyD(int arr[],int n,int d){
    reverseArray(arr,0,d-1);   //O(d)
    reverseArray(arr,d,n-1);    //O(n-d)
    reverseArray(arr,0,n-1);    //O(n)  
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    leftRotatebyD(arr,n,2);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//time complexity O(d+n-d+n)
///O(2n) which is nothing but O(n) where O here represents theta