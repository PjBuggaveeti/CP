#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"-1";
    }
    else{
        cout<<"2 1";
        for (int i = 3; i < n; i += 2)
        {
            cout << " " << i + 1 << " " << i;
        }
    }
    return 0;
}
//input : 4
//output : 2 1 4 3