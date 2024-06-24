class Solution {
public:
    bool isPalindrome(int x) {
        int originalnum=x;
        int reversenum=0;
        while(x>0)
        {
            int rem = x%10;
            if(reversenum>(numeric_limits<int>::max()-rem)/10){
                return false;
            }
            reversenum=reversenum*10+rem;
            x/=10;    
        }
     return(originalnum==reversenum);
    }
};