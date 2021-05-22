#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        int len=s.length();
        if(len>10){
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}
/* 
input 
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
output :
word
l10n
i18n
p43s

*/