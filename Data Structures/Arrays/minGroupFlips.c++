
//you are given a binary array. Target is  to make all the binary elements same by making minimum group flips
//logic :  
//two possibilities: 
//1)if the beginning and end are same the groups count difference is 1 
//2)if beginning and end are different the groups count differ by 0.

#include <iostream>
#include <algorithm>
using namespace std; 
void printGroups(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0]){
                cout<<"From "<<i<<" to ";
            }
            else{
                cout<<(i-1)<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0]){
        cout<<(n-1)<<endl;
    }
}
int main(){
    int arr[]={0,0,1,1,0,0,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    printGroups(arr,n);
    return 0;
}
