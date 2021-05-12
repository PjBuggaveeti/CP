//two elements a[i] and a[j] form an inversion if a[i]>a[j]
#include <iostream>
#include <algorithm>
using namespace std;
int countInversions(int arr[],int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int arr[]={3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countInversions(arr,n);
    return 0;
}
//output : 2 
//input : {8,4,2,1}
//output : 6 
//(8,4),(8,2),(8,1),(4,2),(4,1),(2,1)
