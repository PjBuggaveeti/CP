#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m, last;
    double t, quo=0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= quo)
        {
            last = i;
            quo = ceil(t / m);
        }
    }

    cout << last << endl;
    return 0;
}
/*
input :
6 4
1 1 2 2 3 3 
output : 6
*/