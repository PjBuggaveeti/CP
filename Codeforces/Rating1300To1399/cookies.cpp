#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a[101],odd=0,even=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2!=0){
            odd++;
        }
        else{
            even++;
        }
    }
    if(sum%2==0){
        cout<<even;
    }
    else{
        cout<<odd;
    }
    return 0;
}
/*
input :
10
1 2 2 3 4 4 4 2 2 2
output : 8
*/