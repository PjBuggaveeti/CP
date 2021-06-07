#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,f[1000];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>f[i];
    }
    sort(f,f+m);
    int diff=f[n-1]-f[0];
    for(int i=0;i<=(m-n);i++){
        for(int j=i+(n-1);j<m;j++){
            diff=min(diff,f[j]-f[i]);
        }
    }
   cout<<diff;
    return 0;
}
/*
input : 
4 5
818 136 713 59 946
output : 759
*/