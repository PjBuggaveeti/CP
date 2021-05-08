#include <iostream>
#include <algorithm>
using namespace std;
int maxSubarraySum(int arr[],int n){
    int res=arr[0];
    int max_ending=arr[0];
    for(int i=1;i<n;i++){
        max_ending=max(max_ending+arr[i],arr[i]);
        res=max(res,max_ending);
    }
    return res;
}
int main(){
    int arr[]={-3,8,-2,4,-5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxSubarraySum(arr,n);
    return 0;
}
