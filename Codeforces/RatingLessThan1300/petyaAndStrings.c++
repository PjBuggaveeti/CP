#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    char s1[100],s2[100];
    cin >> s1 >> s2;
    for(int i=0;i<strlen(s1);i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    cout << strcmp(s1,s2) << endl;
    return 0;
}
/*
input :
aaaa
aaaA
output : 
0
*/