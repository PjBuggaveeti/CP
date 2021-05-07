// maximum value of arr[j]-arr[i] where j>i
#include <iostream>
#include <algorithm>
using namespace std;
int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0];
    int min_val=arr[0];
    for(int j=1;j<n;j++){
        res=max(res,arr[j]-min_val);
        min_val=min(min_val,arr[j]);
    }
    return res;
}
int main(){
    int arr[]={2,10,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxDiff(arr,n);
    return 0;
}