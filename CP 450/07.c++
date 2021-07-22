#include <iostream>
using namespace std;
int main(){
    int x=3;
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=n-x;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-x;i++){
        cout<<arr[i]<<" ";
    }
}