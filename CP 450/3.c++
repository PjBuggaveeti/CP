#include <iostream>
#include <algorithm>
using namespace std;
int kthSmallest(int arr[],int n, int k){
    sort(arr,arr+n);
    return arr[k-1];
}
int kthLargest(int arr[],int n,int k){
    sort(arr,arr+n);
    return arr[n-k];
}
int main(){
    int n=5;
    int k=2;
    int arr[]={12, 3, 5, 7, 19}; //after sorting 3,5,7,12,19 . 2nd smallest is 5, 2nd largest is 12
    cout<<"The kth smallest and largest  elements are : "<<kthSmallest(arr,n,k)<<" and "<<kthLargest(arr,n,k);
    return 0;
}
//time complexity is O(NlogN)