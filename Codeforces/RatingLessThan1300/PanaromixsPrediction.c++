#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int i=0;
    for(int j=0;j<15;j++){
        if(n==arr[j] && m==arr[j+1]){
            i++;
        }
    }
    if(i==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}
/*
input : 3 5
output : YES
*/