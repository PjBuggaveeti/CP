#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int s, n;
	cin >> s >> n;
	vector<pair<int, int>> x;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		x.push_back(make_pair(a, b));
	}
	sort(x.begin(), x.end());
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (x[i].first < s) {
			s += x[i].second;
			count++;
		}
	}
	if(count==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	return 0;
}
/*
input : 
999 2
1010 10
67 89
output : YES
*/