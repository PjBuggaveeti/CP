#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,p,v,t,num,count=0;
    cin>>n;
    while(n--){
        cin>>p>>v>>t;
        num=p+v+t;
        if(num>=2){
            count++;
        }
    }
    cout<<count;;
    return 0;   
}
/*
input : 
2
1 0 0
0 1 1
output :  1
*/