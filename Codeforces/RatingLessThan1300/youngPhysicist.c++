#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        int sumX=0,sumY=0,sumZ=0;
        sumX+=a;
        sumY+=b;
        sumZ+=c;
        if(sumX==0 && sumY==0 && sumZ==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    
    return 0;

}