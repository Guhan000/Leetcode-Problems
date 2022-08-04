class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size()-1;i++){
            s.insert(nums[i]);
            if(s.find(nums[i+1]) != s.end()){
                return true;
            }
        }
        return false;
    }
};