#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
void solve(){
    int n;
    long long int  m;
    char s1[1000],s2[1000];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>s1[i];
    }
    while(m--){
        for(int i=0;i<n;i++){
            if((s1[i]=='0') && ((s1[i-1]=='1' && s1[i+1]!='1') ||  (s1[i-1]!='1' && s1[i+1]=='1'))){
                s2[i]='1';
            }
            else if(s1[i]=='1'){
                s2[i]='1';
            }
            else{
                s2[i]='0';
            }
        }
        strcpy(s1,s2);
    }  
    for(int i=0;i<n;i++){
        cout<<s1[i];
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}