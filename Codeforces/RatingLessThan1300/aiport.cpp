#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
    int n,m,a[1000];
    cin>>n>>m;
    for(int i=0;i<m;++i){
        cin>>a[i];
    }
    sort(a,a+m);
    int mini=0,num=a[0],index=0;
    for(int i=0;i<n;++i){
        mini+=num;
        num-=1;
        if(num==0){
            num=a[++index];
        }
    }
    sort(a,a+m,greater<int>());
    int maxi=0;
    while(n--){
        maxi+=a[0];
        a[0]-=1;
        for(int i=1;i<m;++i){
            if(a[i]<=a[i-1]){
                break;
            }
            swap(a[i],a[i-1]);
        }
    }
    cout<<maxi<<" "<<mini;
    return 0;
}
/*
input :
3 3
2 1 1
output :
4 4
*/