#include <iostream>
#include <algorithm>
using namespace std;
int missing(int arr[],int n){
    int n_sum=(n)*(n+1)/2;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    return n_sum-sum;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,10};
    int n=sizeof(arr) /sizeof(arr[0]) + 1;
    int res=missing(arr,n);
    cout<<res;
    return 0;
}