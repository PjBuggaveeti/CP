#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int n, m;
    char a[101][101];
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>a[j][i];   
            if(a[j][i]=='.')
            {
                if((j+i)%2==0){
                    a[j][i]='B';
                }
                else{ 
                    a[j][i]='W';
                }
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
            cout<<a[j][i];
        cout<<endl;
    }
    return 0;
}
/*
input : 
2 2
..
..
output :
BW
WB
*/