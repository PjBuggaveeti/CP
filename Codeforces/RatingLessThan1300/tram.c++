#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,cap=0,tillnow=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        tillnow-=a;
        tillnow+=b;
        cap=max(tillnow, cap);
    }
    cout<<cap;
    return 0;
}
/*
4
0 3
2 5
4 2
4 0
output : 6
*/
