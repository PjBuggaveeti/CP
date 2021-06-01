#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,a[10000],b[10000],ratio,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    ratio=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[j]%a[i]==0){
                ratio=max(ratio,b[j]/a[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[j]/a[i]==ratio && b[j]%a[i]==0){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
/*
input :
4
2 3 4 5
3
1 2 3
output :
2
*/