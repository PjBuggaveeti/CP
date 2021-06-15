#include <iostream> 
#include <algorithm>
using namespace std;
int main(){
    int x,y,x1,x2,y1,y2;
    cin>>x>>y;
    if(x>0 && y>0){
        x1=0,y1=abs(x+y),x2=abs(x+y),y2=0;
    }
    else if(x<0 && y>0){
        x1=-(abs(x)+y),y1=0,x2=0,y2=(abs(x)+y);
    }
    else if(x>0 && y<0){
        x1=0,y1=-(x+abs(y)),x2=(x+abs(y)),y2=0;
    }
    else if(x<0 && y<0){
        x1=x+y,y1=0,x2=0,y2=x+y;
    }
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
    return 0;
}
/*
input : -10 -5
output : -15 0 0 -15
*/