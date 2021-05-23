#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,l,k,p,d,nl,np,c;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=(l*k)/n;
    int b=c*d;
    int s=(p/np);
    int res=min(a,b);
    res=min(res,s);
    cout<<res/n;
    return 0;
}
/*
input: 5 100 10 1 19 90 4 3
output: 3
*/