#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        if(360%(180-a)==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
/*
input :
3
30
60
90
output:
NO
YES
YES
*/