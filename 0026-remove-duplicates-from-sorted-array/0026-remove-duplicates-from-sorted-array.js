/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let i=0;
    let j=1;
    let n = nums.length;
    while(j<n){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
        j++;
        
    }
    return i+1;
};