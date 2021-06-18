#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,k,a[100000];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    for(int i=0;i<k;i++){
        cout<<n-i<<" ";
    }
    cout<<1<<" ";
    for(int i=2;i<=n-k;i++){
        cout<<i<<" ";
    }
    return 0;
}
/*
input : 5 2
output : 5 4 1 2 3
*/