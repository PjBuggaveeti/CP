#include <iostream>
#include <algorithm>
using namespace std;
#define n 3
void multiply(int mat1[][n], int mat2[][n],int res[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]+=(mat1[i][k]*mat2[k][j]);
            }
        }
    }
}
int main(){
    int res[n][n];
    int mat1[n][n]={{1,1,1},
                    {2,2,2},
                    {3,3,3}};
    int mat2[n][n]={{1,1,1},
                    {2,2,2},
                    {3,3,3}};
    multiply(mat1,mat2,res);
    cout<<"Resultant Matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}