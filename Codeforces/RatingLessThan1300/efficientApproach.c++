#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, index[100001];
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cin>>a;
        index[a] = i;
    }
    int m, b;
    cin>>m;
    long long Vasya(0), Petya(0);
    while (m--)
    {
        scanf("%d", &b);
        Vasya += index[b];
        Petya += (n + 1 - index[b]);
    }
    cout<<Vasya<<" "<<Petya;
    return 0;
}
/*
input:
3
3 1 2
3
1 2 3
output :
6 6
*/