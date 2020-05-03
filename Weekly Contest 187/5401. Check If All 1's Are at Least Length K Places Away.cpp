Given an array nums of 0s and 1s and an integer k, return True if all 1's are at least k places away from each other, otherwise return False.

Input: nums = [1,0,0,1,0,1], k = 2
Output: false
Explanation: The second 1 and third 1 are only one apart from each other.class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        if(k==0) return true;
        int initial = INT_MIN;
        for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            if(initial!=INT_MIN && i-initial <= k) {
                    return false;
            }
            else{
                initial = i;
            }
        }
    }
    return true;
    }
};

#################################################################SOLUTION##################################################################
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        if(k==0) return true;
        int initial = INT_MIN;
        for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            if(initial!=INT_MIN && i-initial <= k) {
                    return false;
            }
            else{
                initial = i;
            }
        }
    }
    return true;
    }
};
