#include <iostream>
#include <algorithm>
using namespace std; 
int main(){
    int a[6][6];
    int x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                x=i+1;
                y=j+1;
            }
        }
    }
    int res=abs(x-3)+abs(y-3);    //since we need the element to be in third row and third column
    cout<<res;
    return 0;
}
//input
/*0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0 */
//output : 3
