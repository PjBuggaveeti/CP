#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;;
int main(){
    int k,a[12],sum=0,total=0;
    cin>>k;
    for(int i=0;i<12;i++){
        cin>>a[i];
        total+=a[i];
    }
    if(total<k){
        cout<<-1;
    }
    else{
        sort(a,a+ sizeof(a)/sizeof(a[0]),greater<int>()); //sorting in descending order
        int i=0;
        while(sum<k){
            sum+=a[i];
            i++;
        }
        cout<<i;
    }
    return 0;
}
/*
input :
11
1 1 4 1 1 5 1 1 4 1 1 1
output : 3
*/