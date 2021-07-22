#include <iostream>
using namespace std;
void sort012(int a[], int n)
{
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count0++;
        }
        else if(a[i]==1){
            count1++;
        }
        else if(a[i]==2){
            count2++;
        }
    }
    for(int i=0;i<count0;i++){
        a[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        a[i]=1;
    }
    for(int i=count0+count1;i<count0+count1+count2;i++){
        a[i]=2;
    }
}
int main(){
    int n=4;
    int arr[]={0,1,2,1};
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}