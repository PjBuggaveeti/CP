#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s2;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            s2+='0';
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            s2+='1';
            ++i;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            s2+='2';
            ++i;
        }
    }
    cout<<s2;
    return 0;
}
/* 
input : -..-.--
output : 1012
*/
