#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a[7],index=0;
    cin>>n;
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    int l=a[0];
    while(l<n){
        index++;
        index%=7;
        l+=a[index];
    }
    cout<<index+1;
    return 0;
}
/*
input :
100
15 20 20 15 10 30 45
output :
6
*/