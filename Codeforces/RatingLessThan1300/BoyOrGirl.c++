#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.length();
    int count=0;
    sort(s.begin(), s.end());
    for (int i = 0; i < l; i++) {
		if (s[i] != s[i + 1])
		{
			count++;
		}
	}
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
/*
input
sevenkplus
output
CHAT WITH HER!
*/
