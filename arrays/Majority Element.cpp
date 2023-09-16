//problem link - https://leetcode.com/problems/majority-element/description
Class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int ans=-1,c=-1;    
        for(int i=0;i<nums.size();i++)
        {
            if(c<m[nums[i]])
            {
                ans=nums[i];
                c=m[nums[i]];
            }
        }
        return ans;
    }
};