#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,a[100001];
    long long int sum=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sum=a[0]-1;
    for(int i=1;i<m;i++){
        if(a[i]>a[i-1]){
            sum+=(a[i]-a[i-1]);
        }
        else if(a[i]<a[i-1]){
            sum+=((n-a[i-1])+a[i]);
        }
        else {
            sum+=0;
        }
    }
    cout<<sum;

}
