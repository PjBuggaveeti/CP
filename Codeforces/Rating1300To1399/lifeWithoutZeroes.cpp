#include <iostream>
#include <algorithm>
using namespace std;
int remove_zeros(int n)
{
    int r,num=0,p=1;
    while(n!=0){
       r=n%10;
        n=n/10;
        if(r!=0){
            num+=r*p;
            p*=10;
        }  
    }
    return num;

}
int main(){
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    a=remove_zeros(a);
    b=remove_zeros(b);
    c=remove_zeros(c);
    if(a+b==c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
/*
input : 
105 
106
output : NO
*/