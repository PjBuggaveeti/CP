#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if (k <= (n + 1) / 2)
	{
		cout << (k * 2) - 1 << endl;
	} else {
		cout << (k - ((n + 1) / 2)) * 2 << endl;
	}
    return 0;  
}
/*
input :
10 3
output: 5
*/