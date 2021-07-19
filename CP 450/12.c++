#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void merge(int a[], int b[], int n, int m) {
	    int gap = ceil((n + m) / 2);
    	int i = 0;
    	while (gap > 0) {
    		if (i + gap > m + n) //checking if the 2nd iterator  is out of bound 
    		{
    			i = 0;
    			if (gap == 1){
                    break;
                }
    			gap = ceil(gap / 2);
    		}
    		else if (i < n && i + gap >= n) // 1st iterator is on 1st array and 2nd iterator is on 2nd  array
    		{
                if (a[i] > b[i + gap - n]){
    				swap(a[i], b[i + gap - n]);
                }
    			i++;
    		}
    		else if (i >= n && i + gap < m + n) // when 1st iterator and 2nd iterator are on 2nd array
    		{
    			if (b[i - n] > b[i + gap - n]){
    				swap(b[i - n], b[i + gap - n]);
                }
    			i++;
    		}
    		else //when both iterators are on 1st array
    		{
                if (a[i] > a[i + gap]){
    				swap(a[i], a[i + gap]);
                }
    			i++;
    		}
    	}
    	for (int i = 0; i < n; i++) {
            cout << a[i]<<" ";
        }
    	for (int i = 0; i < m; i++){
            cout<<b[i]<<" ";
        } 
}
int main(){
    int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for (int i = 0; i < n; i++){
        cin >> a[i];
    }
	for (int i = 0; i < m; i++){
         cin >> b[i];
    }
	merge(a, b, n, m);
    return 0;
}