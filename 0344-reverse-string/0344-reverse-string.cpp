class Solution {
public:
    void reverseString(vector<char>& s) {
        int i =0;
        int j= s.size()-1;
        char x;
        while(i<j){
            
            x=s[i];
            s[i]=s[j];
            s[j]=x;
            i++;
            j--;
        }
        for(int i =0;i<s.size();i++){
            cout<<s[i];
        }
    }
};