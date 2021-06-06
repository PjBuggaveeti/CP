#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a,b,count=0;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        if(i>a && (n-i)<=b){
            count++;
        }
    }
    cout<<count;
    return 0;
}
/*
input : 5 2 3
output : 3
*/