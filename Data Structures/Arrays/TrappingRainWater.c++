//we are given heights of bars and we need to find out how much water we can collect between these bars. 
#include <iostream>
#include <algorithm>
using namespace std; 
int TrapRainWater(int arr[],int n){
    int trap=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                trap+=arr[j];
            }
            if(arr[j]==0){
                trap+=arr[i];
            }
        }
    }
    return trap;
}
int main(){
    int arr[]={5,0,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<TrapRainWater(arr,n);
    return 0;
}