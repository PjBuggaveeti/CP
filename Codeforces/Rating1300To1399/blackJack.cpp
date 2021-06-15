#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int diff=n-10;
    if(n<=10 || n>21){
        cout<<0;
    }
    else if(diff==10){
        cout<<15;
    }
    else{
        cout<<4;
    }
    return 0;
}
/*
input : 12
output : 4
*/