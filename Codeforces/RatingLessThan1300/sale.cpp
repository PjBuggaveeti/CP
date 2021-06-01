    #include <iostream>
    #include <algorithm>
    using namespace std;
    int main(){
        int n,m,a[1000],sum=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<m;i++){
            if(a[i]<0){
                sum+=a[i];
            }
            else{
                break;
            }
        }
        cout<<-sum;
        return 0;
    }
/*
input : 
5 3
-6 0 35 -2 4
output : 8
*/