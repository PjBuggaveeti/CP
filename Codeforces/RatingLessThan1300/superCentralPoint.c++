#include <iostream>
#include <algorithm>
using namespace std;
int superCentral(int n,int a[],int b[]){
    int l,r,u,d,count=0,x,y;
    for(int i=0;i<n;i++){
        l=r=u=d=0;
        x=a[i],y=b[i];
        for(int j=0;j<n;j++){
            if(a[j]==x){  //if x cordinates are equal check y cordinates.
                if(b[j]>y)u++; 
                if(b[j]<y)d++;
            }
            if(b[j]==y){  // if y cordinates are equal check x cordinates.
                if(a[j]>x)r++;
                if(a[j]<x)l++;
            }
        }
        if(l>0 && r>0 && u>0 && d>0){  
            count++;
        }
    }
    return count;
}
int main(){
    int n,a[200],b[200];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    cout<<superCentral(n,a,b);
    return 0;
}
/*
input : 
5
0 0
0 1
1 0
0 -1
-1 0
output : 1 (0,0)
*/