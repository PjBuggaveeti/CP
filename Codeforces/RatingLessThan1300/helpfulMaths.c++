#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i+=2){
        for(int j=0;j<len-i-2;j+=2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }
    cout<<s;
    return 0;
}
/*
input: 3+2+1
output : 1+2+3
*/