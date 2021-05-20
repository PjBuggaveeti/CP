#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n;
    double sum=0;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double res = (double)sum / n;
	cout<<fixed<<setprecision(12)<<res<<endl;
    return 0;
}