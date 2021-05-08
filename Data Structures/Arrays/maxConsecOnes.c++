//count the maximum number of consecutive 1's 
#include <iostream>
#include <algorithm>
using namespace std;
int countMaxOnes(int arr[],int n){
    int count=0;
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count=0;
        }
        else{
            count++;
            res=max(res,count);
        }
        
    }
    return res;
}
int main(){
    int arr[]={0,1,1,0,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countMaxOnes(arr,n);
    return 0;
}