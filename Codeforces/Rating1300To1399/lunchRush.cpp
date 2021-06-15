#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    __int64 n,k,f,t,joy= -1000000000;
    cin>>n>>k;
    while(n--){
        cin>>f>>t;
        if(t>k){
            joy=max(joy,f-(t-k));
        }
        else{
            joy=max(joy,f);
        }
    }
    cout<<joy;
    return 0;
}
/*
input :
4 6
5 8
3 6
2 3
2 2
output : 3
*/