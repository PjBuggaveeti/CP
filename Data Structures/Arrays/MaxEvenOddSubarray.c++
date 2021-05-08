// we are given an array of length n. we need to find the maximum length subarry that contains even odd
#include <iostream>
#include <algorithm>
using namespace std;
int maxEvenOdd(int arr[],int n){
    int res=1;
    int cur=1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0)){
            cur++;
            res=max(res,cur);
        }
        else{
            cur=1;
        }
    }
    return res;
}
int main(){
    int arr[]={5,10,20,6,3,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxEvenOdd(arr,n);
    return 0;
}