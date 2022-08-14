class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> mpp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto c : mpp){
            if(c.second > (n/3)){
                ans.push_back(c.first);
            }
        }
        return ans;
    }
};