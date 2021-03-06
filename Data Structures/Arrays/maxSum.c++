//maximum sum such that no two elements are adjacent
#include <iostream>
#include <algorithm>
using namespace std;
int maxSum(int arr[], int n){
    int incl=arr[0];
    int excl=0;
    int excl_new;
    for(int i=1;i<n;i++){
       excl_new=max(incl,excl);  //current maximum exculding i
       incl=excl+arr[i];    //current maximum including i
       excl=excl_new; 
    }
    return max(incl,excl);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxSum(arr,n);
    return 0;
}

//output : 12
//time complexity : O(n)
