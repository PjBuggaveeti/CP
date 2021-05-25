#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,f,sum=0,res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>f;
        sum+=f;
    }
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1){
            res++;
        }
    }
    cout<<res;
    return 0;
}
/*
input :
3
2 3 4
output:
4
*/
