#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a[1000],countf=0,countz=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==5){
            countf++;
        }
        else if(a[i]==0){
            countz++;
        }
    }
    if(countz==0){
        cout<<-1;
    }
    else if(countf<9){
        cout<<0;
    }
    else{
        int m=countf-(countf%9);
        for(int i=0;i<m;i++){
            cout<<5;
        }
        for(int i=0;i<countz;i++){
            cout<<0;
        }
    }
    return 0;
}
/*
input : 
11
5 5 5 5 5 5 5 5 0 5 5
output :
5555555550
*/