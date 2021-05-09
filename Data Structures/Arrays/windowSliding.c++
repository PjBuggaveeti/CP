//given an array of integers and a number k. find the maximum sum of k consecutive integers. 
#include <iostream>
#include <algorithm>
using namespace std;
int maxSum(int arr[],int n,int k){
    if(n<k){
        cout<<"Invalid";
    }
   
    int max_sum=0;
    for(int i=0;i<k;i++){
        max_sum+=arr[i];
    }
    int cur_sum=max_sum;
    for(int i=k;i<n;i++){
        cur_sum+=(arr[i]-arr[i-k]); //sliding the window. add the last element of new block and subract the first element of previous block.
        max_sum=max(max_sum,cur_sum);
    }
    return max_sum;
}
int main(){
    int arr[]={1,8,30,-5,20,7};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxSum(arr,n,k);
    return 0;

}