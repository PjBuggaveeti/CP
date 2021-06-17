//find the index of element which appears more than n/2 times where n is the size of array
//moore's voting algorithm
#include <iostream>
#include <algorithm>
using namespace std;
int majorityElement(int arr[],int n){    //function to find the candidate for majority
    int count=1,res=0;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    count=0;    //checking if the candidate is the majority element
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
    }
    if(count<=n/2){
        return -1;
    }
    return res; 
}
int main(){
    int arr[]={3,7,7,7,7,5};
    int n=sizeof(arr)/sizeof(arr[n]);
    cout<<majorityElement(arr,n);
    return 0;
}
