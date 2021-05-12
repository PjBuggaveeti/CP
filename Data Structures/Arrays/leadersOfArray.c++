//an element in the array is said to be the leader if all the other elements to the right of it are less than the element
#include <iostream>
#include <algorithm>
using namespace std;
void LeaderofArray(int arr[],int n){
    int cur_leader=arr[n-1];
    cout<<cur_leader<<" ";
    for(int i=n-1;i>=0;i--){
        if(cur_leader<arr[i]){
            cur_leader=arr[i];
            cout<<cur_leader<<" ";
        }
    }
}

int main(){
    int arr[]={7,10,4,10,6,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    LeaderofArray(arr,n);
    return 0;
}

//output : 2 5 6 10
//time complexity : O(n)
