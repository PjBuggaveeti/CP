#include <iostream>
#include <algorithm>
using namespace std;
double mean(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    double res=(double)(sum)/(double)n;
    return res;
}
double median(int arr[],int n){
    sort(arr,arr+n);
    if(n%2!=0){
        return (double)arr[n/2];
    }
    return (double)(arr[(n-1)/2]+arr[n/2])/2.0;
}
int main(){
    int arr[]={ 1, 3, 4, 2, 7, 5, 8, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Mean : "<<mean(arr,n)<<endl;
    cout<<"Median : "<<median(arr,n);
    return 0;
}