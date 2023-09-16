//problem link - https://leetcode.com/problems/rotate-array/description
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k=k%nums.size();
        reverse(nums.begin(),nums.end()-k);

        reverse(nums.end()-k,nums.end());
    
        reverse(nums.begin(),nums.end());
    }
};