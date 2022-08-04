class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> s;
        vector<int> ans;
        for(int i=1;i<nums.size();i++){
            s.insert(nums[i-1]);
            if(s.find(nums[i])!=s.end()){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};