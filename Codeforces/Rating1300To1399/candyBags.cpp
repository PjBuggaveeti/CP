#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,sum,sq,a[101];
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
        for(int j=1;j<n;j++){
            cout<<n*j+(i+j)%n+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
input : 3
output :
1 5 9 
2 6 7
3 4 8
*/