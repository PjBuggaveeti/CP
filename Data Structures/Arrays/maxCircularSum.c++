//find the maximum circular subarray sum
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
int overallSum(int arr[],int n){
    int max_normal=maxSubarraySum(arr,n);
    if(max_normal<0){
        return max_normal;
    }
    int arr_sum=0;
    for(int i=0;i<n;i++){
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum+maxSubarraySum(arr,n);
    return max(max_normal,max_circular);
}
int main(){
    int arr[]={-3,4,6,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<overallSum(arr,n);
    return 0;
}