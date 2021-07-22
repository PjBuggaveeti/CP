#include <iostream>
using namespace std;
struct Pair{
    int min;
    int max;
};
struct Pair getMinMax(int arr[],int size){
    struct Pair res;
    if(size==1){
        res.max=arr[0];
        res.min=arr[0];
    }
    if(arr[0]>arr[1]){
        res.max=arr[0];
        res.min=arr[1];
    }
    else if(arr[0]<arr[1]){
        res.min=arr[0];
        res.max=arr[1];
    }
    for(int i=2;i<size;i++){
        if(arr[i]>res.max){
            res.max=arr[i];
        }
        else if(arr[i]<res.min){
            res.min=arr[i];
        }
            
    }
    return res; 
}
int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    struct Pair res=getMinMax(arr,n);
    cout<<"Min : "<<res.min<<endl;
    cout<<"Max : "<<res.max<<endl;
}

//time complexity - O(n)