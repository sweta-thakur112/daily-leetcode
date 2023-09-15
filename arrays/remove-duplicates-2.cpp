//problem link -- https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int c=0,i=0,j=1;
      while(j<nums.size())
      {
        if(nums[i]!=nums[j])
        {
          i=j;
          j++;
          c=0;
        }
        else
        {
         if(c==1)
         {
           nums[j]=500006;
           j++;
         }
         else
         {
           c++;
           i++;
           j++;

         }
        }

      }
     int nonZero= 0;
     for(int i = 0; i < nums.size(); i++){
        if(nums[i] !=500006){
            nums[nonZero] = nums[i];
            nonZero++;
        }
    }
    return  nonZero;
    }
};