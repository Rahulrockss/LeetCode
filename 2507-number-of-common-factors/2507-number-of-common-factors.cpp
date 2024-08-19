class Solution {
public:
    int commonFactors(int a, int b) {
        int count =0;
        int n = gcd(a,b);
        for (int i =1;i<=n;i++)
        {
            if(a%i==0 && b%i==0){
                count++;
            }
        }
        return count;
    }
    int gcd(int a, int b){
        if(b==0) {
            return a;
        }    
    return gcd(b,a%b);
   }
};