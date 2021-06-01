#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,count=0;
    cin>>n>>m;
    int maxx=max(n,m);
    for(int i=0;i<=maxx;i++){
        for(int j=0;j<=maxx;j++){
            if((i*i)+j==n && (j*j)+i==m){
                count++;
            }
        }
    }
    cout<<count;
    return 0;  
}
/*
input : 4 20
output : 0
*/