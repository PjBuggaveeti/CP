#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,a[100000],sum=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sum+=a[0]-1;
    for(int i=1;i<m;i++){
        if(a[i]>sum){
            sum+=(a[i]-sum);
        }
        if(a[i]<sum){
            sum+=(sum-)
        }
    }

}
