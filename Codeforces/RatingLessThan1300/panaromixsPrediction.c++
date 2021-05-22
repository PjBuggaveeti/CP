#include <iostream>
using namespace std;
int main(){
    int m, n;
	int temp = 0;
	bool flag = true;
	cin >> m >> n;
	for (int i = m + 1; i <= n; i++) {
		for (int j = 2; j < m; j++) {
			if (i % j == 0)
			{
				flag = false;

			}
		}
		if (flag)
		{
			temp = i;
			break;

		} else {
			flag = true;
		}

	}
	if (temp == n) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
/*
input : 3 5
output : YES
*/
