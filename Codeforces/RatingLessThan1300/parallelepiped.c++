#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int a1,a2,a3;
    cin>>a1>>a2>>a3;  //a1=a*b, a2=b*c, a3=c*a.
    double a=sqrt(a1*a2/a3);  //finding the lengths in terms of face areas. 
    double b=sqrt(a2*a3/a1);
    double c=sqrt(a1*a3/a2);
    int sum=a+b+c;
    cout<<sum*4;
    return 0;
}
/*
input : 4 6 6
output : 28
*/