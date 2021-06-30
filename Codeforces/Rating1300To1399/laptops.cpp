#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#define ll long long int
using namespace std;
int main(){
    ll n,a,b,flag=0;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i].second>v[i+1].second){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"Happy Alex";
    }
    else{
        cout<<"Poor Alex";
    }
    return 0;
}