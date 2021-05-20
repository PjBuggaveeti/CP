#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int left,right,l=0,r=0;
    for(int i=0;i<n;i++){
        cin>>left>>right;
        l+=left;
        r+=right;
    }
    int res=min(l,n-l)+min(r,n-r);
    cout<<res;
    return 0;
}
/*
input:
5
1 0
1 0 
0 1
0 0
1 1
output :
4
*/