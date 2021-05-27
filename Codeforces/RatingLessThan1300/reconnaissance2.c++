#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n,a[101],b[101];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m = 1000, diff = 0; 
    diff = abs(a[0] - a[n-1]);
    m = min(m,diff);
    int index1 = 1,index2 = n;
    for(int i=0; i<n; i++){
        diff = abs(a[i] - a[i+1]);
        if(m > diff){
            m = diff;
            index1 = i+1;
            index2 = i+2;
        }
    }
    cout<<index1<<" "<<index2<<endl;
    return 0;
}
/*
input : 
5
10 12 13 15 10
output :
1 5
*/