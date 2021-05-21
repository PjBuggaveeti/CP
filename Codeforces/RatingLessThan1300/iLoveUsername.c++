#include <iostream>
 
using namespace std;
 
int main()
{
    int n, points;
    cin >> n >> points;
    int min(points), max(points), amazing=0;
    while (--n)
    {
        cin >> points;
        if (points < min)
        {
            min = points;
            ++amazing;
        }
        if (points > max)
        {
            max = points;
            ++amazing;
        }
    }
    cout << amazing << endl;
    return 0;
}
/*
5
100 50 200 150 200
output : 2
*/