#include <iostream>
#include <algorithm>
using namespace std;
int maxSubarraySum(int a[],int n){
    int maxTillHere=0,max_ending=0;
    for(int i=0;i<n;i++){
        max_ending+=a[i];
        if(maxTillHere<max_ending){
            maxTillHere=max_ending;
        }
        if(max_ending<0){
            max_ending=0;
        }
    }
    return maxTillHere;
}
int main(){
    int a[]={1,-2,3,4,-5};
    int n=sizeof(a)/sizeof(a[0]);
    int max_sum=maxSubarraySum(a,n);
    cout<<max_sum;
    return 0;
}