#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int i,res,n,a[3001];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]>1)
            res=1;
        else
        {
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>1){
                {
                    res=a[i-1]+1;
                    break;
                }
            }
        }
        }
        if(res<=0)
            res=a[n-1]+1;
        cout<<res<<endl;
    }
    return 0;
}
/*
input : 
6
4 1 2 5 3 7
output : 6
*/