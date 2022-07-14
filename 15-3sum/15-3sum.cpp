class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        int len = nums.size();
        if(len==0 || len<3){
            return {};
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int start = i+1;
            int end = nums.size()-1;
            while(start<end){
                int curSum = nums[i];
                curSum = curSum + nums[start];
                curSum = curSum + nums[end];
                if(curSum == 0){
                    ans.insert({nums[i],nums[start],nums[end]});
                    start++;
                    end--;
                }else if(curSum > 0){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        vector<vector<int>> s(ans.begin(),ans.end());
        return s;
    }
};

