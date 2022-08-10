class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int maxEnd = nums[0];
        for(int i=1;i<nums.size();i++){
           if(nums[i]+maxEnd > nums[i]){
               maxEnd = maxEnd+nums[i];
           }else{
               maxEnd = nums[i];
           }
           res = max(res, maxEnd);
            
        }
        return res;
    }
};