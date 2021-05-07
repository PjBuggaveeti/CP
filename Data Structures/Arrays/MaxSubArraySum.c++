#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={2,-1,4,-10,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_so_far=0,max_ending=0;
    for(int i=0;i<n;i++){
        max_ending+=arr[i];
        if(max_ending<0){
            max_ending=0;
        }
        else if(max_so_far<max_ending){
            max_so_far=max_ending;
        }
    }
    cout<<max_so_far<<endl;
    
}