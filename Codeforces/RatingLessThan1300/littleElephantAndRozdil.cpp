#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,d[100000],index,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    int *m;
    m=std::min_element(d,d+n);
    for(int i=0;i<n;i++){
        if(d[i]==*m){
            count++;
            index=i;
        }
    }
    if(count>1){
        cout<<"Still Rozdil";
    }
    else{
        cout<<index+1;
    }
    return 0;
}
/*
input : 
7
7 4 47 100 4 9 12
output :
Still Rozdil
*/