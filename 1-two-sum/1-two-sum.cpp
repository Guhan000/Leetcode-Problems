class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            int x = target - nums[i];
            
            if(s.find(x) != s.end()){
                
                ans.push_back(s[x]);
                ans.push_back(i);
                return ans;
            }
            s[nums[i]] = i;
        }
        return {-1,-1};
        
        
    }
};