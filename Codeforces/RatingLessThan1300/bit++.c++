#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,sum=0;
    string op;
    cin>>n;
    while(n--){
        cin>>op;
        if(op[1]=='+'){
            sum++;
        }
        else if(op[1]=='-'){
            sum--;
        }
    }
    cout<<sum;
    return 0;
}
/*
input  : 
2
X++
--X
output :
0
*/