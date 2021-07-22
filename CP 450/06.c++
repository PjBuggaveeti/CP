#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int arr[],int l,int r,int x);
void getUnion(int arr1[],int arr2[],int m,int n){
    if(m>n){   //make sure arr1 is smaller than arr2 
        int* flag=arr1;
        arr1=arr2;
        arr2=flag;

        int temp=m;
        m=n;
        n=temp;
    }
    sort(arr1,arr1+m);
    for(int i=0;i<m;i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<n;i++){
        if(binarySearch(arr1,0,m-1,arr2[i])==-1){
            cout<<arr2[i]<<" ";
        }
    }
}
void getIntersection(int arr1[],int arr2[],int m,int n){
    if(m>n){
        int* flag=arr1;
        arr1=arr2;
        arr2=flag;

        int temp=m;
        m=n;
        n=temp;
    }
    sort(arr1,arr1+m);
    for(int i=0;i<n;i++){
        if(binarySearch(arr1,0,m-1,arr2[i])!=-1){
            cout<<arr2[i]<<" ";
        }
    }
}
int binarySearch(int arr[],int l,int r,int x){
    if(l<=r){
        int mid=l+(r-1)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            return binarySearch(arr,l,mid-1,x);
        }
        else if(arr[mid]<x){
            return binarySearch(arr,mid+1,r,x);
        }
    }
    return -1;
}
int main(){
    int arr1[] = { 7, 1, 5, 2, 3, 6 };
    int arr2[] = { 3, 8, 6, 20, 7 };
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"The union of given arrays is :";
    getUnion(arr1,arr2,m,n);
    cout<<endl;
    cout<<"The intersection of given arrays is : ";
    getIntersection(arr1,arr2,m,n);
    return 0;
}