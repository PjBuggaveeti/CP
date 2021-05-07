//we are given heights of bars and we need to find out how much water we can collect between these bars. 
#include <iostream>
#include <algorithm>
using namespace std; 
int TrapRainWater(int arr[],int n){
    int trap=0;
    for(int i=1;i<n-1;i++){
        int left=arr[i];
        for(int j=0;j<i;j++){
            left=max(left,arr[j]);
        }
        int right=arr[i];
        for(int j=i+1;j<n;j++){
            right=max(right,arr[j]);
        }
        trap=trap+(min(left,right)-arr[i]);
    }
    return trap;
}
int main(){
    int arr[]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<TrapRainWater(arr,n);
    return 0;
}
