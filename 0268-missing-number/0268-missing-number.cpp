class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum=(n*(n+1))/2;
        int originalSum = 0;
        for(int i =0;i<n;i++){
            originalSum+=nums[i];
        }
        int missingNo=expectedSum-originalSum;
        return missingNo;
        
    }
};