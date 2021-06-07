#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s,s1;
    s1="hello";
    cin>>s;
    int j=0,k=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s1[j]){
            j++;
            k++;
        }
    }
    if(k==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
/*
input : aahellooo
output : YES
*/