#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    string p;\
    int temp=0;
    cin>>p;
    int len=p.length();
    for(int i=0;i<len;i++){
        if (p[i] >= 33 && p[i] <= 126) {
			if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
				temp = 1;
		}
    }
    if(temp){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
/*
input: Codeforces
output:
*/