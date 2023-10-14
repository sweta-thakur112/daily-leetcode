class Solution {
public:
void help(int i,int n,vector<vector<int>>&ans,vector<int>& nums)
{
    if(i==n-1)
    {
        ans.push_back(nums);
        return;
    }
    for(int j=i;j<n;j++)
    {
        swap(nums[i],nums[j]);
        help(i+1,n,ans,nums);
        swap(nums[i],nums[j]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>>ans;
         help(0,nums.size(),ans,nums);
         return ans;
    }
};
