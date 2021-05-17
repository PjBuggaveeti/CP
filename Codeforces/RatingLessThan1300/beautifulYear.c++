#include <iostream>
#include <algorithm>
using namespace std; 
int main()
{
 
    int n,n1,n2,n3,n4;
    cin>>n;
    while(n>0)
        {
            n++;
            n1=n/1000;
            n2=(n%1000)/100;
            n3=((n%1000)%100)/10;
            n4=((n%1000)%100)%10;

            if(n1!=n2&&n1!=n3&&n1!=n4&&n4!=n3&&n4!=n2&&n3!=n2)
                break;
        }
        cout<<n;
        return 0;
}

//input : 1987
//output : 2013