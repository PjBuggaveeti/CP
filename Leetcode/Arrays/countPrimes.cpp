class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if(n==0 || n==1){
            return 0;
        }
        bool prime[n+1];
        memset(prime,true,sizeof(prime)); //setting all values of boolean array true
        for(int i=2;i*i<=n;i++){
            if(prime[i]==true){
                for(int j=i*i;j<n+1;j+=i){
                    prime[j]=false; //changing all the multiples of the number as false(not prime)
                }
            }
        }
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
            }
        }
        return count;
    }
};