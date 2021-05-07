#include <iostream>
using namespace std;
void reverse(int arr[], int n){
    int start=0,end=n-1;
    while(start<end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr [end] = temp;
        start++;
        end--;

    }
}
int main(){
    int n=6;
    int arr[]={1,2,3,4,5,6};


    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
//time complexity is O(n)